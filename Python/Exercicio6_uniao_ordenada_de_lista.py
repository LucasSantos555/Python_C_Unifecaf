# Una duas aleatórias listas em uma só com ordenação decrescente de valores
# Exemplo:
#   Entrada: 
#       ListaA = [1, 9, 4 , 5, 7, 2, 1]
#       Listab = [3, 2, 7 , 8, 6]
#   Saída Experada: [9, 8, 7, 7, 6, 5, 4, 3, 2, 2, 1, 1]

ListaA = [1, 9, 4 , 5, 7, 2, 1]
Listab = [3, 2, 7 , 8, 6]
listaC =[]
for i in ListaA:
    listaC.append(i)
for i in Listab:
    listaC.append(i)

print(listaC)
for indice in range(len(listaC)):
    for indice in range (len(listaC)-1):
        if(listaC[indice]< listaC[indice+1]):
            aux = listaC[indice+1]
            listaC[indice+1] = listaC[indice]
            listaC[indice] =aux
print(listaC)