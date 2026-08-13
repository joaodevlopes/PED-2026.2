/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/* 1.4. Área do círculo*/
#include <stdio.h>
#include <math.h>


int main()
{
    float raioDoCirculo;
    float area;
    
    printf("Escreva o raio do ciruclo: ");
    scanf("%f", & raioDoCirculo);
    
    area = M_PI * (raioDoCirculo*raioDoCirculo);
    
    printf("%f ",area);
    
}