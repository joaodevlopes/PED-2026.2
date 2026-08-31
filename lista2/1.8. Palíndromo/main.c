#include <stdio.h>
#include <string.h>

// PILHA:
//
// Exemplo 1: isPalindromo("arara", 0, 4)
// isPalindromo("arara", 0, 4)     palavra[0] == palavra[4] ('a' == 'a')     isPalindromo("arara", 1, 3);
// isPalindromo("arara", 1, 3)     palavra[1] == palavra[3] ('r' == 'r')     isPalindromo("arara", 2, 2);
// isPalindromo("arara", 2, 2)     inicio >= fim (2 >= 2)                   retorna 1 (Caso Base)
//
// Exemplo 2: isPalindromo("arada", 0, 4)
// isPalindromo("arada", 0, 4)     palavra[0] == palavra[4] ('a' == 'a')     isPalindromo("arada", 1, 3);
// isPalindromo("arada", 1, 3)     palavra[1] != palavra[3] ('r' != 'd')     retorna 0 (Caso Base)

int isPalindromo(char palavra[], int inicio, int fim) {
    // Caso base 1: os ponteiros se cruzaram ou se encontraram no meio
    if (inicio >= fim) {
        return 1;
    }

    // Caso base 2: os caracteres correspondentes são diferentes
    if (palavra[inicio] != palavra[fim]) {
        return 0;
    }

    // Passo recursivo: avança o início e recua o fim
    return isPalindromo(palavra, inicio + 1, fim - 1);
}

int main() {
    char p1[] = "osso";
    char p2[] = "arara";
    char p3[] = "arada";

    printf("%s: %d\n", p1, isPalindromo(p1, 0, strlen(p1) - 1));
    printf("%s: %d\n", p2, isPalindromo(p2, 0, strlen(p2) - 1));
    printf("%s: %d\n", p3, isPalindromo(p3, 0, strlen(p3) - 1));

    return 0;
}