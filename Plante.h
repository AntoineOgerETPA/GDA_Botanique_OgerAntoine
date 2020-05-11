#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{
  protected:
    int _maturiter;
    int _taille;
    int _soif;
    std::string _nom;
  
  public:
  
    void eau();
    void temps(int jours);
    void couper();
    void pdtnuit();
    
    
    void afficher();
    
    Plante(std::string name);
    
};

#endif