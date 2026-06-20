#include <string.h>

//STRUTTURA DATI PER L'UTENTE
typedef struct Totale{
    int numero_versamenti;
    int numero_prelievi;
    int saldo;
}totale;

typedef struct utente{
    char nome[20];
    char cognome[20];
    int numero_conto;
    totale lista_movimenti;
}Utente;

typedef struct chiave{
    char nome[20];
    char cognome[20];
}Chiave;

//FUNCTION PER VISUALIZZARE GLI UTENTI REGISTRATI
void visualizza_lista(Utente correntista[], int n)
{
    int i;
    for (i=0; i<n; i++){
        printf("\nNome:%s\n", correntista[i].nome);
        printf("Cognome:%s\n", correntista[i].cognome);
        printf("Numero conto:%d\n", correntista[i].numero_conto);
        printf("Lista_movimenti:\nNumero versamenti: %d\nNumero prelievi:%d\nSaldo finale:%d\n",i+1, correntista[i].lista_movimenti.numero_versamenti, correntista[i].lista_movimenti.numero_prelievi, correntista[i].lista_movimenti.saldo);
     }
}
//FUNCTION PER INSERIRE UN NUOVO UTENTE
void inserire(Utente correntista[], int *n)
{

    puts("\nNome: ");
    fflush(stdin);
    gets(correntista[*n].nome);
    strupr(correntista[*n].nome);
    puts("Cognome: ");
    fflush(stdin);
    gets(correntista[*n].cognome);
    strupr(correntista[*n].cognome);
    puts("Numero conto corrente: ");
    fflush(stdin);
    scanf("%d",&correntista[*n].numero_conto);
    printf("Inserire numero di prelievi effettuati: ");
    scanf("%d", &(correntista[*n].lista_movimenti.numero_prelievi));
    printf("Inserire numero di versamenti effettuati: ");
    scanf("%d", &(correntista[*n].lista_movimenti.numero_versamenti));
    printf("Inserire saldo finale: \n");
    scanf("%d", &(correntista[*n].lista_movimenti.saldo));
    (*n)++;

}
  //FUNCTION PER ELIMINARE UN'UTENTE
void eliminare(Utente correntista[], int *n)
{
    int i,j;
    Chiave utente_da_elim;
    printf("Inserire nome da eliminare:\n");
    fflush(stdin);
    gets(utente_da_elim.nome);
    strupr(utente_da_elim.nome);
    printf("Inserire cognome da eliminare:\n");
    fflush(stdin);
    gets(utente_da_elim.cognome);
    strupr(utente_da_elim.cognome);
    for( i=0; i<(*n); i++){
        if(strcmp(utente_da_elim.nome, correntista[i].nome) == 0 && strcmp(utente_da_elim.cognome, correntista[i].cognome)==0){
            for( j=i; j<(*n); j++){
                correntista[j] = correntista[j+1];
            } (*n)--;
            break;
        }
        }
        if (i == *n) {
            printf("\nIl correntista non esiste!!!\n");}

}


