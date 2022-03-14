#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define LUNG_MAX 20

bool palindroma(char stringa[]){ //funzione per scoprire se palindroma
    bool ok = true;
    int k = 0, dim = 0;

    dim = strlen(stringa); //assegna a dim la lunghezza della stringa

    while(k < (dim / 2) && ok == true){ //ciclo while per scoprire se la stringa è palindroma
        if(*(stringa + k) == *(stringa + dim - k - 1)){
            ok = true;
        }else{
            ok = false;
        }
        k++;
    }
    return ok;
}

int main()
{
    char* stringa;

    stringa = (char*)malloc(LUNG_MAX * sizeof(char)); //allocazione dinamica stringa

    printf("Inserisci una stringa: "); //input stringa
    gets(stringa);

    if(palindroma(stringa) == true){ //stampa con condizione se funziona True or False
        printf("La stringa %s e' palindroma. ", stringa);
    }else{
        printf("La stringa %s non e' palindroma. ", stringa);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
