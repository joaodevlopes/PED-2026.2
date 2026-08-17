/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
   int ano;
   
   printf("Digite algum ano: ");
   scanf("%d", &ano);
   
   if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("Esse ano é bissexto\n");
    } else {
        printf("Esse ano não é bissexto\n");
    }

    return 0;
   
}