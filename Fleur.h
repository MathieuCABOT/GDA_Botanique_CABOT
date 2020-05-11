#ifndef FLEUR_H
#define FLEUR_H
#include "Plante.h"

#include <iostream>
#include <string>
#include <vector>


//Ne pas oublier d'inclure Personnage.h pour pouvoir en hériter !
// les attribu ( variable membre) (définie ce qu'il est, ce qu'il contient)

class Fleur: public Plante {
    

    protected:
    
    int _eclosion;
    int _Savaleurs;
    
public:
    
    //les methodes ( ex: il sait donner son nom, donné sa distance etc)
    void afficher();
    void croissance();

    Fleur(std::string nom, int valeurs);
};

#endif