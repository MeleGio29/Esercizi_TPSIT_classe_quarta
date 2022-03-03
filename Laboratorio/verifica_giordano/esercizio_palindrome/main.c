#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define LUNG_MAX 20

bool palindroma(char stringa[]){
    bool ok = true;
    int k = 0, dim = 0;

    dim = strlen(stringa);

    while(k < (dim / 2) && ok == true){
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

    stringa = (char*)malloc(LUNG_MAX * sizeof(char));

    printf("Inserisci una stringa: ");
    gets(stringa);

    if(palindroma(stringa) == true){
        printf("La stringa %s e' palindroma. ", stringa);
    }else{
        printf("La stringa %s non e' palindroma. ", stringa);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
