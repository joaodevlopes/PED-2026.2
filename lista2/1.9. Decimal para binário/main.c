#include <stdio.h>

// PILHA:
// dec2bin(13)     dec2bin(13 / 2) -> dec2bin(6)     [Aguarda desempilhar]     printf("%d", 13 % 2); // Imprime 1
// dec2bin(6)      dec2bin(6 / 2)  -> dec2bin(3)     [Aguarda desempilhar]     printf("%d", 6 % 2);  // Imprime 0
// dec2bin(3)      dec2bin(3 / 2)  -> dec2bin(1)     [Aguarda desempilhar]     printf("%d", 3 % 2);  // Imprime 1
// dec2bin(1)      dec2bin(1 / 2)  -> dec2bin(0)     [Aguarda desempilhar]     printf("%d", 1 % 2);  // Imprime 1
// dec2bin(0)      retorna (Caso Base)
//
// ORDEM DE IMPRESSÃO NO DESEMPILHAMENTO: 1 -> 1 -> 0 -> 1 (Resultado: 1101)

void dec2bin(int n) {
    if (n == 0) {
        return;
    }

    dec2bin(n / 2);

    printf("%d", n % 2);
}

int main() {
    int n = 13;

    if (n == 0) {
        printf("0");
    } else {
        dec2bin(n);
    }
    printf("\n");

    return 0;
}