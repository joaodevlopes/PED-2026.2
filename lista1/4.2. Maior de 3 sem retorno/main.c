#include <stdio.h>

void maior(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("O maior valor é: %d\n", max);
}

int main() {
    int n1, n2, n3;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    maior(n1, n2, n3);

    return 0;
}