#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    float* v, somma = 0;
    int numero = 0, k, i, n;

    printf("Inserisci una dimensione per il vettore: ");
    scanf("%d", &numero);

    v = (float*)malloc(numero * sizeof(float));

    for(k = 0; k < numero; k++) {
        printf("Inserisci l'elemento numero %d: ", k + 1);
        scanf("%f", v + k);
    }

    for(k = 0; k < numero; k++) {
            n = 0;
        for(i = 0; i < numero; i++) {
            if(*(v + k) == *(v + i)) {
                n = n + 1;
            }
        }
        if(n < 2) {
            somma = somma + *(v + k);
        }
    }

    printf("La somma dei numeri disgiunti e': %.1f", somma);

    free(v);

    printf("\n");
    system("PAUSE");
    return 0;
}
