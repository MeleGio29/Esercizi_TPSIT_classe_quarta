#include <stdio.h>
#include <stdlib.h>
#define DIM 1000

void leggiFile(char nomeFile[], float v[], int nMax, int *n) {
    FILE *fp; //dichiarazione file
    int k;

    fp = fopen(nomeFile, "r"); //apertura file
    if(fp == NULL) { //condizione se esiste il file
        printf("Il file non esiste");
    } else {
        k = 0;
        while(k < nMax && (fscanf(fp, "%f", &v[k]) != EOF)) { //inizio del ciclo while
                if(k =! 0){ //condizione se si è alla prima riga
                    v[k] = k;
                }
            k++; //incremento del contatore di righe
        }
        *n = k; //assegnazione del numero di righe
    }
    fclose(fp); //chiusura del file
}

int main() {
    float *v; //dichiarazione del vettore e della dimensione del vettore
    int n = 0;
    int k;

    v = (float*)malloc(DIM * sizeof(float)); //dichiarazione dinamica del vettore

    leggiFile("verifica.dat", v, DIM, &n); //chiamata della funzione leggi file

    for(k = 0; k < n; k++) { //stampa del vettore
        printf("%.1f", v[k]);
    }

    free(v); //deallocazione del vettore

    printf("\n");
    system("PAUSE");
    return 0;
}
