#include <stdio.h>
#include <stdlib.h>

void mudar(int *x, int *y){
    int maior;
    if(*x < *y){
        maior  = *y; 
        *y = *x;
        *x = maior;
    }
}

int main()
{
    int x, y;

    x = 10;
    y = 2;

    mudar(&x, &y);
    printf("x = %d y= %d", x, y );

}

