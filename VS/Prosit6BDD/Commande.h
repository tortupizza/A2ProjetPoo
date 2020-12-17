#pragma once
#using <System.data.dll>
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;
#include"CL_CAD.h"

ref class Commande
{
private:
	DataSet^ DS;
	CL_CAD^ BDD = gcnew CL_CAD;
	int ligne;
	String^ table = "Commande";
	String^ entete0 = "reference";
	String^ entete1 = "date_de_livraison";
	String^ entete2 = "date_de_commande";
	String^ entete3 = "date_d_emission";
	String^ entete4 = "nb_d_article";
	String^ entete5 = "montant_total_HT";
	String^ entete6 = "montant_total_TVA";
	String^ entete7 = "montant_total_TTC";
	String^ entete8 = "ID_Client";
public:
	DataSet^ getTable(String^ entete, int ID);
	int NbCommandes(String^ enteteIdEtranger, int IdEtranger);
	void SetCommande(String^ entete, int ID, String^ mot);
	void SetRef(int ID, String^ mot);
	void SetDateCom(int ID, String^ mot);
	void SetDateLiv(int ID, String^ mot);
	void SetDateEmi(int ID, String^ mot);
	void SetNbArt(int ID, String^ mot);
	void SetMontantHT(int ID, String^ mot);
	void SetMontantTVA(int ID, String^ mot);
	void SetMontantTTC(int ID, String^ mot);
	void ajouter(String^ date_de_livraison, String^ date_de_commande, String^ date_d_emission, String^ nb_d_article, String^ montant_HT, String^ ID_Client);
};