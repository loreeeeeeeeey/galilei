//prova non mia


#include <stdio.h>
 
int main () {

    /* local variable definition */
    int a, b, c;
    printf("Inserire valore 1: ");              // richiesta valori all'utente e relativa
    scanf("%d", &a );
    printf("\nInserire valore 2: ");
    scanf("%d", &b );
    printf("\nInserire valore 3: ");
    scanf("%d", &c );
    /* check the boolean condition */
    if( (a < b) < c ) 
      /* if condition is true then print the following */
      printf("0\n" );
    else 
        {
        if( (a > b) > c ) 
        /* if else if condition is true */
        printf("1\n" );
        else 
        printf("-1\n" );
        }
   
   
   printf("lu\n");
 // caca
 
   return 0;
}
