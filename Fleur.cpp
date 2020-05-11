#ifndef FLEUR_CPP
#define FLEUR_CPP
#include "Plante.h"
#include "Fleur.h"

#include <iostream>
#include <string>
#include <vector>

/*
    public:
    void afficher();
    void croissance();
*/

void Fleur::afficher() {

    std::cout << " La Fleur" << _nom << " a " << _pointDeVie << " point de vie, " << _hydratation << " sur " << _hydratation_max << " d'hydratation et sa croissance est de : " << _croissance  << std::endl;
}

//-------------------------------------------------------------------------------------------------
//croissance x PV

void Fleur::croissance() {

    
//========================================================================
// alert PV
        if (_pointDeVie <= 0 ) {
            
            std::cout << _nom << " est désséché ! Elle na pas survécu a vaux mains... " << std::endl;
            _valeurs = 0;
        }
    
        else if (_pointDeVie <= 10 && _pointDeVie > 0) {
            
            std::cout << _nom << " ne vas pas très bien, faite attention ! " << std::endl;
        }
    
        else if (_pointDeVie == 10) {
        
            std::cout << _nom << " n'est pas en grande forme. " << std::endl;
            _croissance +=5;
        }
    
    else {
        
         _croissance +=20;
        std::cout << _nom << " est en bonne santé ! " << std::endl;
    }
    
//========================================================================
// eclosion x valeurs

    if (_croissance >= 50 && _croissance <= 90 && _eclosion == 0) {
        
        std::cout << _nom << " a eclot ! Dorénavant sa valeurs est multiplié par x10 ! " << std::endl;
        _valeurs = _valeurs*10;
        _eclosion = 1;
    }
     if (_croissance >= 90) {

        std::cout << _nom << " a fané... Malheureusement vous n'avez pas eu le temps de la vendre... dorénavant elle vault 3x moins cher... " << std::endl;
        _valeurs = _Savaleurs/3;

    }
    
    else if (_croissance < 50) {
        
        std::cout << _nom << " pouce doucement et ressemble a un petit bourgeon " << std::endl;
    }
    
//========================================================================
// eau x taillage

    if(_taillage <= 0) {
        
        std::cout << _nom << " mériterais d'etre taillé " << std::endl;
        _pointDeVie -=2;
    }


    if(_hydratation <= 0) {
        
        std::cout << _nom << " mériterais d'etre arrosé " << std::endl;
        _pointDeVie -= 10;
    }
    
    // - eau et taillage
    _hydratation -=10;
    _taillage -= 10;
    
}

Fleur::Fleur(std::string nom, int valeurs): Plante(nom, valeurs), _eclosion(0), _Savaleurs(valeurs){}

#endif
