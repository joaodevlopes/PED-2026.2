/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
   int idade;
   
   printf("Digite sua idade: ");
   scanf("%d", &idade);
   
   if (idade < 0) {
        printf("Não existe idade negativa, digite um valor válido!\n");
    } else if (idade <= 11) {
        printf("Criança\n");
    } else if (idade <= 17) {
        printf("Adolescente\n");
    } else if (idade <= 59) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
   
}