#include <stdio.h>
#include <stdlib.h>

int main() {
    float** matrice;
    int r = 0, c = 0, x = 0, y = 0;
    float numero = 0;
    char risp;

    printf("Inserisci le righe: ");
    scanf("%d", &r);

    printf("Inserisci le colonne: ");
    scanf("%d", &c);


    matrice = (float**)calloc(r, sizeof(float*));

    for(int i = 0; i < r; i++) {
        matrice[i] = (float*)calloc(c, sizeof(float));
    }

    for(int k = 0; k < r; k++) {
        for(int j = 0; j < c; j++) {
            printf("%.1f ", matrice[k][j]);
        }
        printf("\n");
    }

    do {
        printf("Inserisci un numero: ");
        scanf("%f", &numero);

        printf("Introduci le coordinate di dove vuoi metterlo: ");
        printf("x: ");
        scanf("%d", &x);
        printf("y: ");
        scanf("%d", &y);

        matrice[x][y] = numero;

        for(int k = 0; k < r; k++) {
            for(int j = 0; j < c; j++) {
                printf("%.1f ", matrice[k][j]);
            }
            printf("\n");
        }

        printf("Vuoi ancora aggiungere numeri? \n");
        fflush(stdin);
        scanf("%c", &risp);
        printf("\n");

    } while(risp != 'n');

    printf("\n");
    system("PAUSE");
    return 0;
}
