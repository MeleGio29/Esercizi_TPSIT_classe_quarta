#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNG 20

int main() {
    char* s1;
    char* s2;
    int k = 0, j = 0;;

    s1 = (char*)malloc(LUNG * sizeof(char)); //allocazione dinamica stringa 1
    s2 = (char*)malloc(LUNG * sizeof(char)); //allocazione dinamica stringa 2

    printf("Inserisci la prima stringa: "); //input stringa 1
    fflush(stdin);
    gets(s1);

    printf("Inserisci la seconda stringa: "); //input stringa 2
    fflush(stdin);
    gets(s2);

    while(k < LUNG && *(s1+k) != '\0') { //cicli while per la concatenazione delle stringhe
        k++;
    }

    while(k < LUNG && *(s2+j) != '\0') {
        *(s1+k) = *(s2+j);
        k++;
        j++;
    }

    printf("%s", s1); //stampa finale

    printf("\n");
    system("PAUSE");
    return 0;
}
