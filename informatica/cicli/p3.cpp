/**
 * Author:       Soffiati L.
 * Date:         10.01.2022
 * Description:  come il programma precedente, ma si inseriscono i due estremi, N1 < N2
*/
#include <stdio.h>
int main(){
	int N1, N2;	// 
	int numero;		// 
	int cnt;		// 
	int divisore;	// 
	
	// chiedo all' utente da quale valore vuole visualizzare i divisori
	printf("Inserisci il numero di partenza dei divisori: ");
	scanf("%d",&N1);
	fflush(stdin);
	
	printf("Inserisci il numero di termine dei divisori: ");
	scanf("%d",&N2);
	fflush(stdin);
	
	// numero varia da 1 al numero N inserito dall'utente
	for (numero = N1; numero <= N2 ; numero++){
		
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
