#include <stdio.h>

int main()
{
    int n; 

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Digite um número maior do que 0");
    }
    for(int i = 1; i <= n; i++){
        printf("%d\n", i);
    }

}