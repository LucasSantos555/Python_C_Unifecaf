# Leia todos os caracteres de uma string e retorne todos os 
# caracteres que não possuírem par. Por exemplo:
#     aabcc  => b
#     aabbccaafbbbaaacaa  => f
#     aabbcc => None

lista = ['z','a','b','b','c','c','a','a','f','b','b','b','a','a','a','c','a','a']
#lista = ['a','a','b','c','c']

for indice, i2 in enumerate(lista):
     igual = 0
     for indi, j2 in enumerate(lista):
          if(indice==indi):
                pass
          else:
               if(i2==j2):
                    
                    igual =1
                    
     if(igual==0):
               print(i2)
               