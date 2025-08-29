/*
# Retorne todos os números exitentes em ambas as listas
# Exemplo:
#   Entrada:
#       ListaA = [4, 9, 3 , 7, 8]
#       Listab = [9, 5, 4 , 2, 1]
#   Saída Experada: [9, 4]
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int ListaA[5] = {4, 9, 3 , 7, 8};
     int Listab[5] = {9, 5, 4 , 2, 1};

    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){
            if(ListaA[i] == Listab[j]){
              printf("%d ", ListaA[i]);
              break;
            }
        }

    }
    return 0;
}
