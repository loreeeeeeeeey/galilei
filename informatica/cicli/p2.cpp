/**
 * Author:       Soffiati L.
 * Date:         10.01.2022
 * Description:  Realizzare un programma che visualizza i divisori dei primi N numeri
 				 naturali con N inserito da tastiera, e comunica per ogni numero se è primo
 				 oppure no.
*/

#include <stdio.h>
int main(){
	int nValori;	// 
	int numero;		// 
	int cnt;		// 
	int divisore;	// 
	
	// chiedo all' utente quanti valori vuole visualizzare
	printf("Inserisci il numero di divisori: ");
	scanf("%d",&nValori);
	fflush(stdin);
	
	// numero varia da 1 al numero N inserito dall'utente
	for (numero = 1; numero <= nValori; numero++){
		
		printf("%d: ",numero);
		cnt = 0;	// per ogni numero azzero il contatore
		
		//ricerco i divisori
		for (divisore = 1; divisore <= numero; divisore++){
			if (numero % divisore == 0){	// verifica che divisore divida perfettamente numero
				printf("%d, ",divisore);
				cnt++;
			}
			
		}
	if (cnt <= 2)						// controllo del numero di divisori contati/trovati
			printf("Numero primo.\n");
		else
			printf("Numero non primo.\n");	
	}
	return 0;
}
