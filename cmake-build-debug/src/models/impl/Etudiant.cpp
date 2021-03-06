//
// Created by champlainlecode on 29/12/2020.
//

#include "../Etudiant.h"
#include "../../config/io.h"

#include <fstream>
#include <iostream>

    const string Etudiant::db = "etudiant.db";

    string Etudiant::getMatricule(){
        return matricule;
    }

    string Etudiant::getNom(){
        return nom;
    }
    string Etudiant::getPrenom(){
        return prenom;
    }
    string Etudiant::getLieuNaissance(){
        return lieuNaissance;
    }
    Date* Etudiant::getDateNaissance(){
        return &dateNaissance;
    }
    Date* Etudiant::getDateObtentionBac(){
        return &dateObtentionBac;
    }
    Sexe  Etudiant::getSex(){
        return this->sex;
    }

    float Etudiant::getMoyenne(){
        return this->moyenne;
    }
    list<Etud> Etudiant::getParcours(){
        return this->parcours;
    }
    Mention Etudiant::getMention(){
        return this->mention;
    }

    Etudiant* Etudiant::setMatricule(string matriule){
        this->matricule = matriule;
        return this;
    }
    Etudiant* Etudiant::setNom(string nom){
        this->nom = nom;
        return this;
    }
    Etudiant* Etudiant::setPrenom(string prenom){
        this->prenom = prenom;
        return this;
    }
    Etudiant* Etudiant::setLieuNaissance(string lieu){
        this->lieuNaissance = lieu;
        return this;
    }
    Etudiant* Etudiant::setDateNaissance(Date* date){
        this->dateNaissance = *date;
        return this;
    }
    Etudiant* Etudiant::setDateObtentionBac(Date* date){
        this->dateObtentionBac = *date;
        return this;
    }
    Etudiant* Etudiant::setSex(Sexe sex){
        this->sex = sex;
        return this;
    }
    Etudiant* Etudiant::setMoyenne(float moyenne){
        this->moyenne = moyenne;
        return this;
    }
    Etudiant* Etudiant::setParcours(list<Etud> parcours){
        this->parcours = parcours;
        return this;
    }
    Etudiant* Etudiant::setMention(Mention mention){
        this->mention = mention;
        return this;
    }

    string Etudiant::getMentionToString(){
        switch (this->mention) {
            case A_MOINS: return "A-";
            case A: return "A";
            case B: return "B";
            case B_MOINS: return "B-";
            case B_PLUS: return "B+";
            case C: return "C";
            case C_MOINS: return "C-";
            case C_PLUS: return "C+";
            case D:     return "D";
            case D_MOINS: return "D-";
            case D_PLUS: return "D+";
            case E: return "E";
            case E_MOINS: return "E-";
            case E_PLUS: return "E++";
            case F: return "F";
            default: F;
        }
    }
    string Etudiant::getSexToString(){
        if (this->sex == MASCULIN)   return "Masculin";
        return "Feminin";
    }

    Etudiant* Etudiant::addParcours(Etud parcours) {
        this->parcours.push_back(parcours);
        return this;
    }

    void Etudiant::write(){
        std::fstream io;

        io.open(Etudiant::db, std::ios::binary | std::ios::out);
        if(!io)
        {
            std::cerr<<"io error <"<<Etudiant::db<<">\n";
            exit(1);
        }
//        this->getNom();
//        this->getPrenom();
//        this->getLieuNaissance();
//        this->getMatricule();
//        this->getMoyenne();
//        this->getMention();
//        this->getSex();
//        this->getDateObtentionBac();
//        this->getDateNaissance();
//        this->getParcours();

        int size = this->nom.size();
        io << this->getNom();
        char sl[100];
        std::fstream ii;
        ii.open(Etudiant::db, std::ios::binary | std::ios::in);

        ii >> sl;
        std::cout << "**" << sl << "**" << std::endl;
//        io.write((char*)&size, sizeof (int));
        //io.write((char*)this->nom.data(), size);
//
//        size = this->prenom.size();
//        io.write((char*)&size, sizeof (size_t));
//        io.write((char*)this->prenom.data(), size);
//
//        size = this->lieuNaissance.size();
//        io.write((char*)&size, sizeof (size_t));
//        io.write((char*)this->lieuNaissance.data(), size);
//
//        size = this->matricule.size();
//        io.write((char*)&size, sizeof (size_t));
//        io.write((char*)this->matricule.data(), size);
//
//        size = sizeof (float);
//        float moy = this->getMoyenne();
//        io.write((char*)&moy, size);
//
//        size = sizeof (Mention);
//        io.write((char*)this->mention, size);
//
//        size = sizeof (Sexe);
//        io.write((char*)this->sex, size);

//        this->dateNaissance.write(&io);
//        this->dateObtentionBac.write(&io);

        //io.write(this->prenom.data() , size );
        Etudiant e;
        //({1,2},{3,4},{5,6},{"name","type"}); // something new
        io.close();
    }
