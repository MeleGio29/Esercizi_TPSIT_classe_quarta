#include <stdio.h>
#include <string.h>
#define MAXSIZE 5

int stack[50];
int top = -1;

// Controllo se stack vuoto
int isempty() {

    if(top == -1)
        return 1;
    else
        return 0;
}

// Controllo se stack pieno
int isfull() {
    if(top == MAXSIZE)
        return 1;
    else
        return 0;
}

// Prelievo utimo elemento inserito
char peek() {
    return stack[top];
}

// Prelievo dati dallo stack
char pop(char data) {

    if(!isempty()) {
        data = stack[top];
        top = top - 1;
        return data;
    } else {
        printf("Impossibile prelevare dato, Stack vuoto.\n");
    }
}

// Inserimento dati nello stack
void push(char data) {

    if(!isfull()) {
        top = top + 1;
        stack[top] = data;
    } else {
        printf("Impossibile inserire dati, Stack Pieno.\n");
    }
}

void main() {
    int c[MAXSIZE];
    int elem = 0;

    for(int k = 0; k < MAXSIZE; k++) {
        printf("Inserisci un elemento: ");
        scanf("%d", &elem);
        push(elem);
    }

    for(int k = MAXSIZE; k > 0; k--) {
        printf("%d ", c[k]);
    }

    printf("\n");
    system("PAUSE");
    return;
}

