#include <stdio.h>
#include <stdlib.h>
#define DIM 5

void leggiVettore(int vett[], int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("Inserisci un elemento: ");
        scanf("%d", vett + k);
    }
}

void ordinaVettore(int *vett, int n) {
    int sup, i, a;
    int k;

    for(sup = n - 1; sup > 0; sup--) {
        for(k = 0; k < sup; k++) {
            if(*(vett + k) > *(vett + k + 1)) {
                a = *(vett + k + 1);
                *(vett + k + 1) = *(vett + k);
                *(vett + k) = a;
            }
        }
    }
}

void stampaVettore(int vett[], int n){
    int k;

    for(k = 0; k < n; k++){
        printf("%d ", *(vett + k));
    }
}

int main() {
    int vett[DIM];

    leggiVettore(vett, DIM);

    ordinaVettore(vett, DIM);

    printf("Vettore ordinato: ");

    stampaVettore(vett, DIM);

    printf("\n");
    system("PAUSE");
    return 0;
}
