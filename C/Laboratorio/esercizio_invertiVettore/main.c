#include <stdio.h>
#include <stdlib.h>
#define DIM 100

int chiediN(int *n){ //funzione richiesta dimensione
    do{
        printf("Inserisci una dimensione: ");
        scanf("%d", n);
    }while(*n < 0 || *n > 100);

    return *n;
}

void chiediNumeri(int *v, int n){ //funzione input numeri
    int k;

    for(k = 0; k < n; k ++){
        printf("Inserisci l'elemento numero %d: ", k + 1);
        scanf("%d", (v + k));
    }
}

void inverti(int *v, int n){ //funzione inverti vettore
    int k;
    int temp = 0;

    for(k = 0; k < (n / 2); k++){
        temp = *(v + k);
        *(v + k) = *(v + (n - k - 1));
        *(v + (n - k - 1)) = temp;
    }
}

void stampa(int *v, int n){ //funzione stampa
    int k;

    for(k = 0; k < n; k ++){
        printf("%d ", *(v + k));
    }
}

int main()
{
    int n = 0;
    int* v;

    chiediN(&n);

    v = (int*)malloc(n * sizeof(int)); //allocazione dinamica v

    chiediNumeri(v, n); //chiamata funzione

    inverti(v, n);

    stampa(v, n);

    printf("\n");
    system("PAUSE");
    return 0;
}
