#include <stdio.h>

long fatorial(int n) {
    long fat = 1;
    int i;

    if (n < 0) {
        return -1; 
    }

    for (i = 1; i <= n; i++) {
        fat *= i;
    }

    return fat;
}

int main() {
    int num;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);

    long resultado = fatorial(num);

    if (resultado == -1) {
        printf("Não existe fatorial de número negativo.\n");
    } else {
        printf("%d! = %ld\n", num, resultado);
    }

    return 0;
}