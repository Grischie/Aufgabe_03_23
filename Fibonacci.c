#include <stdio.h>

int main() {
  int ende, t, e, z;
  t = 2;
  e = 0;
  z = 0;
    
  printf("\n\nFibonacci-Zahl");
  printf("\nWie viel Folgen möchten Sie? ");
  scanf ("%i",&ende);
  
  switch(ende) {
    case 0: printf("\n0");
      break;
    case 1: printf("\n1");
      break;
    case 2: printf("\n1");
      break;
    default: 
      printf("\n0, 1, 1");
      while( e < (ende-2)){
        
        t = t + z;
        z = t;
        e++;
        
        printf(", %i", t);
      }
  } 
  printf("\n\n");
  return 0;
}
