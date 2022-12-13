#include <stdio.h>

int main() {
  int ende, t, e;
  t = 2;
  e = 0;
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
    default: while( e < (ende-2)){        
        t = t + e;
        e++;
        printf("\n0, 1, 1, %i", t);
      }
  }
  return 0;
}
