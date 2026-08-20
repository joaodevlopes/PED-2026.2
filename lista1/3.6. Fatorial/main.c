#include <stdio.h>

int main() {
    int N, i;
    double fatorial = 1.0;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Número inválido.\n");
    } else {
        for (i = 1; i <= N; i++) {
            fatorial *= i;
        }
        printf("%d! = %.0lf\n", N, fatorial);
    }

    return 0;
}