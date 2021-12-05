// es 9 pag 186 

#include <stdio.h>

int main(void) 
{
    int a, b, c;                                // dichiarazione variabili
    printf("Inserire valore 1: ");              // richiesta valori all'utente e relativa
    scanf("%d", &a );                           // assegnazione alle variabili
    printf("\nInserire valore 2: ");
    scanf("%d", &b );
    printf("\nInserire valore 3: ");
    scanf("%d", &c );
    if( a < b < c )                              // se a < b < c
        {
        printf("\n0");
        }                                        // allora stampa 0
    else                                     
        {
        if( a > b > c )                              // se a > b > c
            printf("\n1");                           // allora stampa 1
        else                                         // altrimenti
            printf("\n-1");                          // stampa -1
        }

    return 0;
}