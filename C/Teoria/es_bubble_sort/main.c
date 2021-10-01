#include <stdio.h>
#include <stdlib.h>

void ordinaVettore(int vett[], int n){
    int sup, i, a;

    for(sup = n - 1; sup > 0; sup--){

        for(k = 0; k < sup; k++){
            if(vett[k] > vett[k+1]){
                a = vett[k + 1];
                vett[k + 1] = vett[k];
                vett[k] = a;
            }
        }
    }
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
