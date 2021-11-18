#include <stdio.h>
#include <stdlib.h>

int main() {
    int r = 0, c = 0, k;
    int** mat;

    printf("Inserisci un numero di righe: ");
    scanf("%d", &r);

    printf("Inserisci un numero di colonne: ");
    scanf("%d", &c);

    mat = (int**)malloc(r * sizeof(int*));

    for(int i = 0; i < r; i++) {
        mat[i] = (int*)malloc(c * sizeof(int));
    }

    for(k = 0; k < r; k++) {
        for(int j = 0; j < c; j++) {
            printf("Inserisci un elemento: ");
            scanf("%d", &mat[k][j]);
        }
    }

    for(k = 0; k < r; k++) {
        for(int j = 0; j < c; j++) {
            printf("%d", mat[k][j]);
        }
        printf("\n");
    }

    free(mat);

    printf("\n");
    system("PAUSE");
    return 0;
}
