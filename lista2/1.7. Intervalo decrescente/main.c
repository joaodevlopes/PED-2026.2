#include <stdio.h>

// PILHA:
// intervaloDecrescente(5, 10)     printf("%d", b); intervaloDecrescente(a, b - 1);
// intervaloDecrescente(5, 9)      printf("%d", b); intervaloDecrescente(a, b - 1);
// intervaloDecrescente(5, 8)      printf("%d", b); intervaloDecrescente(a, b - 1);
// intervaloDecrescente(5, 7)      printf("%d", b); intervaloDecrescente(a, b - 1);
// intervaloDecrescente(5, 6)      printf("%d", b); intervaloDecrescente(a, b - 1);
// intervaloDecrescente(5, 5)      printf("%d", b);

void intervaloDecrescente(int a, int b) {
    if (a > b) {
        return;
    }

    printf("%d", b);
    
    if (a < b) {
        printf(",");
        intervaloDecrescente(a, b - 1);
    }
}

int main() {
    intervaloDecrescente(5, 10);
    printf("\n");
    return 0;
}