//
// Created by champlainlecode on 29/12/2020.
//

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
