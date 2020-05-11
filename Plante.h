#ifndef PLANTE_H
#define PLANTE_H

#include <iostream>
#include <string>
#include <vector>

class Plante{


//"portected" veut dire que les classes qui en hérite y aurront acces

    protected:
        // mettre"_" pour reconaitre que l'on parle d'un attribut
        
        int _pointDeVie;
        std::string _nom;
        int _hydratation;
        int _hydratation_max;
        int _taillage;
        int _croissance;
        int _valeurs;
        
        
    public:
    
    //les methodes ( ex: il sait donner son nom, donné sa distance etc)
  
        void afficher();
        void donneEngrais();
        void tailler();
        void arroser();
        void croissance();
        std::string getNom();
        int getCroisssance();
        int getValeurs();
  

        Plante(std::string nom, int valeurs);
};

#endif