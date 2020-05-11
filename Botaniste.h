#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <iostream>
#include <string>
#include <vector>

#include "Plante.h"
//#include "PlanteCarnivore.h"
//#include "Animal.h"


class Botaniste{
    
//Signifie : créer une classe Guerrier qui hérite de la classe Personnage
    private:
        // mettre"_" pour reconaitre que l'on parle d'un attribut
        int _argent;
        std::string _nom;
        int _engrais;
        std::vector<Plante*> _plante;
    
    public:
    
    //les methodes ( il sait donner son nom, donné sa distance etc)
    void afficher();
    void dormir();
    //void ajoutPlante();
    //void vendre();
    //void arroser();
    //void engrais();
    //void tailler();
    //void acheterEngrais();

};

#endif