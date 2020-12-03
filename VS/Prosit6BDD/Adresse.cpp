#include "Adresse.h"

DataSet^ Adresse::getTable(String^ entete,int ID)
{
    CL_CAD BDD;
    return BDD.getTableWhere(table,entete0 + ", "+ entete1 + " ," + entete2+ " ," + entete3,entete,ID);
}

//entete1 = "N+Rue";
//entete2 = "Ville";
//entete3 = "Code_Postale";
//entete4 = "ID_client";
//entete5 = "ID_Personnel";

void Adresse::SetAdr(String^ entete,int ID,String^ mot)
{
    CL_CAD BDD;
    if (mot == "") {
        BDD.supprimer(table,entete0,ID);
    }
    else {
        BDD.modifier(table, entete0, entete, mot, ID);
    }

}

void Adresse::SetRue(int ID, String^ mot) {
    SetAdr(entete1,ID,mot);
}

void Adresse::SetVille(int ID, String^ mot) {
    SetAdr(entete2, ID, mot);
}

void Adresse::SetCP(int ID, String^ mot) {
    SetAdr(entete3, ID, mot);
}

void Adresse::SetIdClient(int ID, String^ mot) {
    SetAdr(entete4, ID, mot);
}

void Adresse::SetIdPersonnel(int ID, String^ mot) {
    SetAdr(entete5, ID, mot);
}

void Adresse::ajouter(String^ entete45, String^ Rue, String^ Ville, String^ CP,String^ IdEtranger)
{
    CL_CAD BDD;
    BDD.ajouter(table, entete1+" , "+ entete2 + " , " + entete3 + " , " + entete45 , "'" + Rue + "', '" + Ville + "', '" + CP + "', '" + IdEtranger + "'");
}

int Adresse::NbAdresse(String^ enteteIdEtranger,int IdEtranger)
{
    CL_CAD BDD;
    return BDD.verification(enteteIdEtranger,IdEtranger, table);
}
