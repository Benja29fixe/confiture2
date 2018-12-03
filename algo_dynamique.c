#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "fonctions.h"

int algo_dynamique(int k, int *V, int S){

  int i,t,z;
  
  int **M=malloc((S+1)*sizeof(int*));
  for(z=0; z<=(S+1); z++){
    M[z]=malloc(sizeof(int)*(k));
  }
  

 
  
 for(i=0; i<k; i++){
for(t=0; t<=S; t++){
   
      if(t==0){
	M[t][i]=0;
      }
     else  if(i==0){
	M[t][i]=S+1;
      }
      else{
       	M[t][i]=minimum((i>=1)?M[t][i-1]:S+1, (t-V[i]>=0)?1+M[t-V[i]][i]:S+1);
      }
    }
  }

 return (M[S][k-1]==S+1)?(M[S-1][k-1]+1):(M[S][k-1]);
  
}



int minimum(int a, int b){
  return (a<b)?a:b;
}
  
