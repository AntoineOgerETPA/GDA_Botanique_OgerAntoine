#ifndef Plante_CPP
#define Plante_CPP

#include <iostream>
#include "Plante.h"

/* 
    int _maturiter;
    int _taille;
    int _soif;
    int nuit;
    std::string _nom; 
*/
    void Plante::temps(int jours){
        _maturiter += 2;
        _soif += 2;
    }
    
    
    void Plante::couper(){
        _taille -= 1;
    }
    
    void Plante::eau(){
        _soif -= 1;
        _taille += 1;
    }
    
    void Plante::pdtnuit(){
        _soif += 2;
        _taille += 1;
        _maturiter +=1;
    }
    
    void Plante::afficher(){
        std::cout << _nom << " ,caractéristique :\n- Maturiter : " 
                << _maturiter << "/5\n- Taille : "
                << _taille << "/3\n- Soif : " << _soif << "/6" << std::endl;
    }

    Plante::Plante(std::string name) : _nom(name), _maturiter(0), _taille(1), _soif(3)  {}

#endif