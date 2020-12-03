#pragma once
#using <System.data.dll>
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
#include"CL_CAD.h"

ref class Factures
{
private:
	DataSet^ DS;
	CL_CAD^ BDD = gcnew CL_CAD;
	int ligne;
	String^ table = "facture";
	String^ entete0 = "ID";
	String^ entete1 = "nom_societe";
	String^ entete2 = "adresse_societe";
	String^ entete3 = "numero_de_service";
	String^ entete4 = "logo";
	String^ entete5 = "ID_Client";
	String^ entete6 = "reference";
public:
	DataSet^ getTable(String^ entete, int ID);
	int getReference(int ID);
	int NbFactures(String^ enteteIdEtranger, int IdEtranger);
	void SetFact(String^ entete, int ID, String^ mot);
	void SetNom(int ID, String^ mot);
	void SetAdr(int ID, String^ mot);
	void SetNumServ(int ID, String^ mot);
	void SetLogo(int ID, String^ mot);
	void SetIdClient(int ID, String^ mot);
	void SetReference(int ID, String^ mot);
	void ajouter(String^ nom, String^ Adresse, String^ NumServ,String^ logo, String^ IdClient, String^ reference);
};
