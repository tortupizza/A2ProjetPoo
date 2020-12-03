#include "MyForm.h"
#include "personne.h"
#include "adresse.h"
#include "Factures.h"
#include "Commande.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Prosit6BDD::MyForm monFormulaire;//ATTENTION: ici testWin est le nom du projet. Vous devez l’adapter au nom de votre projet
	Application::Run(% monFormulaire);
}

void Prosit6BDD::MyForm::afficher()
{
	Personne personne(ligne);
	textBox1->Text = personne.getID();
	textBox2->Text = personne.getNom();
	textBox3->Text = personne.getPrenom();
	textBox4->Text = personne.getNative();
	textBox5->Text = personne.getAchat1();
	Adresse adresse;
	AdresseTable->Columns->Clear();
	AdresseTable->DataSource = adresse.getTable("ID_client",Convert::ToInt32(textBox1->Text));
	AdresseTable->DataMember = "Adresse_ID";
	AdresseTable->Columns["ID"]->Visible = false;
	Factures factures;
	DgvFactures->Columns->Clear();
	DgvFactures->DataSource = factures.getTable("ID_client", Convert::ToInt32(textBox1->Text));
	DgvFactures->DataMember = "facture_ID";
	DgvFactures->Columns["ID"]->Visible = false;
	Commande commande;
	DgvCommande->Columns->Clear();
	DgvCommande->DataSource = commande.getTable("reference", factures.getReference(Convert::ToInt32(textBox1->Text)));
	DgvCommande->DataMember = "Commande_ID";

}

void Prosit6BDD::MyForm::afficher(int ID)
{
	Personne personne;
	textBox1->Text = Convert::ToString(ID);
	textBox2->Text = personne.getNom(ID);
	textBox3->Text = personne.getPrenom(ID);
	textBox4->Text = personne.getNative(ID);
	textBox5->Text = personne.getAchat1(ID);
	Adresse adresse;
	AdresseTable->Columns->Clear();
	AdresseTable->DataSource = adresse.getTable("ID_client",Convert::ToInt32(textBox1->Text));
	AdresseTable->DataMember = "Adresse_ID";
	AdresseTable->Columns["ID"]->Visible = false;
	Factures factures;
	DgvFactures->Columns->Clear();
	DgvFactures->DataSource = factures.getTable("ID_client", Convert::ToInt32(textBox1->Text));
	DgvFactures->DataMember = "facture_ID";
	DgvFactures->Columns["ID"]->Visible = false;
	Commande commande;
	DgvCommande->Columns->Clear();
	DgvCommande->DataSource = commande.getTable("reference", factures.getReference(Convert::ToInt32(textBox1->Text)));
	DgvCommande->DataMember = "Commande_ID";

}
