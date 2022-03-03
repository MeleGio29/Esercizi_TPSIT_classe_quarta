#include <stdio.h>
#include <string.h>
#define DIM 6
#define MAXSIZE 50

int stack[50];
int top = -1;

int isempty() {

    if(top == -1)
        return 1;
    else
        return 0;
}

int isfull() {

    if(top == MAXSIZE)
        return 1;
    else
        return 0;
}

char peek() {
    return stack[top];
}

char pop(char data) {

    if(!isempty()) {
        data = stack[top];
        top = top - 1;
        return data;
    } else {
        printf("Impossibile prelevare dato, Stack vuoto.\n");
    }
}

void push(char data) {

    if(!isfull()) {
        top = top + 1;
        stack[top] = data;
    } else {
        printf("Impossibile inserire dati, Stack Pieno.\n");
    }
}

void ordinaPila(int vet[]) {
    int k = 0;

    for(k = 0; k < DIM; k++) {
        if(vet[k] % 2 == 0) {
            printf("%d ", vet[k]);
        }
    }
    for(k = 0; k < DIM; k++) {
        if(vet[k] % 2 != 0) {
            printf("%d ", vet[k]);
        }
    }
}

void main() {
    int vet[DIM];
    int k = 0, elemento;

    for(k=0; k<DIM; k++) {
        printf("inserisci l'elemento %d :",k);
        scanf("%d", &elemento);

        vet[k] = elemento;
    }

    ordinaPila(vet);
}
