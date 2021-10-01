#include <stdio.h>
#include <stdlib.h>
#define MAX 20
#define DIM 2

/*
definire una struttura per memorizzare i dati degli studenti di una classe e dei voti nelle varie discipline: italiano, matematica ed informatica.
Si Scriva una funzione in C che , a partire da un vettore di studenti fornito, come argomento, determini la disciplina che ha la media più alta
*/

typedef struct{
    char nome[MAX];
    char cognome[MAX];
    int matricola;
    int italiano;
    int matematica;
    int informatica;
}Studente;

int main()
{
    Studente alunni[DIM];
    int k;
    float mediaIta = 0;
    float mediaMate = 0;
    float mediaInfo = 0;
    float somma = 0;

    for(k = 0; k < DIM; k++){
        printf("Inserisci il nome dello studente: ");
        scanf("%s", &alunni[k].nome);

        printf("Inserisci il cognome dello studente: ");
        scanf("%s", &alunni[k].cognome);

        printf("Inserisci il numero della matricola: ");
        scanf("%d", &alunni[k].matricola);

        printf("Inserisci il voto di italiano: ");
        scanf("%s", &alunni[k].italiano);

        printf("Inserisci il voto di matematica: ");
        scanf("%s", &alunni[k].matematica);

        printf("Inserisci il voto di informatica: ");
        scanf("%d", &alunni[k].informatica);
    }

    printf("\n");

    for(k = 0; k < DIM; k++){
        somma = somma + alunni[k].italiano;
    }
    mediaIta = somma / DIM;

    somma = 0;
    for(k = 0; k < DIM; k++){
        somma = somma + alunni[k].matematica;
    }
    mediaMate = somma / DIM;

    somma = 0;
    for(k = 0; k < DIM; k++){
        somma = somma + alunni[k].informatica;
    }
    mediaInfo = somma / DIM;

    if(mediaIta > mediaMate && mediaIta > mediaInfo){
        printf("La materia con la media piu' alta e' italiano. ");
    }else{
        if(mediaMate > mediaIta && mediaMate > mediaInfo){
            printf("La materia con la media piu' alta e' matematica. ");
        }else{
            printf("La materia con la media piu' alta e' informatica. ");
        }
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
