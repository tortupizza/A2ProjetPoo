#include "CL_CAD.h"
#include <iostream>

CL_CAD::CL_CAD()
{
	String^ requeteSQL = "RIEN";
	String^ connexion = "Data Source=(localdb)\\MSSQLLocalDB;" +
		"Initial Catalog=sequence0;" +
		"Integrated Security=True;" +
		"Pooling=False;" +
		"USER ID = DESKTOP - M896LFS\\33676;";
	connect = gcnew SqlConnection(connexion);
}

String^ CL_CAD::select(String^ table,int ligne, int colonne)
{
	String^ retour;
	String^ requeteSQL = "select * FROM "+table;
	SqlCommand^ command = gcnew SqlCommand(requeteSQL, connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, table+"_ID");
	retour=Convert::ToString(DS->Tables[table+"_ID"]->Rows[ligne]->ItemArray[colonne]);
	return retour;
}

String^ CL_CAD::selectWhere(String^ table,String^ entete,int ID,int colonne)
{
	String^ retour;
	String^ requeteSQL = "select * FROM "+table+" WHERE "+entete+" = " + ID;
	SqlCommand^ command = gcnew SqlCommand(requeteSQL, connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, entete);
	retour = Convert::ToString(DS->Tables[entete]->Rows[0]->ItemArray[colonne]);
	return retour;
}

String^ CL_CAD::selectWhereString(String^ table, String^ entete,String^ value , int colonne)
{
	String^ retour;
	String^ requeteSQL = "select * FROM " + table + " WHERE " + entete + " = " + value;
	SqlCommand^ command = gcnew SqlCommand(requeteSQL, connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, entete);
	retour = Convert::ToString(DS->Tables[entete]->Rows[0]->ItemArray[colonne]);
	return retour;
}

void CL_CAD::ajouter(String^ table, String^ entete,String^ Value)
{
	String^ requeteSQL = "INSERT INTO " + table + " ("+entete+") VALUES (" + Value + ")";
	action(requeteSQL);
}

void CL_CAD::action(String^ requeteSQL)
{
	SqlCommand^ command = gcnew SqlCommand(requeteSQL, connect);
	connect->Open();
	command->ExecuteNonQuery();
	connect->Close();
}

void CL_CAD::supprimer(String^table, String^ entete0, int ID)
{
	String^ requeteSQL = "DELETE FROM "+table+" WHERE "+entete0+" = " + ID;
	action(requeteSQL);
}

void CL_CAD::modifier(String^ table,String^ entete0,String^ entetemod, String^ mot, int ID) {
	String^ requeteSQL = "UPDATE "+table+" SET "+entetemod+" = '" + mot + "' WHERE "+entete0+" = " + ID;
	action(requeteSQL);
}

int CL_CAD::NB(String^ table) {
	int retour;
	SqlCommand^ command = gcnew SqlCommand("SELECT COUNT (*) FROM "+table,connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS,"Count");
	retour = Convert::ToInt32(DS->Tables["Count"]->Rows[0]->ItemArray[0]);
	return retour;
}

int CL_CAD::position(String^ table,String^ entete,int ID)
{
	int retour;
	SqlCommand^ command = gcnew SqlCommand(("SELECT COUNT (*) FROM "+table+" WHERE "+entete+" <= " + ID),connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, "position");
	retour = Convert::ToInt32(DS->Tables["position"]->Rows[0]->ItemArray[0]);
	return retour;
}

int CL_CAD::verification(String^ entete,int ID,String^ table)
{
	int retour;
	SqlCommand^ command = gcnew SqlCommand(("SELECT COUNT (*) FROM "+table+" WHERE "+entete+" = " + ID),connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, "position");
	retour = Convert::ToInt32(DS->Tables["position"]->Rows[0]->ItemArray[0]);
	return retour;
}

int CL_CAD::MaxID(String^ table, String^ entete0)
{
	int retour;
	SqlCommand^ command=gcnew SqlCommand(("SELECT MAX ("+entete0+") FROM "+ table),connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, "IDMAX");
	retour = Convert::ToInt32(DS->Tables["IDMAX"]->Rows[0]->ItemArray[0]);
	return retour;
}

DataSet^ CL_CAD::getTableWhere(String^ table,String^ entete1,String^ entete0,int ID) {

	SqlCommand^ command = gcnew SqlCommand(("SELECT "+entete1+" FROM "+table+" WHERE "+entete0+" = " + ID), connect);
	adapter = gcnew SqlDataAdapter(command);
	DS = gcnew DataSet();
	adapter->Fill(DS, table+"_ID");
	return DS;
}