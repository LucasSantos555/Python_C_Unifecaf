/*# Ordene a lista de forma crescente
# Exemplo:
#   Entrada: [5, 7, 2 , 1]
#   Saída Experada: [1, 2, 5, 7]
*/
#include <stdio.h>
#include <stdlib.h>
#define TAM 7
int main()
{
    int lista[TAM] = {5,7,2,1, 0,-1,-5};
    int aux;
    for(int j=0;j<TAM;j++){
        for(int i=0;i<TAM-1;i++){

    if(lista[i] > lista[i+1]){
                aux = lista[i];
                lista[i] = lista[i+1];
                lista[i+1] = aux;
            }
            }
        }
        for(int i=0;i<TAM;i++)
            {
                printf("%d ", lista[i]);
            }


    return 0;
}
