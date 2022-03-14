#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LUNG 20
#define DIM 10

int main() {
    char* stringa;
    bool ok = false;
    int k = 0;

    stringa = (char*)malloc(LUNG * sizeof(char)); // dichiarazione stringa in allocazione dinamica

    printf("Inserisci una parola: "); //richiesta di input
    gets(stringa);

    while(k < DIM && ok == false) { //ciclo while per vedere se è presente una A
        if(stringa[k] == 'A') {
            ok = true;
        }
        k++;
    }

    if(ok == true){ //condizione finale con stampa
        printf("La stringa contiene una A tra i primi 10 caratteri");
    }else{
        printf("La stringa non contiene una A tra i primi 10 caratteri");
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
