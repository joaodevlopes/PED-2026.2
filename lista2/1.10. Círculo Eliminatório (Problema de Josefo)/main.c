#include <stdio.h>

// PILHA:
//
// EMPILHAMENTO (Chamadas recursivas):
// josephus(5, 2) -> retorna (josephus(4, 2) + 2) % 5
// josephus(4, 2) -> retorna (josephus(3, 2) + 2) % 4
// josephus(3, 2) -> retorna (josephus(2, 2) + 2) % 3
// josephus(2, 2) -> retorna (josephus(1, 2) + 2) % 2
// josephus(1, 2) -> retorna 0  [Caso base: n == 1]
//
// DESEMPILHAMENTO (Cálculo dos retornos):
// josephus(1, 2) = 0
// josephus(2, 2) = (0 + 2) % 2 = 0
// josephus(3, 2) = (0 + 2) % 3 = 2
// josephus(4, 2) = (2 + 2) % 4 = 0
// josephus(5, 2) = (0 + 2) % 5 = 2  (Resultado Final)

int josephus(int n, int k) {
    if (n == 1) {
        return 0; // Caso base: quando resta apenas 1 pessoa, o índice de sobrevivência é 0
    }
    
    // Relação de recorrência para índices de 0 a N-1
    return (josephus(n - 1, k) + k) % n;
}

int main() {
    printf("josephus(5, 2)  = %d\n", josephus(5, 2));   // Saída: 2
    printf("josephus(8, 2)  = %d\n", josephus(8, 2));   // Saída: 0
    printf("josephus(12, 3) = %d\n", josephus(12, 3));  // Saída: 9
    printf("josephus(9, 5)  = %d\n", josephus(9, 5));   // Saída: 7

    return 0;
}