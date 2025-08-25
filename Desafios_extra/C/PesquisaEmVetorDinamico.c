/*
  Buscando Elemento

Objetivo: Crie uma função chamada encontrarNumero que
recebe um ponteiro para o início de um array de inteiros, o
tamanho do array e o número a ser buscado. A função deve retornar
um ponteiro para a primeira ocorrência do número no
array. Se o número não for encontrado, a função deve retornar NULL.
*/

#include <stdio.h>
#include <stdlib.h>


void ExibeVetor(int *vet, int tamanho);
int* EncontrarNumero(int *vet, int tamanho, int num);
int main(){
int *vet = NULL;
int pesNum, tamanho = 4;
int *retorno = NULL;

vet = (int*)malloc(sizeof(int)*tamanho);
for(int i=0;i<tamanho;i++)
{
    printf("Digite um valor para a posicao[%d]: ", i);
    scanf("%d", &*(vet+i));

}
ExibeVetor(vet, tamanho);
printf("Digite um numero a ser pesquisado no vetor ");
scanf("%d", &pesNum);

retorno = EncontrarNumero(vet, tamanho, pesNum);
if(retorno != NULL)
{
    printf("Numero %d encontrado", *retorno);
}else{
printf("Numero inexistente ou invalido");
}

free(vet);

return 0;

}
//================================================================
void ExibeVetor(int *vet, int tamanho){
    for(int i=0;i<tamanho;i++){
        printf("%d ", *(vet+i));
    }
printf("\n");
}

int* EncontrarNumero(int *vet, int tamanho, int num)
{
    for(int i=0;i<tamanho; i++){
        if(*(vet+i) == num)
            return (vet+i); //Para o código mediante ao primeiro numero igual
        }
        return NULL;
}
