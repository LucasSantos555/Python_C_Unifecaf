# Retorne todos os números repetidos de uma lista de números
# Exemplo:
#   Entrada: [6, 1, 1, 7, 2 , 6, 1]
#   Saída Experada: [6, 1]
#Meu objetivo era não usar funções como set()
numeros = [6, 1, 1, 7, 2 , 6, 1]
numeros2 = []
for indice, item in enumerate(numeros):
    par =0
    for indice2, item2 in enumerate(numeros):
        if(indice == indice2):
            pass
        elif(item == item2):
            par = 1
    if(par==1):
        if(not numeros2):
            numeros2.append(item)
        else:
            igual =0
            for i in numeros2:
                if(item == i):
                    igual =1
            if(igual==0):
                numeros2.append(item)
print(numeros2)
           