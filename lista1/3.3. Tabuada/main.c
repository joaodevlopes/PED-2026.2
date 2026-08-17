#include <stdio.h>

int main()
{
    int n, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for(int i = 1; i<= 10; i++){
        resultado = n * i;
        printf("%d * %d = %d\n", n, i, resultado);
    }

}