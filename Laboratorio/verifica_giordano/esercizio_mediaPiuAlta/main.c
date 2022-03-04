#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define DIM 2

/*
definire una struttura per memorizzare i dati degli studenti di una classe e dei voti nelle varie discipline: italiano, matematica ed informatica.
Si Scriva una funzione in C che , a partire da un vettore di studenti fornito, come argomento, determini la disciplina che ha la media più alta
*/

typedef struct { //struttura
    char nome[MAX];
    char cognome[MAX];
    int matricola;
    float italiano;
    float matematica;
    float informatica;
} Studente;

void chiediInformazioni(Studente alunni[]) { //funzione presa in input
    int k;

    for(k = 0; k < DIM; k++) {
        printf("Inserisci il nome dello studente: ");
        fflush(stdin);
        scanf("%s", &alunni[k].nome);

        printf("Inserisci il cognome dello studente: ");
        fflush(stdin);
        scanf("%s", &alunni[k].cognome);

        printf("Inserisci il numero della matricola: ");
        fflush(stdin);
        scanf("%d", &alunni[k].matricola);

        printf("Inserisci il voto di italiano: ");
        fflush(stdin);
        scanf("%s", &alunni[k].italiano);

        printf("Inserisci il voto di matematica: ");
        fflush(stdin);
        scanf("%s", &alunni[k].matematica);

        printf("Inserisci il voto di informatica: ");
        fflush(stdin);
        scanf("%d", &alunni[k].informatica);
    }
}

void media(Studente alunni[], float *mediaInfo, float *mediaIta, float *mediaMate){ //funzione per il calcolo delle varie medie
    float somma = 0;

    int k;

    for(k = 0; k < DIM; k++) {
        somma = somma + alunni[k].italiano;
    }
    *mediaIta = somma / DIM;

    somma = 0;
    for(k = 0; k < DIM; k++) {
        somma = somma + alunni[k].matematica;
    }
    *mediaMate = somma / DIM;

    somma = 0;
    for(k = 0; k < DIM; k++) {
        somma = somma + alunni[k].informatica;
    }
    *mediaInfo = somma / DIM;
}

int main() {
    Studente alunni[DIM];
    int k;
    float mediaIta = 0; //dichiarazione attributi
    float mediaMate = 0;
    float mediaInfo = 0;

    chiediInformazioni(alunni);
    printf("\n");

    media(alunni, &mediaInfo, &mediaIta, &mediaMate); //chiamata funzione

    if(mediaIta > mediaMate && mediaIta > mediaInfo) { //stampa con condizione
        printf("La materia con la media piu' alta e' italiano. ");
    }

    if(mediaMate > mediaIta && mediaMate > mediaInfo) { //stampa con condizione
        printf("La materia con la media piu' alta e' matematica. ");
    }

    if(mediaInfo > mediaMate && mediaInfo > mediaIta) { //stampa con condizione
        printf("La materia con la media piu' alta e' informatica. ");
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
