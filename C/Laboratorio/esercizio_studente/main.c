#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define DIM 10

/*
Definisca un tipo di dato Studente. Ogni studente è caratterizzato da un nome, un cognome e una matricola.
Acquisiscai dati di 10 studenti e, per ogni nuovo studente inserito, proceda ad un inserimento ordinato
Stampare gli studenti
*/

typedef struct{ //struttura
    char nome[MAX];
    char cognome[MAX];
    int matricola;
}Studente;

int main()
{
    Studente alunni[DIM]; //dichiarazione vettore
    int k;

    for(k = 0; k < DIM; k++){   //richiesta dati in input
        printf("Inserisci il nome dello studente: ");
        scanf("%s", &alunni[k].nome);

        printf("Inserisci il cognome dello studente: ");
        scanf("%s", &alunni[k].cognome);

        printf("Inserisci il numero della matricola: ");
        scanf("%d", &alunni[k].matricola);
    }

    for(k = 0; k < DIM; k++){ //stampa
        printf("Nome: %s - ", &alunni[k].nome);
        printf("Cognome: %s - ", &alunni[k].cognome);
        printf("Numero Matricola: %d \n", alunni[k].matricola);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
