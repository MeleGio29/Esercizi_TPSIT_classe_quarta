#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DIM 6
#define MAXSIZE 50

typedef struct s_queue_node {
    int elemento;
    struct s_queue_node*next;
} Queue_node;

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

int is_empty(Queue_node*head);

void enqueue(Queue_node**head,Queue_node**tail,Queue_node*element);

Queue_node*dequeue(Queue_node**head,Queue_node**tail);

int is_empty(Queue_node*head) {
    if(head==NULL)
        return 1;
    else
        return 0;
}

void enqueue(Queue_node**head,Queue_node**tail,Queue_node*element) {
    if(is_empty(*head))
        *head=element;
    else
        (*tail)->next=element;

    *tail=element;
    element->next=NULL;
}

Queue_node*dequeue(Queue_node**head,Queue_node**tail) {
    Queue_node*ret=*head;

    if(is_empty(*head))
        return NULL;
    else
        *head=ret->next;

    if (*head==NULL)
        *tail=NULL;
    return ret;
}

int main() {
    int vet[DIM];
    Queue_node*head=NULL;
    Queue_node*tail=NULL;
    Queue_node*struct_return=NULL;
    Queue_node*element;
    bool condizione=true;
    int dato;
    int conta = 0;
    char risp = 's';

    while(risp == 's') {
        printf("Inserire elemento: ");
        scanf("%d",&dato);
        element=(Queue_node*)malloc(sizeof(Queue_node));
        element->elemento=dato;
        enqueue(&head,&tail,element);
        conta += 1;

        printf("Ne vuoi ancora? ");
        scanf("%s", &risp);
    }

    printf("Coda: ");
    while ((struct_return=dequeue(&head,&tail))!=NULL) {
        printf("%d ",struct_return->elemento);
        free(struct_return);
    }

    for(int k = 0; k < conta; k++){
        push(&head);
        dequeue(&head, &tail);
    }

    for(int k = 0; k < conta; k++){
        enqueue(&head, &tail, &element);
        pop(element);
    }

    printf("\n");
    printf("Coda Invertita: ");
    while ((struct_return=dequeue(&head,&tail))!=NULL) {
        printf("%d ",struct_return->elemento);
        free(struct_return);
    }

    printf("\n");
    system("PAUSE");
    return 0;
}
