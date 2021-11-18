#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LUNG 20
#define DIM 10

int main() {
    char* stringa;
    bool ok = false;
    int k = 0;

    stringa = (char*)malloc(LUNG * sizeof(char));

    printf("Inserisci una parola: ");
    gets(stringa);

    while(k < DIM && ok == false) {
        if(stringa[k] == 'A') {
            ok = true;
        }
        k++;
    }

    if(ok == true){
        printf("La stringa contiene una A tra i primi 10 caratteri");
    }else{
        printf("La stringa non contiene una A tra i primi 10 caratteri");
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
