/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//1.8. Troca de valores sem variável auxiliar

int main()
{
    int a, b;
    
    printf("Digite o numero inteiro A: ");
    scanf("%d", &a);
    
    printf("Digite o numero inteiro B: ");
    scanf("%d", &b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("\nValores trocados:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;
    
    
}