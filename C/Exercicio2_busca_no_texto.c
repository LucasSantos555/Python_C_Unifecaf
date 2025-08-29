/*
# Busque no texto principal o valor digitado pelo usuário,
# ao final retorne True se o valor for encontrado ou False
# caso contrário. Deve ser analisado caractere por caractere.
# Exemplo de entrada e saída:
#     Entrada do usuário: brasil
#     Texto: no brasil existem muitos lugares bonitos
#     Retorno experado: True
*/


//Validação da ideia usando ponteiros

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char texto[41] = {"no brasil existem muitos lugares bonitos\0"};
    char palavra[7] = {"brasil\0"};
    char *inicioWork;
    char parte[7];
    int i=0;
    int tamanhoP = 6;
    parte[6] = '\0';
    while(1){


    if(texto[i] == 'b'){
        inicioWork = &texto[i];
        break;
    }
    i++;
    }

    for(int i=0;i<tamanhoP;i++)
   parte[i] = *(inicioWork+i);
for(int i=0;i<tamanhoP;i++)
    printf("%c",parte[i]);

   if(strcmp(parte,palavra) ==0){
    printf(" Iguais");
   }
    return 0;
}
