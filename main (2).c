/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float media;
    
    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &nota1);
    
    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &nota2);
    
    printf("Digite a nota 3 do aluno: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) /3;
    
    printf("A média das notas do aluno é: %f ", media);
}
