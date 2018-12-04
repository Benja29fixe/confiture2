#include <stdlib.h>
#include <stdio.h>
#include <string.h>
# include <time.h>
#include "fonctions.h"

int main(int argc ,char** argv){
  /* argc est le nombre de mot de la ligne de commande
     argv est un tableau de chaines de caracteres:
     une chaine par mot de la ligne de commande  */

  int i;
  int ch;
  char *nomfic;
  Donnees D;
  initialise(&D);

  clock_t temps_initial;
  clock_t temps_final;
  double temps_cpu;
  FILE *f1, *f2, *f3;

  if(argc !=2){
    printf("Erreur format: %s  <Nom_du_Fichier.txt> ",argv[0]);
    return 1;
  }

  /* Nom du fichier */
  nomfic=strdup(argv[1]);

  /* Lecture du fichier externe, contenant quantites, nombre de bocaux et tableau de pots
     (ici fic1) */
  lecture_fic(nomfic, &D);

  /* Test du bon fonctionnement entrées */
  printf("Il y a %d grammes de confiture et %d pots de différentes tailles.\n\n", D.L->quantite_conf, D.L->nb_bocaux);
 
  printf("Les tailles des pots de confiture sont les suivantes :\n");
 
  for(i=0; i<D.L->nb_bocaux; i++){
    printf("valeur du pot %d : %d\n", i, D.L->tab[i]);
  }
  /*
  do{
    printf("\n\n===========================================================\n");
    printf("0 : QUITTER\n");
    printf("1 : algorithme exhaustif\n");
    printf("2 : algorithme programmation dynamique\n");
    printf("3 : algorithme glouton\n\n");
    printf("Choisissez un algorithme (nombre entre 1 et 3, quitter=0) : ");
    scanf("%d",&ch);
    printf("===========================================================\n");

  
/*     switch(ch){ */

/*     case 0: */
/*       break; */
      
/*     case 1: */
/*******************************/
      f1=fopen("./temps/algo_exhaustif_d4.temps", "a");
      /*******************************/

            printf("\n-----------------------\n");
      printf("1/ Algorithme exhaustif");
            printf("\n-----------------------");
	     /*******************************/
      temps_initial=clock();
      /*******************************/
      printf("SOLUTION: Nombre minimum de bocaux necessaires pour %d g de confiture: %d \n",D.L->quantite_conf, recherche_exhaustive(D.L->nb_bocaux, D.L->tab, D.L->quantite_conf));
 /*******************************/
      temps_final=clock();
      temps_cpu =((double)(temps_final-temps_initial))/ CLOCKS_PER_SEC;
      fprintf(f1, "%d %d %f\n", D.L->quantite_conf, D.L->nb_bocaux, temps_cpu);
      fclose(f1);
      /*******************************/
  
/*       break; */
  
/*         case 2: */
  
   /* /\*******************************\/ */
   /*    f2=fopen("./temps/algo_dynamique_d4.temps", "a"); */
   /*    /\*******************************\/ */
   /*          printf("\n-----------------------\n"); */
   /*    printf("2/ Algorithme programmation dynamique"); */
   /*          printf("\n-----------------------\n"); */
   /* 	     /\*******************************\/ */
   /*    temps_initial=clock(); */
   /*    /\*******************************\/ */
   /*    printf("SOLUTION: Nombre minimum de bocaux necessaires pour %d g de confiture: %d \n",D.L->quantite_conf, algo_dynamique(D.L->nb_bocaux, D.L->tab, D.L->quantite_conf)); */
   /*    /\*******************************\/ */
   /*    temps_final=clock(); */
   /*    temps_cpu =((double)(temps_final-temps_initial))/ CLOCKS_PER_SEC; */
   /*    fprintf(f2, "%d %d %f\n", D.L->quantite_conf, D.L->nb_bocaux, temps_cpu); */
   /*    fclose(f2); */
      /*******************************/
      /*
      break;
      
/*     case 3: */
/*******************************/
  /*     f3=fopen("./temps/algo_glouton_d4.temps", "a"); */
/*       /\*******************************\/ */
/*       printf("\n-----------------------\n"); */
/*       printf("3/ Algorithme glouton"); */
/*            printf("\n-----------------------\n"); */
/* 	    /\*******************************\/ */
/*       temps_initial=clock(); */
/*       /\*******************************\/ */
/*       printf("SOLUTION: Nombre minimum de bocaux necessaires pour %d g de confiture: %d \n",D.L->quantite_conf, algo_glouton(D.L->nb_bocaux, D.L->tab, D.L->quantite_conf)); */
/* /\*******************************\/ */
/*       temps_final=clock(); */
/*       temps_cpu =((double)(temps_final-temps_initial))/ CLOCKS_PER_SEC; */
/*       fprintf(f3, "%d %d %f\n", D.L->quantite_conf, D.L->nb_bocaux, temps_cpu); */
/*       fclose(f3); */
      /*******************************/



      
/*       break; */

/*           default: */
/*       printf("ATTENTION!! \nVous devez choisir un nombre entre 0 et 3.\n"); */

      

/*     } */
/*     }while(ch!=0); */

/*     printf("\n\nFIN\n\n"); */

      

}

