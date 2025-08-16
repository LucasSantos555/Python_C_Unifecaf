#include <stdio.h>
#include <stdlib.h>

int main()
{
  char vet[5] = {'b', 'b', 'b', 'f', 'f'};
  int igual=0;

 for(int i=0;i<5;i++)
 {
     igual=0;
     for(int j=0;j<5;j++){
            if(i==j){

            }else{
                if(vet[i] == vet[j])
                    igual =1;
            }

     }
     if(igual==0) printf("%c", vet[i]);
 }


    return 0;
}
