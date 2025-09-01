/*
# Busque no texto principal o valor digitado pelo usu�rio,
# ao final retorne True se o valor for encontrado ou False
# caso contr�rio. Deve ser analisado caractere por caractere.
# Exemplo de entrada e sa�da:
#     Entrada do usu�rio: brasil
#     Texto: no brasil existem muitos lugares bonitos
#     Retorno experado: True
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  char texto[41] = {"no existem bonitos brasil muitos lugares \0"};
   //char texto[] = {"A linguagem C � poderosa, mas exige disciplina e atencao aos detalhes"};
   int tamanhoTexto = strlen(texto);
   //char palavra[7] = {"brasil\0"};
    char* palavra = (char*)malloc(sizeof(char)*20);    //O vetor come�a com o tamanho inicial de 20 caracteres
    if(palavra == NULL)return 1;
    printf("Digite a palavra que busca: ");
    fgets(palavra,20,stdin);
    palavra[strcspn(palavra, "\n")] = 0;
   int tamanhoPalavra = strlen(palavra); //guarda o tamanho da palavra
   char* temp = (char*)realloc(palavra, sizeof(char)*tamanhoPalavra+1);   //Realocando com o tamanho correto da palavra digitada, garantindo o uso eficiente de memoria
    if(temp == NULL)return 1;
   palavra = temp;
   char* inicioPalavra;
   char parteTexto[tamanhoPalavra];
   parteTexto[tamanhoPalavra] = '\0'; //Atribui o caractere de finaliza��o de string, informando ao compilador que isto � uma string
    int indiceCaractere =0;
    int existe = 0 ;     //Considere esta vari�vel como booleano: 1- verdadeiro, 0 - falso
    int incremento = 0;
    int i=0;



    while(!existe){
   for(i=incremento;i<tamanhoTexto;i++){
          if(texto[i] == palavra[0]){ //se texto na posi��o i for igual a palavra na posi��o 0, ou seja 'b'
                inicioPalavra = &texto[i];  //Passa o endere�o do caractere 'b'
                indiceCaractere = i;
                break;  //sai do loop imediatamente
            }
   }

    for(int i=0;i<tamanhoPalavra;i++)
   parteTexto[i] = *(inicioPalavra+i);  //Preenche  o vetor com a parte do texto

    if(strcmp(parteTexto,palavra) ==0){ //Verifica se a parteTexto � igual a palavra
    printf("A palavra '%s' existe no texto", palavra);
    existe = 1; //Se existe retorna 1 - verdad
    break;
   }else{
   incremento++;         //Incremente 1, garantindo que o loop for n�o recomece do zero mas sim de 1 a mais onde parou
   }
    if(i==tamanhoTexto)break;

   }
   if(existe == 0)printf("Palavra inexistente");
    return 0;
}
