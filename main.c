/*SI SUPPONGA DI VOLER GESTIRE I CONTI CORRENTI DI N UTTENTI.
  OGNI UTENTE É IDENTIFICATO DAL COGNOME, NOME, NUMERO DEL CONTO, LISTA MOVIMENTI.
  GESTIRE I CONTI CORRENTI IN MODO CHE I NOMINATIVI SIANO IN ORDINE ALFABETICO E PERMETTERE LE SEGUENTI OPERAZIONI
  1) INSERIRE UN NUOVO CORRENTISTA A CUI VIENE ASSEGNATO UN CODICE UNIVOCO.
  2) ELIMINARE UN CORRENTISTA DATO IL COGNOME E NOME */

#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#define DIM 100

int main()
{

    int n=0;
    int i,j;
    int operazioni=0;
    int scelta;

    printf("Inserire numero utenti: ");
    scanf("%d", &n);
    Utente correntista[DIM];

    for(i=0; i<n; i++){
    puts("\nNome: ");
    fflush(stdin);
    gets(correntista[i].nome);
    strupr(correntista[i].nome);
    puts("Cognome: ");
    fflush(stdin);
    gets(correntista[i].cognome);
    strupr(correntista[i].cognome);
    puts("Numero conto corrente: ");
    scanf("%d",&correntista[i].numero_conto);
    printf("Inserire numero di prelievi effettuati: ");
    scanf("%d", &(correntista[i].lista_movimenti.numero_prelievi));
    printf("Inserire numero di versamenti effettuati: ");
    scanf("%d", &(correntista[i].lista_movimenti.numero_versamenti));
    printf("Inserire saldo finale: ");
    scanf("%d", &(correntista[i].lista_movimenti.saldo));
    }
    visualizza_lista(correntista, n);

    printf("\nQuante operazione si vuole effettuare?\n");
    scanf("%d", &operazioni);
    for(j=0; j<operazioni; j++){

        printf("\nDigitare 1 per inserire utente, 2 per eliminare utente\n");
        scanf("%d", &scelta);
    switch (scelta){
    case 1 : inserire(correntista, &n);
             break;
    case 2 : eliminare(correntista,&n);
             break;
    default: j--;
    printf("Errore inserimento:\n");
        }
    }
    visualizza_lista(correntista, n);


}
