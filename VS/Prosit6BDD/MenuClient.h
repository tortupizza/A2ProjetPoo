#pragma once
#include "CL_CAD.h"
#include "personne.h"
#include "Adresse.h"
#include "Commande.h"
#include <iostream>

namespace Prosit6BDD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: int NBligne;
	private: System::Windows::Forms::DataGridView^ AdresseTable;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::DataGridView^ DgvFactures;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ DgvCommande;

	private: System::Windows::Forms::Label^ label8;


		   CL_CAD BDD;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			NBligne = BDD.NB("Client");
			if (NBligne > 0) {
				afficher();
			}
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAfficher;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ btnAjouter;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button2;
	private: int ligne = 0;
	private: void afficher();
			void afficher(int ID);

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnAfficher = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnAjouter = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->AdresseTable = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->DgvFactures = (gcnew System::Windows::Forms::DataGridView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->DgvCommande = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AdresseTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvFactures))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvCommande))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAfficher
			// 
			this->btnAfficher->Location = System::Drawing::Point(297, 204);
			this->btnAfficher->Name = L"btnAfficher";
			this->btnAfficher->Size = System::Drawing::Size(164, 72);
			this->btnAfficher->TabIndex = 0;
			this->btnAfficher->Text = L"Afficher";
			this->btnAfficher->UseVisualStyleBackColor = true;
			this->btnAfficher->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(27, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(219, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nom";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(27, 98);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(219, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Prenom";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(27, 153);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(219, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(467, 243);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 33);
			this->button3->TabIndex = 8;
			this->button3->Text = L"<";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(467, 204);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 33);
			this->button4->TabIndex = 9;
			this->button4->Text = L">";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// btnAjouter
			// 
			this->btnAjouter->Location = System::Drawing::Point(603, 202);
			this->btnAjouter->Name = L"btnAjouter";
			this->btnAjouter->Size = System::Drawing::Size(69, 74);
			this->btnAjouter->TabIndex = 10;
			this->btnAjouter->Text = L"Ajouter";
			this->btnAjouter->UseVisualStyleBackColor = true;
			this->btnAjouter->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(522, 243);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 33);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Supprimer";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(522, 202);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// AdresseTable
			// 
			this->AdresseTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->AdresseTable->Location = System::Drawing::Point(297, 48);
			this->AdresseTable->Name = L"AdresseTable";
			this->AdresseTable->Size = System::Drawing::Size(375, 145);
			this->AdresseTable->TabIndex = 13;
			this->AdresseTable->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::AdresseTable_CellEndEdit);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Date de Naissance";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(27, 206);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(219, 20);
			this->textBox4->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 240);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Date du 1er achat";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(27, 256);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(219, 20);
			this->textBox5->TabIndex = 16;
			// 
			// DgvFactures
			// 
			this->DgvFactures->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgvFactures->Location = System::Drawing::Point(27, 311);
			this->DgvFactures->Name = L"DgvFactures";
			this->DgvFactures->Size = System::Drawing::Size(645, 133);
			this->DgvFactures->TabIndex = 18;
			
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(301, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Adresse";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(24, 295);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Facture";
			// 
			// DgvCommande
			// 
			this->DgvCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgvCommande->Location = System::Drawing::Point(27, 482);
			this->DgvCommande->Name = L"DgvCommande";
			this->DgvCommande->Size = System::Drawing::Size(645, 133);
			this->DgvCommande->TabIndex = 21;
			this->DgvCommande->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::CommandeTable_CellEndEdit);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(24, 466);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Commande";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 637);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->DgvCommande);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->DgvFactures);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->AdresseTable);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->btnAjouter);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnAfficher);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AdresseTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvFactures))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvCommande))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (BDD.verification("ID",Convert::ToInt32(textBox1->Text),"Client")==1) {
				afficher(Convert::ToInt32(textBox1->Text));
				ligne = BDD.position("Client","ID",Convert::ToInt32(textBox1->Text)-1);
			}
			else {
				MessageBox::Show("ID inexistant");
			}

		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			ligne = Convert::ToInt32(textBox1->Text) - 1;
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (ligne > 0) {
				ligne -= 1;
			}
			else {
				ligne = NBligne-1;
			}
			afficher();
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (ligne < NBligne-1) {
				ligne +=1;
			}
			else {
				ligne = 0;
			}
			afficher();
		}
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			Personne personne;
			personne.ajouter(Convert::ToString(textBox2->Text), Convert::ToString(textBox3->Text), Convert::ToString(textBox4->Text));
			NBligne += 1;
			afficher(BDD.MaxID("Client","ID"));
			ligne = NBligne-1;
		}
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			Personne personne;
			personne.supprimer(Convert::ToInt32(textBox1->Text));
			ligne -= 1;
			NBligne -= 1;
			afficher();
		}
		private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
			if (Convert::ToString(textBox1->Text) != "") {
				Personne personne(ligne);
				if (Convert::ToString(textBox2->Text) != "") {
					personne.setNom(Convert::ToString(textBox2->Text), Convert::ToInt32(textBox1->Text));
				}
				if (Convert::ToString(textBox3->Text) != "") {
					personne.setPrenom(Convert::ToString(textBox3->Text), Convert::ToInt32(textBox1->Text));
				}
				if (Convert::ToString(textBox4->Text) != "") {
					personne.setNative(Convert::ToString(textBox4->Text), Convert::ToInt32(textBox1->Text));
				}
				if (Convert::ToString(textBox5->Text) != "") {
					personne.setAchat1(Convert::ToString(textBox5->Text), Convert::ToInt32(textBox1->Text));
				}
			}
		}

		void AdresseTable_CellEndEdit(System::Object^ sender, DataGridViewCellEventArgs^ e)
		{
			Adresse adresse;
			if (e->ColumnIndex == 0) {
				MessageBox::Show("Vous ne pouvez pas modifier l'ID");
			}else{
				int ID_personne = Convert::ToInt32(textBox1->Text);
				if (e->RowIndex < adresse.NbAdresse("Id_Client",ID_personne)) {

					int ID = Convert::ToInt32(AdresseTable->Rows[e->RowIndex]->Cells[0]->Value->ToString());
					String^ modifier = AdresseTable->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();
					if (e->ColumnIndex == 1) {
						adresse.SetRue(ID, modifier);
					}
					else if (e->ColumnIndex == 2) {
						adresse.SetVille(ID, modifier);
					}else{
						adresse.SetCP(ID, modifier);
					}

					
				}else {

					String^ Rue = AdresseTable->Rows[e->RowIndex]->Cells[1]->Value->ToString();
					String^ Ville = AdresseTable->Rows[e->RowIndex]->Cells[2]->Value->ToString();
					String^ CP = AdresseTable->Rows[e->RowIndex]->Cells[3]->Value->ToString();
					
					adresse.ajouter("ID_Client",Rue,Ville,CP, Convert::ToString(ID_personne));
				}
			}
			afficher();

			// Clear the row error in case the user presses ESC.   
			//dataGridView1.Rows[e.RowIndex].ErrorText = String.Empty;
		}
		
		void CommandeTable_CellEndEdit(System::Object^ sender, DataGridViewCellEventArgs^ e)
		{
			
			Commande commande;
			if (e->ColumnIndex == 0) {
				MessageBox::Show("Vous ne pouvez pas modifier la référence");
			}
			else {
				int ID_personne = Convert::ToInt32(textBox1->Text);
				if (e->RowIndex < commande.NbCommandes("ID_Client", ID_personne)) {

					int ID = Convert::ToInt32(DgvCommande->Rows[e->RowIndex]->Cells[0]->Value->ToString());
					
					String^ modifier = DgvCommande->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString();

					if (e->ColumnIndex == 1) {
						commande.SetDateLiv(ID, modifier);
					}
					else if (e->ColumnIndex == 2) {
						commande.SetDateCom(ID, modifier);
					}
					else if (e->ColumnIndex == 3) {
						commande.SetDateEmi(ID, modifier);
					}
					else if (e->ColumnIndex == 4) {
						commande.SetNbArt(ID, modifier);
					}
					else if (e->ColumnIndex == 5) {
						commande.SetMontantHT(ID, modifier);
					}
					else if (e->ColumnIndex == 6) {
						commande.SetMontantTVA(ID, modifier);
					}
					else if (e->ColumnIndex == 7) {
						commande.SetMontantTTC(ID, modifier);
					}
					else {
						MessageBox::Show("Vous ne pouvez pas modifier cette colonne");
					}
				}
				else {

					String^ Liv = DgvCommande->Rows[e->RowIndex]->Cells[1]->Value->ToString();
					String^ Com = DgvCommande->Rows[e->RowIndex]->Cells[2]->Value->ToString();
					String^ Emi = DgvCommande->Rows[e->RowIndex]->Cells[3]->Value->ToString();
					String^ NbArt = DgvCommande->Rows[e->RowIndex]->Cells[4]->Value->ToString();
					String^ HT = DgvCommande->Rows[e->RowIndex]->Cells[5]->Value->ToString();
					String^ TVA = DgvCommande->Rows[e->RowIndex]->Cells[6]->Value->ToString();
					String^ TTC = DgvCommande->Rows[e->RowIndex]->Cells[7]->Value->ToString();

					commande.ajouter(Liv, Com, Emi, NbArt, HT,Convert::ToString(ID_personne));
				}
			}
			afficher();
			
			// Clear the row error in case the user presses ESC.   
			//dataGridView1.Rows[e.RowIndex].ErrorText = String.Empty;
		}

};
}
