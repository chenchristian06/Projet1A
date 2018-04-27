//
//  graph.h
//  Projet1A
//
//  Created by Chen Christian on 13/04/2018.
//  Copyright © 2018 Chen Christian. All rights reserved.
//

#ifndef graph_h
#define graph_h

#include <stdio.h>
#include <stdlib.h>

//DEBUT_DEF_STRUCT
//liste des successeurs et T_ARC est le nom de l'arc
typedef struct lsucc{
    T_ARC val;
    struct lsucc* suiv;
}* L_ARC;
//structure un arc T_ARC
typedef struct{
    char* nom;
    double x,y;
    L_ARC voisins;
} T_SOMMET;
// structure des sommets T_SOMMET
typedef struct{
    int depart;
    int arrivee;
    double cout;
} T_ARC;
//description des éléments dans le tableau 
typedef struct{
    int poids;
    int deja_visite; // 0 pour non et 1 pour oui
} TPOIDS;
//FIN_DEF_STRUCTURE

#endif /* graph_h */
