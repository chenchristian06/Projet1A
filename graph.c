//
//  graph.c
//  Projet1A
//
//  Created by Chen Christian on 13/04/2018.
//  Copyright © 2018 Chen Christian. All rights reserved.
//

#include "graph.h"
#include "liste.h"
T_SOMMET* creer_graph(){
    return NULL;
}
void creation_graph(char* nom_fichier, T_SOMMET* g){
    FILE* f = fopen(nom_fichier,"r");
    int numero;
    double lat,longi;
    char line[128];
    char mot[512];
    do{
    fscanf(f,"%d %lf %lf %s",&(numero),&(lat),&(longi),line);
    fgets(mot,511,f);
    
    }while();
}



//hachage
int hachage(T_SOMMET* graphe){
    
}

T_SOMMET* dehachage(int i)



//Dijkstra
int* creer_pere(int nb_sommets){
/*on créer un tableau de pere ou l'indice est le pere et le contenu est l'antécédent*/
    int* tab_pere;
    tab_pere = calloc(nb_sommets,sizeof(int));
    int i = 0;
    for(;i<nb_sommets;i++){
        *(tab_pere+i) = -1;
    }
    return tab_pere;
}

int* creer_poids(int nb_sommets,int indice_initial){
    int* tab_poids;
    tab_poids = calloc(nb_sommets,sizeof(*tab_poids));
    int i;
    for(i=0;i<nb_sommets;i++){
        tab_poids[i]=-1;
    }
    return tab_poids;
}

void initialisation_poids(int i, int* tab_poids){
    tab_poids[i]=-1;
}

Liste creation_pas_visite(int nb_sommets){
    int i;
    Liste l = creer_liste();
    for(i=0;i<nb_sommets;i++){
        ajout_tete(i, l);
    }
    return l;
}
Liste creation_deja_visite(void){
    return creer_liste();
}

int supprime_liste(Liste l,int x){
    




