#include <stdio.h>

int maior(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    int n1, n2, n3, resultado;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Chamada da função passando os três valores lidos
    resultado = maior(n1, n2, n3);

    printf("O maior valor é: %d\n", resultado);

    return 0;
}