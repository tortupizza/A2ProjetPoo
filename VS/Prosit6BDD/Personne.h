#pragma once
#using <System.data.dll>
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
#include "CL_CAD.h"

ref class Personne
{
private:
	CL_CAD^ BDD = gcnew CL_CAD;
	int ligne;
	String^ table = "Client";
	String^ entete0 = "ID";
	String^ entete1 = "Nom";
	String^ entete2 = "Prenom";
	String^ entete3 = "date_de_naissance";
	String^ entete4 = "date_premier_achat";
public:
	Personne();
	Personne(int ligne);

	void ajouter(String^ Nom,String^ Prenom,String^ Native);

	String^ getID();
	String^ getNom();
	String^ getPrenom();
	String^ getNative();
	String^ getAchat1();
	String^ getNom(int ID);
	String^ getPrenom(int ID);
	String^ getNative(int ID);
	String^ getAchat1(int ID);
	

	void setNom(String^ Nom,int ID);
	void setPrenom(String^ Prenom,int ID);
	void setNative(String^ NativeDate, int ID);
	void setAchat1(String^ AchatDate, int ID);

	void supprimer(int ID);
	int VerifName(String^ Nom, String^ Prenom);
	int getIDWhere(String^ Nom, String^ Prenom);
};

