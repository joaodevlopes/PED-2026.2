#include <stdio.h>
int main()
{
    int n; 
    double valor, soma = 0.0;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite o %d valor: ", i + 1);
        scanf("%lf", &valor);
        soma+= valor;
    }

    printf("Soma total: %.2lf\n", soma);

    return 0;

}