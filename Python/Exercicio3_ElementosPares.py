# Retorne apenas os números pares de uma lista de números
# Exemplo:
#   Entrada: [9, 4, 7 , 2, 1]
#   Saída Experada: [4, 2]

numeros = [9,4,7,2,1]
numerosPares =[]
def novaList(i):
    numerosPares.append(i)
    return numerosPares
for i in numeros:
    if(i %2==0):
        novaList(i)
print(numerosPares)
     