/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
   int numero;
   
   printf("Digite um número inteiro: ");
   scanf("%d", &numero);
   
   if(numero % 2 == 0){
       printf("O número %d é par", numero);
   }else{
       printf("O número %d é ímpar", numero);
   }
   
   
    
}