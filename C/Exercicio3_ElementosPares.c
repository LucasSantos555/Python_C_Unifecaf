/*
# Retorne apenas os n�meros pares de uma lista de n�meros
# Exemplo:
#   Entrada: [9, 4, 7 , 2, 1]
#   Sa�da Experada: [4, 2]

*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main()
{
    int numeros[TAM] = {9,4,7,2,1};
    int* numerosPares;
    int qtdPares =0;
    int j=0;
    for(int i=0;i<TAM;i++)
    {
        if(numeros[i]%2==0)
            qtdPares ++;
    }

    numerosPares =(int*)malloc(sizeof(int)*qtdPares);
      for(int i=0;i<TAM;i++)
    {

        if(numeros[i]%2==0){

            *(numerosPares+j) = numeros[i];

            j++;
            }
    }
    printf("Vetor original: ");
    for(int i=0;i<TAM;i++)
        printf("%d ", numeros[i]);

    printf("\nVetor par: ");
    for(int y=0;y<qtdPares;y++)
        printf("%d ", *(numerosPares+y));

free(numerosPares);
    return 0;
}
