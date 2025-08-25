/*
  Buscando Elemento (N�vel Intermedi�rio a Dif�cil)
Agora, vamos para o terceiro exerc�cio, que exige um pouco mais de racioc�nio.

Objetivo: Crie uma fun��o chamada encontrarNumero que
recebe um ponteiro para o in�cio de um array de inteiros, o
tamanho do array e o n�mero a ser buscado. A fun��o deve retornar
um ponteiro para a primeira ocorr�ncia do n�mero no
array. Se o n�mero n�o for encontrado, a fun��o deve retornar NULL.
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
            return (vet+i); //Para o c�digo mediante ao primeiro numero igual
        }
        return NULL;
}
