#include <stdio.h>

/*
// PILHA:
soma(7) -> 7 + soma(6) = 7 + 21 = 28
soma(6) -> 6 + soma(5) = 6 + 15 = 21     
soma(5) -> 5 + soma(4) = 5 + 10 = 15
soma(4) -> 4 + soma(3) = 4 + 6 = 10
soma(3) -> 3 + soma(2) = 3 + 3 = 6
soma(2) -> 2 + soma(1) = 2 + 1 = 3
soma(1) -> 1 + soma(0) = 1 
soma(0) -> return 0
*/  

int soma(int n){
    if( n < 1) return 0;
    else return n + soma(n - 1);
}

int main(){
    printf("%d", soma(7));
}

 
