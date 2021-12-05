#include <stdio.h>

int main()
{
  // dichiarazione variabili
  int num, div;
  div = 0;
  // richiesta e ricezione di un numero
  printf("Inserire un numero: ");
  scanf("%d",&num);
  printf("\nI divisori di %d sono:",num);
  printf("\n");
  while ( div <= num )
  {
    div++ ;
    // stampa a schermo solo dei divisori
    if ( num % div == 0 )
      printf("%d, ",div);
  }

  return 0;
}