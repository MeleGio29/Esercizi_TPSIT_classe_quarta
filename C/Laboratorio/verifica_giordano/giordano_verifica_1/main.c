#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 0, c = 0, k, i; //dichiarazione variabili, matrici e vettori
    float** mat;
    float *v;
    float max = 0;

    printf("Introduci un numero di righe: "); //richiesa in input di numero di righe della matrice
    scanf("%d", &r);

    printf("Introduci un numero di colonne: "); //richiesta in input di numero di colonne della matrice
    scanf("%d", &c);

    mat = (float**)malloc(r * sizeof(float*)); //inizio dichiarazione dinamica della matrice

    for(i = 0; i < r; i++) {
        mat[i] = (float*)malloc(c * sizeof(float)); // fine dichiarazione dinamica della matrice
    }

    v = (float*)malloc(r * sizeof(float)); //dichiarazione dinamica del vettore

    for(k = 0; k < r; k++) { //input elementi nella matrice
        for(int j = 0; j < c; j++) {
            printf("Introduci un elemento: ");
            scanf("%f", &mat[k][j]);
        }
    }

    for(k = 0; k < r; k++) { //stampa della matrice
        for(int j = 0; j < c; j++) {
            printf("%.1f ", mat[k][j]);
        }
        printf("\n");
    }

    printf("VETTORE NUMERI GRANDI: \n");

    for(k = 0; k < r; k++) { //ricerca dei numeri maggiori nelle righe
        for(i = 0; i < c; i++) {
            if(max < mat[k][i]) {
                max = mat[k][i];
            }
            v[k] = max;
        }
    }

    for(k = 0; k < r; k++){ //stampa del vettore
        printf("%.1f ", v[k]);
    }

    free(mat); //dealloco lo spazio in memoria per la matrice e per il vettore
    free(v);

    printf("\n");
    system("PAUSE");
    return 0;
}
