#include <stdio.h>


int main(void) 
{
  int n1, n2, n3;
  printf("Inserire valore 1: ");
  scanf("%d", &n1 );
  printf("\nInserire valore 2: ");
  scanf("%d", &n2 );
  printf("\nInserire valore 3: ");
  scanf("%d", &n3 );
  if( n1==n2==n3 )
  printf("\nSono stati introdotti numeri uguali");
  else
  printf("\nNon sono stati introdotti numeri uguali");
  return 0;
}