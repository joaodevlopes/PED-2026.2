#include <stdio.h>

// PILHA:

//somaDosInteiros(1) return 1
//somaDosInteiros(2) return 2 + somaDosInteiros(1) = 2 + 1
//somaDosInteiros(3) return 3 + somaDosInteiros(2) = 3 + 3
//somaDosInteiros(4) return 4 + somaDosInteiros(3) = 6 + 4
//somaDosInteiros(5) return 5 + somaDosInteiros(4) = 10 + 5
//somaDosInteiros(6) return 6 + somaDosInteiros(5) = 15 + 6
//somaDosInteiros(7) return 7 + somaDosInteiros(6) = 21 + 7


int somaDosInteiros(int n){
    if(n==1) return 1;
    else return somaDosInteiros(n-1) + n;
}

int main(){
    
    printf("%d",somaDosInteiros(7));
    return 0;
}