/*
# Retorne todos os n�meros repetidos de uma lista de n�meros
# Exemplo:
#   Entrada: [6, 1, 1, 7, 2 , 6, 1]
#   Sa�da Experada: [6, 1]

*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 7
int main()
{
    int numeros[TAM] = {6,1,1,7,2,6,1};
    int igual = 0;
    int igual2 =0;
    int valorR =0;
    int*numerosR = NULL;
    int numeroigual=0;
    for(int i=0;i<TAM; i++){
            igual = 0;
        for(int j=0;j<TAM;j++){
                if(i !=j){
                    if(numeros[i] == numeros[j]){//Verifica se o valor de numero[i] = numero[j]
                        igual = 1;
                        numeroigual = numeros[i]; //atribui o valor igual a vari�vel numeroigual

                        break;//sai do loop assim que achar a duplicata
                    }//end if
                }


        }//endforInterno

    if(igual == 1)
    {
        igual2 = 0;
        for(int t=0;t<valorR;t++){
            if(numerosR[t] == numeroigual){ //Verifica se a vari�vel numeroigual cont�m um valor j� existente no vetor din�mico

                    igual2 = 1;
                break; //Sai assim que achar o duplicata
            }
        }
        if(igual2 ==0){
        valorR++;
            int* temp = realloc(numerosR, sizeof(int)*valorR); //Realoca um novo espa�o
            if(temp != NULL){ //Verifica se a aloca��o foi bem sucedida
                numerosR = temp;
                numerosR[valorR - 1] = numeroigual; //Atribui o valor na posi��o valoR-1 -> se valorR = 1, o valor ser� alocado na posi��o 0 do vetor din�mico

            }

        }
    }
    }//EndforExterno
    //Exibe vetor din�mico
for(int i=0;i<valorR;i++){
    printf("%d ", numerosR[i]);
}
free(numerosR); //Libera mem�ria alocada

    return 0;
}
