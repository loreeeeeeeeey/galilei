// esercizi svolti per la verifica di informatica in classe, caricare su github per averne una copia

/*
 * Author:		Soffiati L.
 * Date:		06.12.2021
 * Description:	 Totale alla cassa. (richiede 5 prezzi e al termine dell’inserimento comunica il totale da pagare ed il
				prezzo medio).
				2. Fascia d’età. (richiede gli anni di una persona, quindi comunica a che fascia d’età appartiene tra le
				seguenti: a:1-14 b:15-18 c:19-30 d:31 o più.
				3. Uscita.
*/

#include <stdio.h>
int main(){
	// dichiarazione variabili
	int scelta;									// switch
	float p1, p2, p3, p4, p5, tot, media;		// case 1
	int age;									// case 2
	
	do{
		// scelta case
		printf("\n\n1. Totale alla cassa.");
		printf("\n2. Fascia d' eta'");
		printf("\n3. !! USCITA !!\n");
		scanf("%d",&scelta);
		fflush(stdin);
		switch(scelta){
		
			case 1:{
			// richiesta prezzi
			printf("\nInserire il primo prezzo: ");
		    scanf("%f",&p1);
		    fflush(stdin);
		    
		    printf("\nInserire il secondo prezzo: ");
		    scanf("%f",&p2);
		    fflush(stdin);
		    
		    printf("\nInserire il terzo prezzo: ");
		    scanf("%f",&p3);
		    fflush(stdin);
		    
		    printf("\nInserire il quarto prezzo: ");
		    scanf("%f",&p4);
		    fflush(stdin);
		    
		    printf("\nInserire il quinto prezzo: ");
		    scanf("%f",&p5);
		    fflush(stdin);
		    
		    printf("\n");
		    
		    // calcolo media e totale
		    
		    tot= p1 + p2 + p3 + p4 + p5;
	
		    media= ( p1 + p2 + p3 + p4 + p5 ) / 2;
		    
		    // stampa media e totale
		    printf("Totale: %f\n",tot);
		    printf("Media:  %f\n",media);
			break;
			}
			
	    	case 2:{
	    		//richiesta eta' 
	    		printf("\nInserire l' eta': ");
	    		scanf("%d",&age);
		    	fflush(stdin);
		    	
		    	// verifica a che categoria appartiene
		    	if ( age >= 1 && age<= 14 )
		    		printf("\na");
	    		else if ( age >= 15 && age<= 18 )
		    		printf("\nb");
		    	else if ( age >= 19 && age<= 30 )
		    		printf("\nc");	
		    	else if ( age>= 31 )
		    		printf("\nd");	
		    	
				break;
			}
			
			case 3:{
				
				break;
			}
			
	    	default:{
				printf("\n!! SCELTA NON VALIDA !!\n\n");
				break;
			}
		}
	}while ( scelta != 3 );
	//uscita dal programma
	printf("!! USCITA !!\n");
	printf("Grazie per aver eseguito questo programma.");
	
	return 0;
}


/*
 * Author:		Soffiati L.
 * Date:		06.12.2021
 * Description:	Algoritmo c del flowhcart dato.
*/

#include <stdio.h>
int main(){
	
	// dichiarazione  e richiesta variabili
	int anno, mese, giorno;
	
	printf("inserire anno: ");
	scanf("%d",&anno);
	fflush(stdin);
	
	printf("inserire mese: ");
	scanf("%d",&mese);
	fflush(stdin);
	
	printf("inserire giorno: ");
	scanf("%d",&giorno);
	fflush(stdin);
	
	//verifica condizione anno
	if (anno <=2021){
		printf("\nDamn! Non ho fatto gli auguri al prof!\n");
	}
	
	//verifica condizione mese e giorno
	else{
		if ( mese == 3 && giorno == 15){
			printf("\nDevo fare gli auguri al prof!");
		}
		else{
		printf("\nDevo ricordarmi gli auguri al prof!\n");
		}
	}
	
	return 0;
}
