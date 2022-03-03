#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNG 50
#define DIM 30

typedef struct {
    int numero;
    char nome[LUNG];
    char categoria[DIM];
    int anno;
    char stato[DIM];
} Libreria;

void leggi(Libreria v[], int n, char nomeFile[]) {
    FILE *fp;
    int conta = 0, i = 0;
    char line[100];
    char* pezzo;

    fp = fopen(nomeFile, "r");      //apertura del file in lettura

    while(fgets(line, 100, fp)) {   //ciclo fino a quando c'è qualcosa da prendere in input
        pezzo = strtok(line, ",");
        (v + i)->numero = atoi(pezzo);       //utilizzo atoi perché l'anno è un intero

        pezzo = strtok(NULL, ",");      //NULL tutte le volte tranne la prima in cui inserisco line
        strcpy((v + i)->nome, pezzo);

        pezzo = strtok(NULL, ",");
        strcpy((v + i)->categoria, pezzo);

        pezzo = strtok(NULL, ",");
        (v + i)->anno = atoi(pezzo);        //utilizzo atoi perché l'anno è un intero

        pezzo = strtok(NULL, ",");
        strcpy((v +i)->stato, pezzo);
        i++;                                //incremento contatore
    }
    fclose(fp);
}

void stampaVettore(Libreria v[], int n) {
    int k;
    for(k = 0; k < n; k++) {
        printf("%d %s  %s %d %s", (v + k)->numero, (v + k)->nome, (v + k)->categoria, (v + k)->anno, (v + k)->stato);
    }
}

int contaRighe(Libreria v[], char nomeFile[]) {
    FILE *fp;
    int conta = 0;
    char line[100];

    fp = fopen(nomeFile, "r");

    while(fgets(line, 100, fp)) {
        conta++;
    }
    fclose(fp);
    return conta;
}

int main() {
    int n;
    Libreria *film;                 //dichiarazione del vettore di strutture

    n = contaRighe(film, "listafilm.csv");              //chiamo la funzione conta righe per sapere la dimensione per poter utilizzare la malloc

    film = (Libreria*)malloc(n * sizeof(Libreria));     //allocazione dinamnica del vettore film nella memnoria

    leggi(film, DIM, "listafilm.csv");  //prende in input i dati tramite file
    stampaVettore(film, DIM);           //stampa in output tramite terminale

    free(film);                         //libera l'area di memoria occupata dal vettore


    printf("\n");
    system("PAUSE");
    return 0;
}

