#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "fonctions.h"

int algo_glouton(int k, int *V, int S){
  if(S==0){
    return 0;
  }
  else{
    int i=0;
    while ((i<k) && (V[i]<=S)){
      i+=1;
    }
    return 1+algo_glouton(k, V, S-V[i-1]);
  }
}
