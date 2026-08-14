/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float temperaturaGraus;
    float temperaturaFahren;
    
    printf("Digite a temperatura em Graus: ");
    scanf("%f", &temperaturaGraus);
    
    temperaturaFahren = temperaturaGraus * 9/5 + 32;
    
    printf("A conversão do numero: %f para Fahrenheit é : %f ", temperaturaGraus, temperaturaFahren);
}
