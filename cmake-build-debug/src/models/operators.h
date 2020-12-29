//
// Created by champlainlecode on 29/12/2020.
//

#ifndef ETUD_OPERATORS_H
#define ETUD_OPERATORS_H

#include <iostream>
#include "Date.h"
#include "Etudiant.h"

ostream& operator <<(ostream& os, Date* date);

ostream& operator << (ostream &os, Etudiant* etudiant);

#endif //ETUD_OPERATORS_H
