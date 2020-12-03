#pragma once
#include "CL_CAD.h"
#include "personne.h"
#include "Adresse.h"
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ clientsCommandeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personnelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stocksToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ statistiquesToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel_Personnel;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;





















	private: System::Windows::Forms::Panel^ panel_ClientsCommande;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label22;





















private: System::Windows::Forms::Panel^ panel_Stats;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBox28;

private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::DataGridView^ dataGridView6;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::RadioButton^ radioButton2;
private: System::Windows::Forms::RadioButton^ radioButton1;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::Panel^ panel_Stocks;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::DataGridView^ dataGridView5;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label26;































































































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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->clientsCommandeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personnelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stocksToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statistiquesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel_Personnel = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel_ClientsCommande = (gcnew System::Windows::Forms::Panel());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel_Stats = (gcnew System::Windows::Forms::Panel());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->panel_Stocks = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AdresseTable))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvFactures))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvCommande))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->panel_Personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel_ClientsCommande->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel_Stats->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->panel_Stocks->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAfficher
			// 
			this->btnAfficher->Location = System::Drawing::Point(300, 217);
			this->btnAfficher->Name = L"btnAfficher";
			this->btnAfficher->Size = System::Drawing::Size(164, 72);
			this->btnAfficher->TabIndex = 0;
			this->btnAfficher->Text = L"Afficher";
			this->btnAfficher->UseVisualStyleBackColor = true;
			this->btnAfficher->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(30, 61);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(219, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nom";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(30, 111);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(219, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Prenom";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(30, 166);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(219, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(470, 256);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 33);
			this->button3->TabIndex = 8;
			this->button3->Text = L"<";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(470, 217);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 33);
			this->button4->TabIndex = 9;
			this->button4->Text = L">";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// btnAjouter
			// 
			this->btnAjouter->Location = System::Drawing::Point(606, 215);
			this->btnAjouter->Name = L"btnAjouter";
			this->btnAjouter->Size = System::Drawing::Size(69, 74);
			this->btnAjouter->TabIndex = 10;
			this->btnAjouter->Text = L"Ajouter";
			this->btnAjouter->UseVisualStyleBackColor = true;
			this->btnAjouter->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(525, 256);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 33);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Supprimer";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(525, 215);
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
			this->AdresseTable->Location = System::Drawing::Point(300, 61);
			this->AdresseTable->Name = L"AdresseTable";
			this->AdresseTable->Size = System::Drawing::Size(375, 145);
			this->AdresseTable->TabIndex = 13;
			this->AdresseTable->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::AdresseTable_CellEndEdit);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(36, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Date de Naissance";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(30, 219);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(219, 20);
			this->textBox4->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(36, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Date du 1er achat";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(30, 269);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(219, 20);
			this->textBox5->TabIndex = 16;
			// 
			// DgvFactures
			// 
			this->DgvFactures->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgvFactures->Location = System::Drawing::Point(30, 324);
			this->DgvFactures->Name = L"DgvFactures";
			this->DgvFactures->Size = System::Drawing::Size(645, 133);
			this->DgvFactures->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(304, 48);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Adresse";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 308);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Facture";
			// 
			// DgvCommande
			// 
			this->DgvCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DgvCommande->Location = System::Drawing::Point(30, 495);
			this->DgvCommande->Name = L"DgvCommande";
			this->DgvCommande->Size = System::Drawing::Size(645, 133);
			this->DgvCommande->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(27, 479);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Commande";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->clientsCommandeToolStripMenuItem,
					this->personnelToolStripMenuItem, this->stocksToolStripMenuItem, this->statistiquesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(699, 24);
			this->menuStrip1->TabIndex = 23;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// clientsCommandeToolStripMenuItem
			// 
			this->clientsCommandeToolStripMenuItem->Name = L"clientsCommandeToolStripMenuItem";
			this->clientsCommandeToolStripMenuItem->Size = System::Drawing::Size(123, 20);
			this->clientsCommandeToolStripMenuItem->Text = L"Clients/Commande";
			this->clientsCommandeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clientsCommandelToolStripMenuItem_Click);
			// 
			// personnelToolStripMenuItem
			// 
			this->personnelToolStripMenuItem->Name = L"personnelToolStripMenuItem";
			this->personnelToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->personnelToolStripMenuItem->Text = L"Personnel";
			this->personnelToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::PersonnelToolStripMenuItem_Click);
			// 
			// stocksToolStripMenuItem
			// 
			this->stocksToolStripMenuItem->Name = L"stocksToolStripMenuItem";
			this->stocksToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->stocksToolStripMenuItem->Text = L"Stocks";
			this->stocksToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::stocksToolStripMenuItem_Click);
			// 
			// statistiquesToolStripMenuItem
			// 
			this->statistiquesToolStripMenuItem->Name = L"statistiquesToolStripMenuItem";
			this->statistiquesToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->statistiquesToolStripMenuItem->Text = L"Statistiques";
			this->statistiquesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::statistiquesToolStripMenuItem_Click);
			// 
			// panel_Personnel
			// 
			this->panel_Personnel->Controls->Add(this->button10);
			this->panel_Personnel->Controls->Add(this->button8);
			this->panel_Personnel->Controls->Add(this->dataGridView1);
			this->panel_Personnel->Controls->Add(this->button9);
			this->panel_Personnel->Controls->Add(this->button7);
			this->panel_Personnel->Controls->Add(this->button5);
			this->panel_Personnel->Controls->Add(this->button1);
			this->panel_Personnel->Controls->Add(this->textBox10);
			this->panel_Personnel->Controls->Add(this->textBox9);
			this->panel_Personnel->Controls->Add(this->textBox8);
			this->panel_Personnel->Controls->Add(this->textBox7);
			this->panel_Personnel->Controls->Add(this->textBox6);
			this->panel_Personnel->Controls->Add(this->label9);
			this->panel_Personnel->Controls->Add(this->label11);
			this->panel_Personnel->Controls->Add(this->label10);
			this->panel_Personnel->Controls->Add(this->label12);
			this->panel_Personnel->Controls->Add(this->label14);
			this->panel_Personnel->Controls->Add(this->label13);
			this->panel_Personnel->Location = System::Drawing::Point(3, 45);
			this->panel_Personnel->Name = L"panel_Personnel";
			this->panel_Personnel->Size = System::Drawing::Size(699, 605);
			this->panel_Personnel->TabIndex = 24;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(458, 203);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 33);
			this->button10->TabIndex = 30;
			this->button10->Text = L">";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(513, 201);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 35);
			this->button8->TabIndex = 25;
			this->button8->Text = L"Modifier";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(288, 50);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(375, 145);
			this->dataGridView1->TabIndex = 26;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(594, 202);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(69, 74);
			this->button9->TabIndex = 26;
			this->button9->Text = L"Ajouter";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(513, 242);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 33);
			this->button7->TabIndex = 25;
			this->button7->Text = L"Supprimer";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(458, 242);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 33);
			this->button5->TabIndex = 25;
			this->button5->Text = L"<";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(288, 203);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 72);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Afficher";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(27, 255);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(219, 20);
			this->textBox10->TabIndex = 25;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(27, 203);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(219, 20);
			this->textBox9->TabIndex = 25;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(27, 153);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(219, 20);
			this->textBox8->TabIndex = 25;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(27, 103);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(219, 20);
			this->textBox7->TabIndex = 25;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(27, 55);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(219, 20);
			this->textBox6->TabIndex = 25;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(24, 37);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 18);
			this->label9->TabIndex = 27;
			this->label9->Text = L"ID";
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(24, 85);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 18);
			this->label11->TabIndex = 29;
			this->label11->Text = L"Nom";
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(24, 135);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 31);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Prénom";
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(285, 37);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(80, 18);
			this->label12->TabIndex = 31;
			this->label12->Text = L"Adresse";
			// 
			// label14
			// 
			this->label14->Location = System::Drawing::Point(24, 237);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(132, 31);
			this->label14->TabIndex = 33;
			this->label14->Text = L"Supérieur hiérarchique";
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(24, 187);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(107, 49);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Date d\'embauche";
			// 
			// panel_ClientsCommande
			// 
			this->panel_ClientsCommande->Controls->Add(this->dataGridView4);
			this->panel_ClientsCommande->Controls->Add(this->label15);
			this->panel_ClientsCommande->Controls->Add(this->label16);
			this->panel_ClientsCommande->Controls->Add(this->dataGridView2);
			this->panel_ClientsCommande->Controls->Add(this->label17);
			this->panel_ClientsCommande->Controls->Add(this->textBox11);
			this->panel_ClientsCommande->Controls->Add(this->label18);
			this->panel_ClientsCommande->Controls->Add(this->textBox12);
			this->panel_ClientsCommande->Controls->Add(this->dataGridView3);
			this->panel_ClientsCommande->Controls->Add(this->button11);
			this->panel_ClientsCommande->Controls->Add(this->button12);
			this->panel_ClientsCommande->Controls->Add(this->button13);
			this->panel_ClientsCommande->Controls->Add(this->button14);
			this->panel_ClientsCommande->Controls->Add(this->button15);
			this->panel_ClientsCommande->Controls->Add(this->label19);
			this->panel_ClientsCommande->Controls->Add(this->textBox13);
			this->panel_ClientsCommande->Controls->Add(this->label20);
			this->panel_ClientsCommande->Controls->Add(this->textBox14);
			this->panel_ClientsCommande->Controls->Add(this->label21);
			this->panel_ClientsCommande->Controls->Add(this->textBox15);
			this->panel_ClientsCommande->Controls->Add(this->button16);
			this->panel_ClientsCommande->Controls->Add(this->label22);
			this->panel_ClientsCommande->Location = System::Drawing::Point(3, 27);
			this->panel_ClientsCommande->Name = L"panel_ClientsCommande";
			this->panel_ClientsCommande->Size = System::Drawing::Size(696, 599);
			this->panel_ClientsCommande->TabIndex = 63;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(27, 447);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(645, 133);
			this->dataGridView4->TabIndex = 42;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(24, 279);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(43, 13);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Facture";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(301, 19);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(45, 13);
			this->label16->TabIndex = 39;
			this->label16->Text = L"Adresse";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(27, 295);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(645, 133);
			this->dataGridView2->TabIndex = 38;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(33, 224);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(93, 13);
			this->label17->TabIndex = 37;
			this->label17->Text = L"Date du 1er achat";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(27, 240);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(219, 20);
			this->textBox11->TabIndex = 36;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(33, 174);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(98, 13);
			this->label18->TabIndex = 35;
			this->label18->Text = L"Date de Naissance";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(27, 190);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(219, 20);
			this->textBox12->TabIndex = 34;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(297, 32);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(375, 145);
			this->dataGridView3->TabIndex = 33;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(522, 186);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 35);
			this->button11->TabIndex = 32;
			this->button11->Text = L"Modifier";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(522, 227);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 33);
			this->button12->TabIndex = 31;
			this->button12->Text = L"Supprimer";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(603, 186);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(69, 74);
			this->button13->TabIndex = 30;
			this->button13->Text = L"Ajouter";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(467, 188);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(49, 33);
			this->button14->TabIndex = 29;
			this->button14->Text = L">";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(467, 227);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(49, 33);
			this->button15->TabIndex = 28;
			this->button15->Text = L"<";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(33, 121);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(43, 13);
			this->label19->TabIndex = 27;
			this->label19->Text = L"Prenom";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(27, 137);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(219, 20);
			this->textBox13->TabIndex = 26;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(33, 66);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(29, 13);
			this->label20->TabIndex = 25;
			this->label20->Text = L"Nom";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(27, 82);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(219, 20);
			this->textBox14->TabIndex = 24;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(33, 16);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(18, 13);
			this->label21->TabIndex = 23;
			this->label21->Text = L"ID";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(27, 32);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(219, 20);
			this->textBox15->TabIndex = 22;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(297, 188);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(164, 72);
			this->button16->TabIndex = 21;
			this->button16->Text = L"Afficher";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// label22
			// 
			this->label22->Location = System::Drawing::Point(24, 431);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(80, 35);
			this->label22->TabIndex = 43;
			this->label22->Text = L"Commande";
			// 
			// panel_Stats
			// 
			this->panel_Stats->Controls->Add(this->dataGridView6);
			this->panel_Stats->Controls->Add(this->textBox32);
			this->panel_Stats->Controls->Add(this->label41);
			this->panel_Stats->Controls->Add(this->radioButton3);
			this->panel_Stats->Controls->Add(this->radioButton2);
			this->panel_Stats->Controls->Add(this->radioButton1);
			this->panel_Stats->Controls->Add(this->label40);
			this->panel_Stats->Controls->Add(this->textBox31);
			this->panel_Stats->Controls->Add(this->textBox30);
			this->panel_Stats->Controls->Add(this->label37);
			this->panel_Stats->Controls->Add(this->textBox29);
			this->panel_Stats->Controls->Add(this->textBox23);
			this->panel_Stats->Controls->Add(this->label34);
			this->panel_Stats->Controls->Add(this->label33);
			this->panel_Stats->Controls->Add(this->label30);
			this->panel_Stats->Controls->Add(this->label29);
			this->panel_Stats->Controls->Add(this->textBox28);
			this->panel_Stats->Controls->Add(this->textBox26);
			this->panel_Stats->Controls->Add(this->textBox25);
			this->panel_Stats->Controls->Add(this->textBox24);
			this->panel_Stats->Controls->Add(this->textBox22);
			this->panel_Stats->Controls->Add(this->label35);
			this->panel_Stats->Controls->Add(this->label36);
			this->panel_Stats->Controls->Add(this->label32);
			this->panel_Stats->Controls->Add(this->label31);
			this->panel_Stats->Controls->Add(this->label39);
			this->panel_Stats->Controls->Add(this->label38);
			this->panel_Stats->Location = System::Drawing::Point(0, 27);
			this->panel_Stats->Name = L"panel_Stats";
			this->panel_Stats->Size = System::Drawing::Size(699, 620);
			this->panel_Stats->TabIndex = 66;
			
			// 
			// label38
			// 
			this->label38->Location = System::Drawing::Point(214, 235);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(127, 18);
			this->label38->TabIndex = 20;
			this->label38->Text = L"Valeur d\'achat";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(62, 247);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(139, 20);
			this->textBox31->TabIndex = 19;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(217, 247);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(151, 20);
			this->textBox30->TabIndex = 18;
			// 
			// label37
			// 
			this->label37->Location = System::Drawing::Point(15, 203);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(41, 51);
			this->label37->TabIndex = 17;
			this->label37->Text = L"Articles";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(71, 32);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(187, 20);
			this->textBox29->TabIndex = 15;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(55, 105);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(61, 20);
			this->textBox23->TabIndex = 14;
			// 
			// label34
			// 
			this->label34->Location = System::Drawing::Point(458, 19);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(225, 15);
			this->label34->TabIndex = 12;
			this->label34->Text = L"Produit sous le seuil de réapprovisionnement";
			// 
			// label33
			// 
			this->label33->Location = System::Drawing::Point(15, 144);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(141, 18);
			this->label33->TabIndex = 11;
			this->label33->Text = L"Montant total des achats";
			// 
			// label30
			// 
			this->label30->Location = System::Drawing::Point(16, 111);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(33, 31);
			this->label30->TabIndex = 8;
			this->label30->Text = L"Mois";
			// 
			// label29
			// 
			this->label29->Location = System::Drawing::Point(15, 75);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(80, 18);
			this->label29->TabIndex = 7;
			this->label29->Text = L"Panier moyen";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(219, 105);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(187, 20);
			this->textBox28->TabIndex = 6;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(157, 141);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(187, 20);
			this->textBox26->TabIndex = 4;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(62, 200);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(139, 20);
			this->textBox25->TabIndex = 3;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(217, 200);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(151, 20);
			this->textBox24->TabIndex = 2;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(95, 72);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(187, 20);
			this->textBox22->TabIndex = 0;
			// 
			// label35
			// 
			this->label35->Location = System::Drawing::Point(141, 108);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(86, 17);
			this->label35->TabIndex = 13;
			this->label35->Text = L"Chiffre d\'affaire";
			// 
			// label36
			// 
			this->label36->Location = System::Drawing::Point(15, 35);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(80, 18);
			this->label36->TabIndex = 16;
			this->label36->Text = L"ID Client";
			// 
			// label32
			// 
			this->label32->Location = System::Drawing::Point(59, 183);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(122, 20);
			this->label32->TabIndex = 10;
			this->label32->Text = L"Plus vendus";
			// 
			// label31
			// 
			this->label31->Location = System::Drawing::Point(214, 183);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(127, 18);
			this->label31->TabIndex = 9;
			this->label31->Text = L"Moins vendus";
			// 
			// label39
			// 
			this->label39->Location = System::Drawing::Point(62, 235);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(127, 41);
			this->label39->TabIndex = 21;
			this->label39->Text = L"Valeur commerciale";
			this->label39->Click += gcnew System::EventHandler(this, &MyForm::label39_Click);
			// 
			// label40
			// 
			this->label40->Location = System::Drawing::Point(15, 250);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(41, 51);
			this->label40->TabIndex = 22;
			this->label40->Text = L"Stock";
			// 
			// radioButton1
			// 
			this->radioButton1->Location = System::Drawing::Point(62, 291);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(126, 44);
			this->radioButton1->TabIndex = 23;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Variations TVA1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->Location = System::Drawing::Point(334, 305);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(108, 17);
			this->radioButton2->TabIndex = 24;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Variations TVA3";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->Location = System::Drawing::Point(197, 305);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(107, 17);
			this->radioButton3->TabIndex = 25;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Variations TVA2";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label41
			// 
			this->label41->Location = System::Drawing::Point(15, 366);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(186, 13);
			this->label41->TabIndex = 26;
			this->label41->Text = L"Valeur commerciale après variation";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(192, 363);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(187, 20);
			this->textBox32->TabIndex = 27;
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(447, 41);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(240, 252);
			this->dataGridView6->TabIndex = 28;
			// 
			// panel_Stocks
			// 
			this->panel_Stocks->Controls->Add(this->label23);
			this->panel_Stocks->Controls->Add(this->textBox21);
			this->panel_Stocks->Controls->Add(this->label24);
			this->panel_Stocks->Controls->Add(this->textBox16);
			this->panel_Stocks->Controls->Add(this->label25);
			this->panel_Stocks->Controls->Add(this->textBox17);
			this->panel_Stocks->Controls->Add(this->dataGridView5);
			this->panel_Stocks->Controls->Add(this->button17);
			this->panel_Stocks->Controls->Add(this->button18);
			this->panel_Stocks->Controls->Add(this->button19);
			this->panel_Stocks->Controls->Add(this->button20);
			this->panel_Stocks->Controls->Add(this->button21);
			this->panel_Stocks->Controls->Add(this->textBox18);
			this->panel_Stocks->Controls->Add(this->label27);
			this->panel_Stocks->Controls->Add(this->textBox19);
			this->panel_Stocks->Controls->Add(this->textBox20);
			this->panel_Stocks->Controls->Add(this->button22);
			this->panel_Stocks->Controls->Add(this->label28);
			this->panel_Stocks->Controls->Add(this->label26);
			this->panel_Stocks->Location = System::Drawing::Point(0, 21);
			this->panel_Stocks->Name = L"panel_Stocks";
			this->panel_Stocks->Size = System::Drawing::Size(699, 602);
			this->panel_Stocks->TabIndex = 68;
			// 
			// label23
			// 
			this->label23->Location = System::Drawing::Point(24, 279);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(146, 13);
			this->label23->TabIndex = 58;
			this->label23->Text = L"Taux de TVA";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(18, 295);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(219, 20);
			this->textBox21->TabIndex = 57;
			// 
			// label24
			// 
			this->label24->Location = System::Drawing::Point(24, 224);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(146, 13);
			this->label24->TabIndex = 56;
			this->label24->Text = L"Seuil de réapprovisionnement";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(18, 240);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(219, 20);
			this->textBox16->TabIndex = 55;
			// 
			// label25
			// 
			this->label25->Location = System::Drawing::Point(24, 174);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(98, 13);
			this->label25->TabIndex = 54;
			this->label25->Text = L"Prix Hors Taxe";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(18, 190);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(219, 20);
			this->textBox17->TabIndex = 53;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(288, 32);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(375, 145);
			this->dataGridView5->TabIndex = 52;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(513, 186);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 35);
			this->button17->TabIndex = 51;
			this->button17->Text = L"Modifier";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(513, 227);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 33);
			this->button18->TabIndex = 50;
			this->button18->Text = L"Supprimer";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(594, 186);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(69, 74);
			this->button19->TabIndex = 49;
			this->button19->Text = L"Ajouter";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(458, 188);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(49, 33);
			this->button20->TabIndex = 48;
			this->button20->Text = L">";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(458, 227);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(49, 33);
			this->button21->TabIndex = 47;
			this->button21->Text = L"<";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(18, 137);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(219, 20);
			this->textBox18->TabIndex = 45;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(24, 66);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(29, 13);
			this->label27->TabIndex = 44;
			this->label27->Text = L"Nom";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(18, 82);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(219, 20);
			this->textBox19->TabIndex = 43;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(18, 32);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(219, 20);
			this->textBox20->TabIndex = 41;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(288, 188);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(164, 72);
			this->button22->TabIndex = 40;
			this->button22->Text = L"Afficher";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// label28
			// 
			this->label28->Location = System::Drawing::Point(24, 16);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(60, 21);
			this->label28->TabIndex = 42;
			this->label28->Text = L"Réference";
			// 
			// label26
			// 
			this->label26->Location = System::Drawing::Point(24, 121);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(60, 29);
			this->label26->TabIndex = 46;
			this->label26->Text = L"Quantité";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 637);
			this->Controls->Add(this->panel_Stocks);
			this->Controls->Add(this->panel_Stats);
			this->Controls->Add(this->panel_ClientsCommande);
			this->Controls->Add(this->panel_Personnel);
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
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AdresseTable))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvFactures))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DgvCommande))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel_Personnel->ResumeLayout(false);
			this->panel_Personnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel_ClientsCommande->ResumeLayout(false);
			this->panel_ClientsCommande->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel_Stats->ResumeLayout(false);
			this->panel_Stats->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->panel_Stocks->ResumeLayout(false);
			this->panel_Stocks->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
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
					int k = adresse.NbAdresse("Id_Client", ID_personne);
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



private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void PersonnelToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
	this->panel_Personnel->BringToFront();

}

private: System::Void clientsCommandelToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel_ClientsCommande->BringToFront();
}

private: System::Void stocksToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel_Stocks->BringToFront();
}
private: System::Void statistiquesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel_Stats->BringToFront();
}




private: System::Void label39_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
