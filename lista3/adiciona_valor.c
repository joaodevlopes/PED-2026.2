#include <stdio.h>
#include <stdlib.h>

int *adiciona_valor(int *v, int tamanho, int valor, int pos) {
    if (pos >= tamanho) {
        v = (int *) realloc(v, (pos + 1) * sizeof(int));
        if (v == NULL) {
            printf("Erro ao realocar memoria\n");
            exit(1);
        }
    }

    v[pos] = valor;
    return v;
}

int main() {
    int tamanho = 5;
    int *v = (int *) malloc(tamanho * sizeof(int));
    int i;

    for (i = 0; i < tamanho; i++) {
        v[i] = i;
    }

    printf("Vetor antes:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    
    v = adiciona_valor(v, tamanho, 99, 7);
    tamanho = 8;

    printf("Vetor depois:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);
    return 0;
}
