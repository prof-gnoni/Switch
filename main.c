#include <stdio.h>

int main() {
    int scelta, errore;

        errore = 0;
        // Visualizzazione del menu
        printf("\nMenu:\n");
        printf("1. Somma due numeri\n");
        printf("2. Sottrai due numeri\n");
        printf("3. Moltiplica due numeri\n");
        printf("4. Esci\n");
        printf("\n");
        printf("Inserisci la tua scelta: ");
        scanf("%d", &scelta);

        // Dichiarazione delle variabili per i numeri
        int num1, num2, risultato;

        // Costrutto switch-case per la gestione delle opzioni
        switch(scelta) {
            case 1:
                printf("Inserisci il primo numero: ");
                scanf("%d", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &num2);
                risultato = num1 + num2;
                printf("Risultato della somma: %d\n", risultato);
                break;

            case 2:
                printf("Inserisci il primo numero: ");
                scanf("%d", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &num2);
                risultato = num1 - num2;
                printf("Risultato della sottrazione: %d\n", risultato);
                break;

            case 3:
                printf("Inserisci il primo numero: ");
                scanf("%d", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &num2);
                risultato = num1 * num2;
                printf("Risultato della moltiplicazione: %d\n", risultato);
                break;

            case 4:
                printf("Uscita dal programma.\n");
                return 0; // Terminare il programma

            default:
                printf("Scelta non valida, riprova.\n");
                errore = 1;
        }

    return 0;
}