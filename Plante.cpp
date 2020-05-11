#ifndef Plante_CPP
#define Plante_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"



//-------------------------------------------------------------------------------------------------

    void Plante::donneEngrais() {
        _croissance += 20;
    }

//-------------------------------------------------------------------------------------------------

    void Plante::arroser() {
        std::cout << "Vous arrosez " << _nom << std::endl;
        _hydratation += 20;


        if (_hydratation_max >= 50) {
        
            std::cout << _nom << " est gorgé d'eau ! Vous lui en avez trop donné. " << std::endl;
            _pointDeVie -= 10;
            _hydratation = 0;
        }
    }
    
//-------------------------------------------------------------------------------------------------

    void Plante::tailler(){
        std::cout << "Vous taillez " << _nom << std::endl;
        _taillage +=20;
        
        if (_taillage >= 50) {
            
            std::cout << _nom << " est trop afaiblie ! Vous l'avez trop tailler. " << std::endl;
            _pointDeVie -= 20;
            _taillage = 0;
        }
    }

//-------------------------------------------------------------------------------------------------

    void Plante::afficher() {
        
        std::cout << " La plante" << _nom << " a " << _pointDeVie << " point de vie, " << _hydratation << " / " << _hydratation_max << " d'hydratation et sa croissance est de : " << _croissance  << std::endl;
    }
    
//-------------------------------------------------------------------------------------------------
//croissance x PV

    void Plante::croissance(){
    
    
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
// alert besoins

    if(_taillage <= 0) {
        
        std::cout << _nom << " mériterais d'etre taillé " << std::endl;
        _pointDeVie -=2;
    }


    if(_hydratation <= 0){
        
        std::cout << _nom << " mériterais d'etre arrosé " << std::endl;
        _pointDeVie -= 10;
    }

        _hydratation -=10;
        _taillage -= 10;
    }

//========================================================================

//-------------------------------------------------------------------------------------------------


std::string Plante::getNom(){
    return _nom;
}

int Plante::getCroisssance(){
    return _croissance;
}

int Plante::getValeurs(){
    return _valeurs;
}

Plante::Plante(std::string nom, int valeurs):  _pointDeVie(40), _nom(nom), _hydratation(10), _hydratation_max(40), _taillage(10), _croissance(10), _valeurs(valeurs) {}


#endif