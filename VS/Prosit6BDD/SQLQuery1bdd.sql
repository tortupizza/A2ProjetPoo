
CREATE TABLE Client(
        ID                 Int  IDENTITY  NOT NULL ,
        nom                Varchar (50) NOT NULL ,
        prenom             Varchar (50) NOT NULL ,
        date_de_naissance  Date NOT NULL ,
        date_premier_achat Date NOT NULL
	,CONSTRAINT Client_PK PRIMARY KEY (ID)
);

CREATE TABLE nb_article(
        ID     Int  IDENTITY  NOT NULL ,
        nombre Int NOT NULL
	,CONSTRAINT nb_article_PK PRIMARY KEY (ID)
);


CREATE TABLE Article(
        reference                   Int  IDENTITY  NOT NULL ,
        nom                         Varchar (50) NOT NULL ,
        quantite                    Int NOT NULL ,
        unite                       Varchar (50) NOT NULL ,
        prix_coutant                Float NOT NULL ,
        prix_HT                     Float NOT NULL ,
        taux_TVA                    Int NOT NULL ,
        variance                    Float NOT NULL ,
        couleur                     Varchar (50) NOT NULL ,
        vente                       Int NOT NULL ,
        stock                       Int NOT NULL ,
        seuil_de_reaprovisionnement Int NOT NULL
	,CONSTRAINT Article_PK PRIMARY KEY (reference)
);

CREATE TABLE Changement(
        ID        Int  IDENTITY  NOT NULL ,
        date      Date NOT NULL ,
        reference Int NOT NULL
	,CONSTRAINT Changement_PK PRIMARY KEY (ID)
);

CREATE TABLE possede_Ax(
        reference Int NOT NULL ,
        ID        Int NOT NULL
	,CONSTRAINT possede_Ax_PK PRIMARY KEY (reference,ID)
);

CREATE TABLE facture(
        ID                Int  IDENTITY  NOT NULL ,
        nom_societe       Varchar (50) NOT NULL ,
        adresse_societe   Varchar (50) NOT NULL ,
        numero_de_service Int NOT NULL ,
        logo              Varchar (50) NOT NULL ,
        ID_Client         Int NOT NULL ,
        reference         Int NOT NULL
	,CONSTRAINT facture_PK PRIMARY KEY (ID)
);

CREATE TABLE Commande(
        reference         Int  IDENTITY  NOT NULL ,
        date_de_livraison Date NOT NULL ,
        date_de_commande  Date NOT NULL ,
        date_d_emission   Date NOT NULL ,
        moyen_de_paiment  Varchar (50) NOT NULL ,
        nb_d_article      Int NOT NULL ,
        montant_total_HT  Float NOT NULL ,
        montant_total_TVA Float NOT NULL ,
        montant_total_TTC Float NOT NULL ,
        ID                Int NOT NULL
	,CONSTRAINT Commande_PK PRIMARY KEY (reference)
);

CREATE TABLE Personnel(
        ID              Int  IDENTITY  NOT NULL ,
        nom             Varchar (50) NOT NULL ,
        prenom          Varchar (50) NOT NULL ,
        date_d_embauche Date NOT NULL ,
        ID_Personnel    Int NOT NULL
	,CONSTRAINT Personnel_PK PRIMARY KEY (ID)
);

CREATE TABLE Adresse(
        ID                    Int  IDENTITY  NOT NULL ,
        Ville                 Varchar (50) NOT NULL ,
        Code_Postale          Varchar (50) NOT NULL ,
        ID_Client             Int NOT NULL ,
        ID_Client_facturation Int NOT NULL ,
        ID_Personnel          Int NOT NULL
	,CONSTRAINT Adresse_PK PRIMARY KEY (ID)
);

CREATE TABLE possede_ca(
        ID        Int NOT NULL ,
        reference Int NOT NULL
	,CONSTRAINT possede_ca_PK PRIMARY KEY (ID,reference)
);




ALTER TABLE Changement
	ADD CONSTRAINT Changement_Article0_FK
	FOREIGN KEY (reference)
	REFERENCES Article(reference);

ALTER TABLE possede_Ax
	ADD CONSTRAINT possede_Ax_Article0_FK
	FOREIGN KEY (reference)
	REFERENCES Article(reference);

ALTER TABLE possede_Ax
	ADD CONSTRAINT possede_Ax_nb_article1_FK
	FOREIGN KEY (ID)
	REFERENCES nb_article(ID);

ALTER TABLE facture
	ADD CONSTRAINT facture_Client0_FK
	FOREIGN KEY (ID_Client)
	REFERENCES Client(ID);

ALTER TABLE facture
	ADD CONSTRAINT facture_Commande1_FK
	FOREIGN KEY (reference)
	REFERENCES Commande(reference);

ALTER TABLE facture 
	ADD CONSTRAINT facture_Commande0_AK 
	UNIQUE (reference);

ALTER TABLE Commande
	ADD CONSTRAINT Commande_facture0_FK
	FOREIGN KEY (ID)
	REFERENCES facture(ID);

ALTER TABLE Commande 
	ADD CONSTRAINT Commande_facture0_AK 
	UNIQUE (ID);

ALTER TABLE Personnel
	ADD CONSTRAINT Personnel_Personnel0_FK
	FOREIGN KEY (ID_Personnel)
	REFERENCES Personnel(ID);

ALTER TABLE Adresse
	ADD CONSTRAINT Adresse_Client0_FK
	FOREIGN KEY (ID_Client)
	REFERENCES Client(ID);

ALTER TABLE Adresse
	ADD CONSTRAINT Adresse_Client1_FK
	FOREIGN KEY (ID_Client_facturation)
	REFERENCES Client(ID);

ALTER TABLE Adresse
	ADD CONSTRAINT Adresse_Personnel2_FK
	FOREIGN KEY (ID_Personnel)
	REFERENCES Personnel(ID);

ALTER TABLE possede_ca
	ADD CONSTRAINT possede_ca_nb_article0_FK
	FOREIGN KEY (ID)
	REFERENCES nb_article(ID);

ALTER TABLE possede_ca
	ADD CONSTRAINT possede_ca_Commande1_FK
	FOREIGN KEY (reference)
	REFERENCES Commande(reference);
