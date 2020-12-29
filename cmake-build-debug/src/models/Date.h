//
// Created by champlainlecode on 29/12/2020.
//

#ifndef ETUD_DATE_H
#define ETUD_DATE_H

#include <iostream>

using namespace std;

class Date {
    protected:
        int jour, mois, annee;

    public:
        Date(int jour, int mois, int annee): jour(jour), mois(mois), annee(annee){}

    public:
        int getJour();
        int getMois();
        int getAnnee();

    public:
        Date* setJour(int jour);
        Date* setMois(int mois);
        Date* setAnnee(int annee);

        bool equals(Date* date);

        bool operator == (Date* const date){
            return date != nullptr && this->equals(date);
        }
};



#endif //ETUD_DATE_H
