#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FALSE 0
#define TRUE 1

int *aloca(int n, int preenche) {
    int *v;
    if (preenche == TRUE) {
        v = (int *) calloc(n, sizeof(int));
    } else {
        v = (int *) malloc(n * sizeof(int)); 
    }
    return v;
}

void imprime(int *v, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", *(v + i)); 
    }
    printf("\n");
}

void preenche(int *v, int n, int valor, int is_aleatorio) {
    int i;
    for (i = 0; i < n; i++) {
        if (is_aleatorio == TRUE) {
            *(v + i) = rand() % 101; 
        } else {
            *(v + i) = valor;
        }
    }
}

int main() {
    srand((unsigned int) time(NULL)); 

    int *v1, *v2;
    int n = 5;

    v1 = aloca(n, FALSE);
    v2 = aloca(n, TRUE);

    printf("v1 (malloc, lixo de memoria):\n");
    imprime(v1, n);

    printf("v2 (calloc, zerado):\n");
    imprime(v2, n);

    preenche(v1, n, 0, TRUE);    
    preenche(v2, n, 100, FALSE);

    printf("\nv1 depois (valores aleatorios):\n");
    imprime(v1, n);

    printf("v2 depois (valor fixo 100):\n");
    imprime(v2, n);

    free(v1);
    free(v2);

    return 0;
}
