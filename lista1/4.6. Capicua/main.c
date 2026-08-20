#include <stdio.h>

#define TRUE 1
#define FALSE 0

int isCapicua(int numero){
    
    int inverso, resto;

    int numeroOriginal = numero;

    while(numero > 0){
        resto = numero % 10; 
        inverso = inverso * 10 + resto;
        numero /= 10;

    }
    if(numeroOriginal == inverso){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    if(isCapicua(num)){
        printf("SIM É CAPICUA!!!!");
    }else{
        printf("NÃO É CAPICUA!!!");
    }
}