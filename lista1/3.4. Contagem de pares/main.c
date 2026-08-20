#include <stdio.h>

int main() {
    int N, i, contador = 0;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            contador++;
        }
    }

    printf("Quantidade de números pares entre 1 e %d: %d\n", N, contador);

    return 0;
}