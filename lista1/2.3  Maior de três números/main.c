/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
   float numero1, numero2, numero3;

   printf("Digite o número 1 : ");
   scanf("%f", &numero1);
   
   printf("Digite o número 2 : ");
   scanf("%f", &numero2);
   
   printf("Digite o número 3 : ");
   scanf("%f", &numero3);
   
   if (numero1 >= numero2 && numero1 >= numero3) {
        printf("O maior número é: %.2f\n", numero1);
    } else if (numero2 >= numero3) {
        printf("O maior número é: %.2f\n", numero2);
    } else {
        printf("O maior número é: %.2f\n", numero3);
    }

    return 0;
   
}