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
    char texto[41] = {"no  existem muitos  lugares bonitos\0"};
    char palavra[7] = {"brasil\0"};
    char *inicioPalavra;
    int i=0, controleLoopExtermo=0;
    int tamanhoTexto =strlen(texto);
    int tamanhoP = strlen(palavra);
    char parteTexto[tamanhoP];
    parteTexto[tamanhoP] = '\0';
   while(controleLoopExtermo<=tamanhoTexto){

        while(texto[i] != "\0"){   //Garante que todo o texto seja percorrido até o caractere final


        if(texto[i] == palavra[0]){

        inicioPalavra = &texto[i];

        break;
            }
            i++;


        }

 for(int i=0;i<tamanhoP;i++)
   parteTexto[i] = *(inicioPalavra+i);



   if(strcmp(parteTexto,palavra) ==0){
    printf("A palavra %s existe no texto", palavra);
    break;
   }

controleLoopExtermo++;
   }//EndExterno
if(controleLoopExtermo >= tamanhoTexto)printf("Palavra inexistente");
    return 0;
}
