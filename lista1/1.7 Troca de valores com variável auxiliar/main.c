/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int a, b, inverterValores;
    
    printf("Digite um número para variavel a: ");
    scanf("%d", &a);
    
    printf("Digite outro número para variavel b:");
    scanf("%d", &b);
    
    inverterValores = a;
    a = b;
    b = inverterValores;
    
    printf("a = %d e b = %d", a, b );
    
    
}