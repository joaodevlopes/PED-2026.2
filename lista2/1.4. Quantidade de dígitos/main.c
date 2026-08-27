#include <stdio.h>

// PILHA:

//contaDigitos(9) return 1 +
//contaDigitos(98) return 1 + contaDigitos(98) = 1 + (98) 
//contaDigitos(987) return 1 + contaDigitos(987) = 1 + (987) 
//contaDigitos(9876) return 1 + contaDigitos(9876) = 1 + (9876) 
//contaDigitos(98765) return 1 + contaDigitos(98765) = 1 + (98765)
//contaDigitos(987654) return 1 + contaDigitos(987654) = 1 + (987654) 


int contaDigitos(int n){
    if(n < 10) return 1;
    else return 1 + contaDigitos(n/10);
}

int main(){
    printf("%d", contaDigitos(987654));
    return 0;
}