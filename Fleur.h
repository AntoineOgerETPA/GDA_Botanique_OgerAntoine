#ifndef FLEUR_H
#define FLEUR_H

#include <string>
#include "Plante.h"

class Fleur : public Plante {

  
    public:
  
    void eau();
    void temps(int jours);
    void couper();
    void pdtnuit();
    
    void afficher();
    
    Fleur(std::string name);
    
};

#endif