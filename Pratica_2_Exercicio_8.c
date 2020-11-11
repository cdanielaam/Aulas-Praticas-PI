#include <stdio.h>
    int main () {
        int numero,maximo,minimo;
        scanf("%d\n", &numero);
        /*maximo = numero;
        minimo = numero;*/

        while (numero != 0) {
            scanf("%d\n", &numero);
            if (numero >= maximo && numero != 0) {
                maximo = numero;
            }
            if (numero <= minimo && numero != 0) {
                minimo = numero;
            }
        }
            if (minimo != maximo)
            printf("Maior = %d\tMenor =%d\n", maximo, minimo);
            else
                printf("Maior = Menor = %d", maximo);

        return 0;
    }
