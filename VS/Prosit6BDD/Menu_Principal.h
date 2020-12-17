#pragma once
//#include "Menu_Personnels.h"
//#include "Menu_Statistiques.h"
//#include "Menu_Stock.h"
#include "Menu_Client.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Menu_Principal
	/// </summary>
	public ref class Menu_Principal : public System::Windows::Forms::Form
	{
	public:
		Menu_Principal(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Menu_Principal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Personnels;
	private: System::Windows::Forms::Button^ Clients;
	private: System::Windows::Forms::Button^ Articles;
	private: System::Windows::Forms::Button^ Commandes;
	private: System::Windows::Forms::Button^ Statistiques;



	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Personnels = (gcnew System::Windows::Forms::Button());
			this->Clients = (gcnew System::Windows::Forms::Button());
			this->Articles = (gcnew System::Windows::Forms::Button());
			this->Commandes = (gcnew System::Windows::Forms::Button());
			this->Statistiques = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Personnels
			// 
			this->Personnels->Location = System::Drawing::Point(74, 12);
			this->Personnels->Name = L"Personnels";
			this->Personnels->Size = System::Drawing::Size(75, 23);
			this->Personnels->TabIndex = 0;
			this->Personnels->Text = L"Personnels";
			this->Personnels->UseVisualStyleBackColor = true;
			this->Personnels->Click += gcnew System::EventHandler(this, &Menu_Principal::Personnels_Click);
			// 
			// Clients
			// 
			this->Clients->Location = System::Drawing::Point(74, 41);
			this->Clients->Name = L"Clients";
			this->Clients->Size = System::Drawing::Size(75, 23);
			this->Clients->TabIndex = 1;
			this->Clients->Text = L"Clients";
			this->Clients->UseVisualStyleBackColor = true;
			this->Clients->Click += gcnew System::EventHandler(this, &Menu_Principal::Clients_Click);
			// 
			// Articles
			// 
			this->Articles->Location = System::Drawing::Point(74, 70);
			this->Articles->Name = L"Articles";
			this->Articles->Size = System::Drawing::Size(75, 23);
			this->Articles->TabIndex = 2;
			this->Articles->Text = L"Articles";
			this->Articles->UseVisualStyleBackColor = true;
			this->Articles->Click += gcnew System::EventHandler(this, &Menu_Principal::Articles_Click);
			// 
			// Commandes
			// 
			this->Commandes->Location = System::Drawing::Point(74, 99);
			this->Commandes->Name = L"Commandes";
			this->Commandes->Size = System::Drawing::Size(75, 23);
			this->Commandes->TabIndex = 3;
			this->Commandes->Text = L"Commandes";
			this->Commandes->UseVisualStyleBackColor = true;
			this->Commandes->Click += gcnew System::EventHandler(this, &Menu_Principal::Commandes_Click);
			// 
			// Statistiques
			// 
			this->Statistiques->Location = System::Drawing::Point(74, 128);
			this->Statistiques->Name = L"Statistiques";
			this->Statistiques->Size = System::Drawing::Size(75, 23);
			this->Statistiques->TabIndex = 5;
			this->Statistiques->Text = L"Statistiques";
			this->Statistiques->UseVisualStyleBackColor = true;
			this->Statistiques->Click += gcnew System::EventHandler(this, &Menu_Principal::Statistiques_Click);
			// 
			// Menu_Principal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(223, 159);
			this->Controls->Add(this->Statistiques);
			this->Controls->Add(this->Commandes);
			this->Controls->Add(this->Articles);
			this->Controls->Add(this->Clients);
			this->Controls->Add(this->Personnels);
			this->Name = L"Menu_Principal";
			this->Text = L"Menu_Principal";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Personnels_Click(System::Object^ sender, System::EventArgs^ e) {
		Menu_Personnels^ Personnels = gcnew Menu_Personnels();
		Personnels->Show();
	}
	private: System::Void Statistiques_Click(System::Object^ sender, System::EventArgs^ e) {
		Menu_Statistiques^ Statistiques = gcnew Menu_Statistiques();
		Statistiques->Show();
}
private: System::Void Articles_Click(System::Object^ sender, System::EventArgs^ e) {
	Menu_Stock^ Stock = gcnew Menu_Stock();
	Stock->Show();
}
private: System::Void Clients_Click(System::Object^ sender, System::EventArgs^ e) {
	Menu_Client^ Client = gcnew Menu_Client();
	Client->Show();

}
private: System::Void Commandes_Click(System::Object^ sender, System::EventArgs^ e) {
	Menu_Commande^ Commande = gcnew Menu_Commande();
	Commande->Show();
}
};
}

