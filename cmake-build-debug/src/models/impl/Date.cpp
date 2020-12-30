//
// Created by champlainlecode on 29/12/2020.
//

#include <fstream>
#include "../Date.h"




int Date::getJour(){
    return jour;
}

int Date::getMois(){
    return mois;
}
int Date::getAnnee(){
    return annee;
}


Date* Date::setJour(int jour){
    this->jour = jour;
    return this;
}

Date* Date::setMois(int mois){
    this->mois = mois;
    return this;
}

Date* Date::setAnnee(int annee){
    this->annee = annee;
    return this;
}

bool Date::equals(Date* date){
    return date->annee == annee & date->mois == mois & date->jour == jour;
}

void Date::write(std::fstream* io, bool canClose){
    io->write((char*)&jour, sizeof (int));
    io->write((char*)&mois, sizeof (int));
    io->write((char*)&annee, sizeof (int));
    if(canClose)
        io->close();
}

void Date::read(std::fstream io, bool canClose){
    io.read((char*)&jour, sizeof (int));
    io.read((char*)&mois, sizeof (int));
    io.read((char*)&annee, sizeof (int));
    if(canClose)
        io.close();
}

