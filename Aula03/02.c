#include <stdio.h>
#include <stdlib.h>
#include <iostream>
/*
Vetor de elementos em C.
*/
int main(int argc, char *argv[]){
    int numero_elementos;
    int* vetor_numeros;
    int x;

    printf(" Digite o número de elementos: \n");
    std::cin >> numero_elementos;

    vetor_numeros = (int *)malloc(numero_elementos * sizeof(int));

    for(x = 0; x < numero_elementos; x++) {
        printf("\nDigite o valor para a posicao %d do vetor: ", x+1);
        scanf("%d",&vetor_numeros[x]);
    }
    printf("\n ********************** \n");
    for(x = 0; x < numero_elementos; x++) {
        printf("%d\n",vetor_numeros[x]);
    }

    free(vetor_numeros);
    return 0;
}
