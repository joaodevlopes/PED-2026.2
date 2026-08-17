/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
   float numero;
   
   printf("Digite um número: ");
   scanf("%f", &numero);
   
   if(numero > 0){
       printf("O número %.2f é positivo", numero);
       
   }else if(numero < 0){
       printf("O número %.2f é negativo", numero);
   }else{
       printf("O número %.2f é igual a 0", numero);
   }
    
}