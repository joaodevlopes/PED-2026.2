/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   
   int l1,l2,l3;
   
   printf("Digite o lado 1 do triângulo: ");
   scanf("%d", &l1);
   
   printf("Digite o lado 2 do triângulo: ");
   scanf("%d", &l2);
   
   printf("Digite o lado 3 do triângulo: ");
   scanf("%d", &l3);
   
   
   
   
   if ((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1)) {
        if (l1 == l2 && l2 == l3) {
            printf("Triângulo Equilátero\n");
        } else if (l1 == l2 || l2 == l3 || l1 == l3) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Os valores informados não formam um triângulo válido!\n");
    }

    return 0;
   
}