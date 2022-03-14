#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node* nextptr;
}Stnode;

void createNodeList(int n);
void LastNodeDeletetion();
void displayList();

void createNodeList(n){
    struct node *fnNode, *tmp;
    int num, i;

    Stnode = (struct node*)malloc (sizeof (struct node));
    if(Stnode == NULL){
        printf("La memoria non può essere allocata");
    }else{
        printf("Inserisci il nodo 1: ");
        scanf("%d", &num);
        Stnode->num = num;
        Stnode->nextptr = NULL;
        tmp = Stnode;

        for(i = 2; i < n; i++){
            fnNode = (struct node*)malloc(sizeof(struct node));
            if(fnNode == NULL){
                    printf("La memoria non può essere allocata");
            }else{
                printf("Memoria per nodo %d:", i);
                scanf("%d", &num);
                fnNode->nextptr = num;
                fnNode->nextptr = NULL;
                tmp->nextptr = fnNode;
                tmp = tmp->nextptr;
            }
        }
    }
}

void LastNodeDeletetion(){
    struct node*toDelLast, *preNode;

    if(Stnode == NULL){
        printf("Non ci sono elementi nella lista");
    }else{
        toDelLast = Stnode;
        preNode = Stnode;
        while(toDelLast->nextptr != NULL){ù
            preNode = toDelLast;
            toDelLast = toDelLast->nextptr;
        }
        if(toDelLast == Stnode){
            Stnode = NULL;
        }else{
            preNode->nextptr = NULL;
        }
        free(toDelLast);
    }
}

void displayList(){
    struct node *tmp;
    if(Stnode == NULL){
        printf("Nessun record nella lista vuota");
    }else{
        tmp = Stnode;
        while(tmp != NULL){
            printf("Record = %d\n", tmp->num);
            tmp = tmp->nextptr;
        }
    }
}

int main()
{
    int n, num, pos;

    printf("Inserisci il numero di nodi: ");
    scanf("%d", &n);

    createNodeList(n);
    printf("I numeri della lista inseriti sono: \n");
    displayList();

    printf("\n");
    system("PAUSE");
    return 0;
}
