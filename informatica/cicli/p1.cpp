/**
 * Author:       Soffiati L.
 * Date:         10.01.2022
 * Description:  Realizza un programma ce richiede un numero in input, il programma deve visualizzare tutti i divisori 
 				 ed al termine comunicare quanti divisori ha trovato. se il numero di divisori è inferiore o uguale a 2
				 allora il numero inserito è primo
*/
#include <stdio.h>
int main(){
	int numero;		// 
	int cnt;		// 
	int divisore;	// 
	
	// richiesta numero
	printf("Inserisci un numero: ");
	scanf("%d",&numero);
	fflush(stdin);
	printf("\n");
	
	
	// ciclo di visualizzazione e conteggio dei divisori
	
	/*	ciclo while
		while( divisore <= numero){
		....
		...
		divisore = divisore + 1 // divisore++
	
	*/
	
	cnt = 0; 
	for (divisore = 1; divisore <= numero; divisore++){
		if (numero % divisore == 0){	// verifica che divisore divida perfettamente numero
			printf("%d, ",divisore);
			cnt++;
		}
	}
	printf("\n\nDivisori trovati: %d quindi ", cnt);
	if (cnt <= 2)						// controllo del numero di divisori contati/trovati
		printf("Il numero e' primo.");
	else
		printf("Il numero non e' primo.");
	
	
	
	return 0;
}
