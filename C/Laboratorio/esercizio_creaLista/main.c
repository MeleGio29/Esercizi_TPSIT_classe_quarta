#include <stdio.h>

struct elem{
    char *nome;
    struct elem *next;
};

struct elem **list2vet(struct elem *p) {
    int i, n = 0;
    struct elem *app, **v;
    app = p;

    while (app != NULL) {
        ++n; /* conta i record della lista */
        app = app->next;
    }

    if (n != 0) {
        v = (struct elem **) malloc(n*sizeof(struct elem*));
        for (i = 0; i < n; ++i) {
            v[i] = p;
            p = p->next;
        }
        return v;
    } else
        return NULL; /* lista vuota */
}

struct elem *crealista(int k) {
    /* crea una lista di k record */
    int i;
    struct elem *l, *app;
    char c[21];

    if (k == 0)
        return NULL;
    else {
        app = l = (struct elem *) malloc(sizeof(struct elem)); /* record generatore */
        for(i = 0; i < k; ++i) {
            l->next = (struct elem *)malloc(sizeof(struct elem));
            l = l->next;
            printf("Inserire un elemento: ");
            scanf("%s",c);
            l->nome = (char *) malloc(strlen(c)+1);
            strcpy(l->nome,c);
        }

        l->next = NULL;
        l = app->next;
        free(app);

        return l;
    }
}

int main(){
    struct elem *p1, **v;
    int i;

    p1 = crealista(3); /*crea una lista di 3 stringhe */
    v = list2vet(p1);

    for(i = 0; i < 2; ++i)
        printf("Nell' elemento %d di [v] e' presente: %s\n",i ,v[i]->nome);

    printf("\n");
    system("PAUSE");
    return 0;
}
