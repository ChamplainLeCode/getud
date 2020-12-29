//
// Created by champlainlecode on 29/12/2020.
//

#include "../operators.h"

//
// Created by champlainlecode on 29/12/2020.
//

ostream& operator <<(ostream& os, Date* date){
    os << "{ jour:  " << date->getJour() << ", "
       << " mois:  " << date->getMois() << ", "
       << " annee: " << date->getAnnee() << " }";
    return os;
};

ostream& operator <<(ostream& os, Date date){
    os << "{\n"
       << "\tjour:  " << date.getJour() << ",\n"
       << "\tmois:  " << date.getMois() << ",\n"
       << "\tannee: " << date.getAnnee() <<
       "\n}";
    return os;
};

std::ostream& operator << (std::ostream &os, Etudiant* const etudiant){
    os << "{\n"
       << "\tmatricule: " << etudiant->getMatricule() << ",\n"
       << "\tnom: " << etudiant->getNom() << ",\n"
       << "\tprenom: " << etudiant->getPrenom() << ",\n"
       << "\tdateNaissance: " << etudiant->getDateNaissance() << ",\n"
       << "\tdateObtentionBac: " << etudiant->getDateObtentionBac() << ",\n"
       << "\tlieuNaissance: " << etudiant->getLieuNaissance() << ",\n"
       << "\tsexe: " << etudiant->getSexToString() << ",\n"
       << "\tmention: " << etudiant->getMentionToString() << ",\n"
//       << "\tdateNaissance: " << etudiant->getParcours() << ",\n"
       << "\tmoyenne: " << etudiant->getMoyenne() << ",\n"
       << "}" << std::endl;
    return os;
}