#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LUNG 20

int main() {
    char* s1;
    char* s2;
    int k = 0, j = 0;;

    s1 = (char*)malloc(LUNG * sizeof(char));
    s2 = (char*)malloc(LUNG * sizeof(char));

    printf("Inserisci la prima stringa: ");
    fflush(stdin);
    gets(s1);

    printf("Inserisci la seconda stringa: ");
    fflush(stdin);
    gets(s2);

    while(k < LUNG && *(s1+k) != '\0') {
        k++;
    }

    while(k < LUNG && *(s2+j) != '\0') {
        *(s1+k) = *(s2+j);
        k++;
        j++;
    }

    printf("%s", s1);

    printf("\n");
    system("PAUSE");
    return 0;
}
