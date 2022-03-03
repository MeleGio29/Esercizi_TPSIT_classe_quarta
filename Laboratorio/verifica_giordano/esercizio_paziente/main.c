#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[256] ;
    char cognome[256] ;
    int matricola;
    int pressione[2]; // minima e massima
    int temperature[3]; // temperature della mattina e pomeriggio e sera
    float parcella; // in euro quello che deve al dottore
} Paziente;

void inserisciDati(Paziente x){
    printf("Inserisci un nome: ");
    scanf("%s", x.nome);

    printf("Inserisci un cognome: ");
    scanf("%s", x.cognome);

    printf("Inserisci il numero della matricola: ");
    scanf("%d", &x.matricola);

    printf("Inserisci la pressione massima: ");
    scanf("%d", &x.pressione[0]);

    printf("Inserisci la pressione minima: ");
    scanf("%d", &x.pressione[1]);

    printf("Inserisci la temperatura al mattino: ");
    scanf("%d", &x.temperature[0]);

    printf("Inserisci la temperatura al pomeriggio: ");
    scanf("%d", &x.temperature[1]);

    printf("Inserisci la temperatura alla sera: ");
    scanf("%d", &x.temperature[2]);

    printf("Inserisci la parcella: ");
    scanf("%f", &x.parcella);
}

void stampa(Paziente x){
    printf("Pressione minima paziente: %d", x.pressione[1]);
    printf("Pressione massima paziente: %d", x.pressione[0]);
    printf("Temperatura mattutina paziente: %d", x.temperature[0]);
    printf("Temperatura pomeridiana paziente: %d", x.temperature[1]);
    printf("Temperatura serale paziente: %d", x.temperature[2]);

}

int main()
{
    Paziente Rossi;
    Paziente clinica[20];

    inserisciDati(Rossi);

    stampa(Rossi);

    printf("\n");
    system("PAUSE");
    return 0;
}
