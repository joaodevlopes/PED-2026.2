#include <stdio.h>
#include <stdlib.h>

int main(){

    char estatico[100];
    printf("Digite uma palavra: \n");
    scanf(" %s", estatico);

    int i = 0;
    while(estatico[i] != '\0' ){
        i++;
    }

    char *dinamico; 
    dinamico = (char *) malloc(i* sizeof(char));
    int j = 0;
    while(estatico[j] != '\0' ){
        *(dinamico + j) = estatico[j];
        j++;

    }
    printf("%s", dinamico);
}
