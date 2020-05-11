#ifndef Botaniste_CPP
#define Botaniste_CPP

#include <string>
#include "Botaniste.h"
#include "Plante.h"

// std::string _BotanisteName;
  
  
    void Botaniste::arroser(Plante * cible){
        cible->eau();
    }
    
    void Botaniste::nourrir(Plante * cible){
        cible->temps(1);
    }
    
    void Botaniste::couper(Plante * cible){
        cible->couper();    
    }
    
    void Botaniste::nuiit(Plante * cible){
        cible->pdtnuit();
    }
    
    
    Botaniste::Botaniste(std::string nomBotaniste): _BotanisteName(nomBotaniste) {}
    
#endif