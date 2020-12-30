#include <iostream>
#include "cmake-build-debug/src/models/enums/constants.h"
#include "cmake-build-debug/src/models/Etudiant.h"
#include <list>
#include "cmake-build-debug/src/models/operators.h"
#include <fstream>

using namespace std;

int main() {

    Date *d = new Date(29, 12, 2020),
         *a = new Date(30, 12, 2020);
    Sexe sex = MASCULIN;
    list<Etud> l = {};
    Etud et = (Etud) malloc(sizeof (struct ETUD));
    et->anneeDebut = 2020;
    et->anneeFin = 2021;
    et->niveau = 3;

    l.push_front(et);
    Etudiant *e = new Etudiant("14A2005", "Bakop Njoba", "Champlain Marius", "Bazou", MASCULIN, *(new Date(19, 10, 1994)), *(new Date(21, 06, 2014)), 10.95, {et}, A_MOINS);
    Etudiant st;
//    std::cout << e;
            //( nullptr, A_PLUS);
//
//    d->setAnnee(2020)
//     ->setMois(12)
//     ->setJour(29);

    std::cout << e << std::endl;
    char t[100];

    e->write();
    std::cout << "Mosl\n<" << e->getNom().c_str() << "<\n<" << t << "<" << std::endl;
    std::cout << "Date 2 " << a->getJour() << '-' << a->getMois() << '-' << a->getAnnee() << std::endl;
    std::cout << "Date 1 == Date 2 = [ " << !d->equals(a) << " ] [" << sex << " ] " << std::endl;
    return 0;
}
