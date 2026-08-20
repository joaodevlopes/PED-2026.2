#include <stdio.h>

int main() {
    int valor, contador = 0;
    double soma = 0.0;

    printf("Digite os números (digite -1 para encerrar):\n");

    while (1) {
        scanf("%d", &valor);

        if (valor == -1) {
            break;
        }

        soma += valor;
        contador++;
    }

    if (contador > 0) {
        printf("Números lidos: %d\n", contador);
        printf("Média: %.2lf\n", soma / contador);
    } else {
        printf("Nenhum número válido foi inserido.\n");
    }

    return 0;
}