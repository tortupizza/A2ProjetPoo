#include "Personne.h"
Personne::Personne() {
    ligne = 0;
}

Personne::Personne(int ligne)
{
    this->ligne = ligne;
}

void Personne::ajouter(String^ Nom, String^ Prenom,String^ Native)
{
    
    BDD->ajouter(table,entete1+", "+entete2+", " + entete3,"'"+Nom + "', '" + Prenom + "', '" + Native + "'");
}

String^ Personne::getID()
{
    return BDD->select(table,ligne, 0);
}

String^ Personne::getNom()
{
    return BDD->select(table,ligne, 1);
}

String^ Personne::getPrenom()
{
    return BDD->select(table,ligne, 2);
}

String^ Personne::getNative()
{
    return BDD->select(table, ligne, 3);
}

String^ Personne::getAchat1()
{
    return BDD->select(table, ligne, 4);
}

String^ Personne::getNom(int ID)
{
    return BDD->selectWhere(table, entete0, ID, 1);
}

String^ Personne::getPrenom(int ID)
{
    return BDD->selectWhere(table, entete0, ID, 2);
}

String^ Personne::getNative(int ID)
{
    return BDD->selectWhere(table, entete0, ID, 3);
}

String^ Personne::getAchat1(int ID)
{
    return BDD->selectWhere(table, entete0, ID, 4);
}

void Personne::setNom(String^ Nom,int ID)
{
    BDD->modifier(table, entete0, entete1, Nom, ID);
}

void Personne::setPrenom(String^ Prenom, int ID)
{
    BDD->modifier(table, entete0, entete2, Prenom, ID);
}

void Personne::setNative(String^ date, int ID)
{
    BDD->modifier(table, entete0, entete3, date, ID);
}

void Personne::setAchat1(String^ date, int ID)
{
    BDD->modifier(table, entete0, entete4, date, ID);
}

void Personne::supprimer(int ID)
{
    BDD->supprimer("Adresse", "ID_Client", ID);
    BDD->supprimer(table, entete0, ID);
}

int Personne::VerifName(String^ Nom,String^ Prenom)
{
    //BDD->verification(table, entete1, "'" + Nom + "'" + " AND " + entete2 + " = '" + Prenom + "'");
    return 0;
}

int Personne::getIDWhere(String^ Nom, String^ Prenom) {
    return Convert::ToInt32(BDD->selectWhereString(table, entete1, "'" + Nom + "'" + " AND " + entete2 + " = '" + Prenom + "'", 0));
}
