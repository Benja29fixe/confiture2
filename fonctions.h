#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>

/*************************
2 structures de donnees
*************************/
typedef struct data{
  int quantite_conf;
  int nb_bocaux;
  int *tab;
  struct data *suiv;
} s_data;

typedef struct{
  s_data *L; 
}Donnees;


/*************************
Fonctions 
*************************/
void initialise(Donnees *d);

void Skip(FILE *f);

void GetChaine(FILE *f,int taille_max,char *s);

void lecture_fic(char *nomfic, Donnees *D);

void tri_insertion(int *T, int n);

int recherche_exhaustive(int k, int *V, int s);

int algo_dynamique(int k, int *V, int S);

int minimum(int a, int b);

int algo_glouton(int k, int *V, int S);
