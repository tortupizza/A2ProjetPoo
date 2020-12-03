#pragma once
#using <System.data.dll>
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
#include"CL_CAD.h"

ref class Adresse
{
private:
	DataSet^ DS;
	CL_CAD^ BDD = gcnew CL_CAD;
	int ligne;
	String^ table = "Adresse";
	String^ entete0 = "ID";
	String^ entete1 = "N_Rue";
	String^ entete2 = "Ville";
	String^ entete3 = "Code_Postale";
	String^ entete4 = "ID_client";
	String^ entete5 = "ID_Personnel";
public:
	DataSet^ getTable(String^ entete, int ID);
	int NbAdresse(String^ enteteIdEtranger,int IdEtranger);
	void SetAdr(String^ entete, int ID, String^ mot);
	void SetRue(int ID, String^ mot);
	void SetVille(int ID, String^ mot);
	void SetCP(int ID, String^ mot);
	void SetIdClient(int ID, String^ mot);
	void SetIdPersonnel(int ID, String^ mot);
	void ajouter(String^ entete45, String^ Rue, String^ Ville, String^ CP, String^ IdEtranger);
};

