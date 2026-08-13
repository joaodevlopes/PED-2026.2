/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/*
Escreva um programa para calcular quanto vai custar a viagem da Giselda. Peça para ela: 
Quantos quilômetros seu carro percorre por litro de combustível
Quantos quilômetros ela pretende viajar de carro.
Qual o valor do combustível no posto onde ela abastece
Quantas pessoas vão viajar com ela e dividir a conta
Com as informações acima, calcule quanto dinheiro cada pessoa terá que gastar.
Sua conta deve incluir o gasto total de combustíve dividido pela quantidade de pessoas.
*/

int main()
{
    float kmPorLitro, kmPretendeViajar, valorCombustivel, quantosLitrosVaiGastar, valorGastoCombustivel, valorParaCada ;
    int qntsPessoas;
    
    printf("Digite quantos km seu carro percorre por litro de combustível: ");
    scanf("%f", &kmPorLitro);
    
    printf("Digite quantos km você pretende viajar de carro: ");
    scanf("%f", &kmPretendeViajar);
    
    printf("Digite qual o valor do combustivel: ");
    scanf("%f", &valorCombustivel);
    
    printf("Quantas pessoas vão viajar com você para dividir a conta: ");
    scanf("%d", &qntsPessoas);
    
    quantosLitrosVaiGastar = kmPretendeViajar / kmPorLitro;
    valorGastoCombustivel = valorCombustivel * quantosLitrosVaiGastar;
    valorParaCada = valorGastoCombustivel / qntsPessoas;
    
    printf("O gasto total em combustivel vai ser de: R$%.2f: dividido para %d pessoas vai resultar em R$%.2f:", valorGastoCombustivel, qntsPessoas, valorParaCada);
    
    
    
    
    // Quantos km o carro percorre por litro(5)  - quantos km o carro pretende viajar (20)
    //valor do combustivel 
    
}
