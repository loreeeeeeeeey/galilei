/*
 * Author:		Soffiati L.
 * Date:		05.12.2021
 * Description:	Programma che acquisito un numero in input e stampa a video tutti i suoi divisori.
*/

#include <stdio.h>
int main(){
	
    // dichiarazione variabili
	int num, cont, div;
	div= 1;
	
    // richiesta valore
	printf("Inserire un numero :");
	scanf("%d",&num);
	fflush(stdin);
	printf("\nI divisori di %d sono:\n",num);
	while ( div <= num){
		if( num % div == 0 ){
			printf(" %d;",div);
			cont++ ;
		}
		div++ ;
	}
	// stampa se numero primo o meno
	if ( cont <=2 )
		printf("\nE' un numero primo.");
	else
		printf("\nNon e' un numero primo.");
		
	return 0;
}