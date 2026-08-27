#include <stdio.h>

// PILHA:

//intervalorCrescente(5,10)     printf("%d", a); intervalorCrescente(a+1,b);
//intervalorCrescente(6,10)     printf("%d", a); intervalorCrescente(a+1,b);
//intervalorCrescente(7,10)     printf("%d", a); intervalorCrescente(a+1,b);
//intervalorCrescente(8,10)     printf("%d", a); intervalorCrescente(a+1,b);
//intervalorCrescente(9,10)     printf("%d", a); intervalorCrescente(a+1,b);
//intervalorCrescente(10,10)    printf("%d", a);

void intervalorCrescente(int a, int b){
    if(a == b){
        printf("%d", a);
    }else{
        printf("%d", a);
        intervalorCrescente(a+1,b);
    }
}

int main(){
   intervalorCrescente(5,10);
}