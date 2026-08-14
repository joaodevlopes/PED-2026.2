/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

/*1.5. Conversão de segundos*/
#include <stdio.h>

int main()
{
    int segundos, minutos, horas;
    
    printf("Informe um número inteiro que vai representar o valor em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;
    
    minutos = segundos / 60;
    segundos = segundos % 60;
    
    
    
    printf(" %.0d:%.0d:%.0d",  horas, minutos, segundos);
 


    
    
}
