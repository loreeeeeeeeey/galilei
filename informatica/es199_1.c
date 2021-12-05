/*
Pag 199 es 1 
esercizio sui gradi alcolici di una bevanda, con la relativa classificazione
*/
#include <stdio.h>
int main()
{
    int gradi;
    //inserimento valore
    printf("Inserire i gradi alcolici della bevanda: ");
    scanf("%d",&gradi);
    //catena di condizioni per verificare di quale si tratta, in kernel style
    if ( 40 < gradi )
        printf("Si tratta di un superalcolico. ");
    else if ( ( 20 < gradi ) && ( gradi <=40 ) )
        printf("Si tratta di un' alcolico. ");
    else if ( ( 15 < gradi ) && ( gradi <= 20 ) )
        printf("Si tratta di un vino liquoroso. ");
    else if ( ( 12 < gradi ) && ( gradi <= 15 ) )
        printf("Si tratta di un vino forte. ");
    else if ( ( 10,5 < gradi ) && ( gradi <= 12 ) )
        printf("Si tratta di un vino normale. ");
    else if ( gradi <=10.5 )
        printf("Si tratta di un vino leggero. ");
    return 0;
}