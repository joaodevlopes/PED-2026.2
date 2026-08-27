#include <stdio.h>

// PILHA:

//nesimoValor(1) return 1
//nesimoValor(2) return 3 * nesimoValor(1) = 3 * 1 
//nesimoValor(3) return 3 * nesimoValor(2) = 3 * 3 
//nesimoValor(4) return 3 * nesimoValor(3 ) = 3 * 9 
//nesimoValor(5) return 3 * nesimoValor(4) = 3 * 27
//nesimoValor(6) return 3 * nesimoValor(5) = 3 * 81 = 243 


int nesimoValor(long long int n){
    if(n == 1) return 1;
    else return 3 * nesimoValor(n - 1);
}

int main(){
    printf("%lld", nesimoValor(6) );
    return 0;
}