#include <stdio.h>

int main()
{
    float numero1, numero2, resultado;
    char sinal;
    
    printf("Digite o numero1: ");
    scanf("%f", &numero1);
    
    printf("Digite a operação desejada(+, -, /, *): ");
    scanf(" %c", &sinal);
    
    printf("Digite o numero2: ");
    scanf("%f", &numero2);
    
    if(sinal == '/' && numero2 == 0){
        printf("Divisão por zero não permitida.");
    }else if(sinal == '+'){
        resultado = numero1 + numero2;
        printf("%.1f", resultado);
    }else if(sinal == '-'){
        resultado = numero1 - numero2;
        printf("%.2f", resultado);
    }else if(sinal == '*'){
        resultado = numero1 * numero2;
        printf("%.0f", resultado);
    }else if(sinal == '/'){
        resultado = numero1 / numero2;
        printf("%.0f", resultado);
    }

}