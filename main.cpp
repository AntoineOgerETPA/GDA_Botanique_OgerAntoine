#include <iostream>
#include "Fleur.h"
#include "Botaniste.h"


int main()
{
    int choix1;
    int morte = 0;
    int jour = 0;
    int taille = 1;
    int engrait = 1;
    int argent = 10;
    Plante * plantee= new Plante("Plantee");
    plantee->afficher();
    
    Botaniste * myself = new Botaniste("Botaniste1");
    while( morte = 1){
        while( jour < 3){
        printf("Que faire avec sa plante ? :\n [1] # L'arroser #\n [2] # La tailler #\n [3] # Donner de l'engrais (max 1)#\n [4] # Vendre (seulement si la maturiter = 5/5)#\n");
        scanf("\n%d",&choix1);
            if(choix1 == 1){
            myself->arroser(plantee);
            jour = jour + 1;
            taille = taille + 1;
            plantee->afficher();
            }
             if(choix1 == 2){
            myself->couper(plantee);
            jour = jour + 1;
            taille = taille - 1;
            plantee->afficher();
            }
             if(choix1 == 3){
            myself->nourrir(plantee);
            jour = jour + 1;
            engrait = 0;
            plantee->afficher();
            }
            if(choix1 == 4){
            printf("vous avez vendu votre plante elle vous rapporte 10$\n");
            argent = argent + 10;
            printf("Argent : %d\n",argent);
            }
            if (engrait == 0){
                printf("Que faire avec sa plante ? :\n [1] # L'arroser #\n [2] # La tailler #\n");
                scanf("\n%d",&choix1);
                 if(choix1 == 1){
                myself->arroser(plantee);
                jour = jour + 1;
                plantee->afficher();
                }
                 if(choix1 == 2){
                myself->couper(plantee);
                jour = jour + 1;
                plantee->afficher();
                }
            }
            if (jour == 3){
            printf("\nVous etes fatiguer il est tant d'aller dormir\n ###  Le jour suivant ###\n  ##    Heure : 9H    ##\n\n\n");
            myself->nuiit(plantee);
            taille = taille + 1;
            jour = 0;
            plantee->afficher();
        }
    }
    }
    if (taille == 3){
        morte == 0;
        printf("Votre plante est morte");
    }
    return 0;
}