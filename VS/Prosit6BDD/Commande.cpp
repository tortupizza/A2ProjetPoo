#include "Commande.h"
#include "Factures.h"
#include <string>
#include <iostream>

/*
    String^ table = "Commande";
    String^ entete0 = "reference";
    String^ entete1 = "date_de_livraison";
    String^ entete2 = "date_de_commande";
    String^ entete3 = "date_d_emision";
    String^ entete4 = "nb_d_article";
    String^ entete5 = "montant_total_HT";
    String^ entete6 = "montant_total_TVA";
    String^ entete7 = "montant_total_TTC";
    String^ entete8 = "ID_Client";
*/

DataSet^ Commande::getTable(String^ entete, int ID)
{
    CL_CAD BDD;
    return BDD.getTableWhere(table, entete0 + ", " + entete1 + " ," + entete2 + " ," + entete3 + " ," + entete4 + " ," + entete5 + " ," + entete6 + " ," + entete7 + " ," + entete8, entete, ID);
}

void Commande::SetCommande(String^ entete, int ID, String^ mot)
{
    CL_CAD BDD;
    if (mot == "") {
        BDD.supprimer("facture", entete0, ID);
        BDD.supprimer(table, entete0, ID);
    }
    else {
        BDD.modifier(table, entete0, entete, mot, ID);
    }

}

void Commande::SetRef(int ID, String^ mot) {
    SetCommande(entete0, ID, mot);
}

void Commande::SetDateLiv(int ID, String^ mot) {
    SetCommande(entete1, ID, mot);
}

void Commande::SetDateCom(int ID, String^ mot) {
    SetCommande(entete2, ID, mot);
}

void Commande::SetDateEmi(int ID, String^ mot) {
    SetCommande(entete3, ID, mot);
}

void Commande::SetNbArt(int ID, String^ mot) {
    SetCommande(entete4, ID, mot);
}

void Commande::SetMontantHT(int ID, String^ mot) {
    SetCommande(entete5, ID, mot);
}

void Commande::SetMontantTVA(int ID, String^ mot) {
    SetCommande(entete6, ID, mot);
}

void Commande::SetMontantTTC(int ID, String^ mot) {
    SetCommande(entete7, ID, mot);
}

void Commande::SetIdClient(int ID, String^ mot) {
    SetCommande(entete8, ID, mot);
}

void Commande::ajouter(String^ date_de_livraison, String^ date_de_commande, String^ date_d_emission, String^ nb_d_article, String^ montant_HT, String^ ID_Client)
{
    CL_CAD BDD;
    String^ entete = entete1 + " , " + entete2 + " , " + entete3 + " , " + entete4 + " , " + entete5 + " , " + entete6 + " , " + entete7 + " , " + entete8;
    if (montant_HT == "") {
        montant_HT = "0";
    }
    String^ value = " '" + date_de_livraison + "', '" + date_de_commande + "', '" + date_d_emission + "', '" + nb_d_article + "', '" ;
    value += montant_HT;
    value += "', '";
    std::string str = std::to_string(Convert::ToInt32(montant_HT) * 0.20);
    String^ nb = gcnew String(str.c_str());
    value += nb;
    value += "', '";
    str = std::to_string(Convert::ToInt32(montant_HT) * 1.20);
    nb = gcnew String(str.c_str());
    value += nb;
    value += "', '";
    value += ID_Client + "'";

    BDD.ajouter(table, entete , value);
    Factures facture;
    int ref = BDD.MaxID(table, "reference");
    facture.ajouter(ID_Client,Convert::ToString(ref));
}

int Commande::NbCommandes(String^ enteteIdEtranger, int IdEtranger)
{
    CL_CAD BDD;
    return BDD.verification(enteteIdEtranger, IdEtranger, table);
}