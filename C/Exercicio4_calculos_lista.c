/*
# Dada uma lista de números, calcule:
#   - a soma de todos os números
#   - a média de todos os números
#   - O maior número
#   - o menor número
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 4
int main()
{
    int vet[TAM]        = {-2,-3,100,-5};
    int MaiorElmento  = vet[0];
    int MenorElemento = vet[0];
    int soma          =  0;
    float media       =  0.0;

    for(int i=0; i<TAM; i++)
    {
        soma = soma + vet[i];
        if(MenorElemento>vet[i])
            MenorElemento = vet[i];


    }//EndFor_MenorElemento

    for(int i=0;i<TAM;i++)
    {
        if(MaiorElmento<vet[i])
            MaiorElmento = vet[i];
    }
    media = (float)soma/TAM;
    printf("Menor elemento: %d\nMaior elemento: %d\nSoma: %d\nMedia: %.2f ",
                MenorElemento,MaiorElmento, soma, media);
    return 0;
}
