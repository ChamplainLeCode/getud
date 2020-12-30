//
// Created by champlainlecode on 29/12/2020.
//

#ifndef ETUD_ETUDIANT_H
#define ETUD_ETUDIANT_H

#include <string>
#include <list>
#include "Date.h"
#include "enums/constants.h"
#include "Etud.h"

using namespace std;

class Etudiant {
public:
    static const string                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     db;
    private:
        string matricule,
               nom,
               prenom,
               lieuNaissance;
        Date dateNaissance;
        Date dateObtentionBac;
        Sexe  sex;
        float moyenne;
        list<Etud> parcours;
        Mention mention;
    public:
        Etudiant(string matricule, string nom, string prenom, string lieuNaissance, Sexe sex, Date birthDate, Date datBac, float moyenne, list<Etud> parcours, Mention mention):
            dateObtentionBac(datBac),
            dateNaissance(birthDate),
            mention(mention),
            moyenne(moyenne),
            sex(sex),
            lieuNaissance(lieuNaissance),
            prenom(prenom),
            matricule(matricule),
            parcours(parcours),
            nom(nom){}

        Etudiant(Etudiant* e):
            sex(e->sex),
            moyenne(e->moyenne),
            mention(e->mention),
            dateNaissance(e->dateNaissance),
            dateObtentionBac(e->dateObtentionBac),
            nom(e->nom),
            prenom(e->prenom),
            parcours(e->parcours),
            matricule(e->matricule),
            lieuNaissance(e->lieuNaissance){}

        Etudiant(){}

    public:
        string getMatricule();
        string getNom();
        string getPrenom();
        string getLieuNaissance();
        Date* getDateNaissance();
        Date* getDateObtentionBac();
        Sexe  getSex();
        float getMoyenne();
        list<Etud> getParcours();
        Mention getMention();
    public:
        Etudiant* setMatricule(string matriule);
        Etudiant* setNom(string nom);
        Etudiant* setPrenom(string prenom);
        Etudiant* setLieuNaissance(string lieu);
        Etudiant* setDateNaissance(Date* date);
        Etudiant* setDateObtentionBac(Date* date);
        Etudiant* setSex(Sexe sex);
        Etudiant* setMoyenne(float moyenne);
        Etudiant* setParcours(list<Etud> parcours);
        Etudiant* setMention(Mention mention);
        Etudiant* addParcours(Etud parcours);
    public:
        string toString();
        string getMentionToString();
        string getSexToString();

    public:
        void write();
        Etudiant* read();

};


#endif //ETUD_ETUDIANT_H
