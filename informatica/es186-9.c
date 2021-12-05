#include <stdio.h>

int main(void) 
{
  int n1, n2, n3;                       // dichiarazione variabili
  printf("Inserire valore 1: ");        // richiesta valori all'utente e relativa
  scanf("%d", &n1 );                    // assegnazione alle variabili
  printf("\nInserire valore 2: ");
  scanf("%d", &n2 );
  printf("\nInserire valore 3: ");
  scanf("%d", &n3 );
  if ( n1<n2<n3 )                       // se n1 < n2 < n3
  printf("\n0");                        // allora stampa 0
  else                                  // altrimenti
    if ( n1>n2>n3)                        // se n1 > n2 > n3
    printf("\n1");                        // allora stampa 1
    else                                  // altrimenti
    printf("\n-1");                       // stampa -1

  return 0;
}