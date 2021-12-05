/*
dati i secondi, calcolo di ore, minuti e secondi
*/
#include <stdio.h>

int main(void) 
{
  int tot, hr, min, sec;
  printf("Inserire i secondi :");
  scanf("%d", &tot);
  hr = tot / 3600;         // divido il numero di secondi ottenendo le ore
  min = (tot % 3600) / 60; // divido il numero di secondi (del resto delle ore) ottenendo i minuti
  sec = tot % 60;          // ottengo i secondi ottenuti dal resto della divisione dei minuti
  printf("Hours: %d \nMinutes: %d \nSeconds: %d\n", hr, min, sec);
  return 0;
}