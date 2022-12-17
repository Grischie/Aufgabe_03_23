#include <stdio.h>

int main() {
  int ende, t, e, z, y;
  t = 2;
  e = 0;
  z = 1;
  y = 1;  
  printf("\n\nFibonacci-Zahl");
  printf("\nWie viel Folgen möchten Sie? ");
  scanf ("%i",&ende);
  
  switch(ende) {
    case 0: printf("\n0");
      break;
    case 1: printf("\n0, 1");
      break;
    default: 
      printf("\n0, 1, 1");
      while( e < (ende-2)){
        
        t = y + z;
        z = y;
        y = t;
        e++;
        
        printf(", %i", t);
      }
  } 
  printf("\n\n");
  return 0;
}
