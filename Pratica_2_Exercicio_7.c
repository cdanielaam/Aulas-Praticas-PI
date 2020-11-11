#include <stdio.h>
    int main () {
        int numero,maximo;
        scanf("%d", &numero);
        maximo = numero;

        while (numero != 0) {
            scanf("%d", &numero);
            if (numero > maximo && numero != 0){
            maximo = numero;
            }
        }
            printf("%d\n", maximo);
        
        return 0;
    }
