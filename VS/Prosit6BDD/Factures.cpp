#include "Factures.h"
/*	
String^ table = "facture";
String^ entete0 = "ID";
String^ entete1 = "nom_societe";
String^ entete2 = "adresse_societe";
String^ entete3 = "numero_de_service";
String^ entete4 = "logo";
String^ entete5 = "ID_Client";
String^ entete5 = "reference"; 
*/

DataSet^ Factures::getTable(String^ entete, int ID)
{
    CL_CAD BDD;

        return BDD.getTableWhere(table, entete0 + ", " + entete1 + " ," + entete2 + " ," + entete3 + " ," + entete4 + " ," + entete5 + " ," + entete6, entete, ID);

}

int Factures::getReference(int ID)
{
    try
    {
    return Convert::ToInt32(BDD->selectWhere(table,entete5,ID,6));
    }
    catch (const System::IndexOutOfRangeException^ e)
    {
        return 0;
    }
}

void Factures::SetFact(String^ entete, int ID, String^ mot)
{
    CL_CAD BDD;
    if (mot == "") {
        BDD.supprimer(table, entete0, ID);
    }
    else {
        BDD.modifier(table, entete0, entete, mot, ID);
    }

}

void Factures::SetNom(int ID, String^ mot) {
    SetFact(entete1, ID, mot);
}

void Factures::SetAdr(int ID, String^ mot) {
    SetFact(entete2, ID, mot);
}

void Factures::SetNumServ(int ID, String^ mot) {
    SetFact(entete3, ID, mot);
}

void Factures::SetLogo(int ID, String^ mot) {
    SetFact(entete4, ID, mot);
}

void Factures::SetIdClient(int ID, String^ mot) {
    SetFact(entete5, ID, mot);
}

void Factures::SetReference(int ID, String^ mot) {
    SetFact(entete6, ID, mot);
}

void Factures::ajouter(String^ IdClient, String^ reference)
{
    CL_CAD BDD;
    BDD.ajouter(table, entete1 + " , " + entete2 + " , " + entete3 + " , " + entete4 + " , " + entete5 + " , " + entete6, "'Le futur', '17 avenue Fosh Paris', '18', 'woaw', '" + IdClient + "', '" + reference + "'");
}

int Factures::NbFactures(String^ enteteIdEtranger, int IdEtranger)
{
    CL_CAD BDD;
    return BDD.verification(enteteIdEtranger, IdEtranger, table);
}
