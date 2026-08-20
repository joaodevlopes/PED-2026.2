#include <stdio.h>

// 123 % 10 = 3 
// 12 % 10 = 2
// = 1

int somaDigitos(int num){
    
    int somaDosDigitos = 0;

    while(num > 0){
        int resto = num % 10; 
        num  = num / 10; 
        somaDosDigitos += resto;
    }


    return somaDosDigitos ;
}

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("%d", somaDigitos(num));
}