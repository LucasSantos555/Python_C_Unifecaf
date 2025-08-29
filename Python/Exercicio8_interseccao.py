# Retorne todos os números exitentes em ambas as listas
# Exemplo:
#   Entrada: 
#       ListaA = [4, 9, 3 , 7, 8]
#       Listab = [9, 5, 4 , 2, 1]
#   Saída Experada: [9, 4]
ListaA = [4, 9, 3 , 7, 8]
Listab = [9, 5, 4 , 2, 1]
listaC =[]

for indice, i in enumerate(ListaA):
    for indice2, j, in enumerate(Listab):
        if(i == j):
            if( i not in listaC):
                listaC.append(i)
print(listaC)