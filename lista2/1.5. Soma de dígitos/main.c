#include <stdio.h>

/*
 * PILHA DE EXECUÇÃO (somaDigitos):
 *
 * EMPILHAMENTO (Chamadas recursivas):
 * somaDigitos(987654) -> return (4 + somaDigitos(98765))
 * somaDigitos(98765)  -> return (5 + somaDigitos(9876))
 * somaDigitos(9876)   -> return (6 + somaDigitos(987))
 * somaDigitos(987)    -> return (7 + somaDigitos(98))
 * somaDigitos(98)     -> return (8 + somaDigitos(9))
 * somaDigitos(9)      -> return 9  [Caso base: n < 10]
 *
 * DESEMPILHAMENTO (Retorno dos valores):
 * somaDigitos(9)      -> 9
 * somaDigitos(98)     -> 8 + 9  = 17
 * somaDigitos(987)    -> 7 + 17 = 24
 * somaDigitos(9876)   -> 6 + 24 = 30
 * somaDigitos(98765)  -> 5 + 30 = 35
 * somaDigitos(987654) -> 4 + 35 = 39
 */

int somaDigitos(int n) {
    if (n < 10) {
        return n;
    }
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int numero = 987654;
    printf("Resultado: %d\n", somaDigitos(numero));
    return 0;
}