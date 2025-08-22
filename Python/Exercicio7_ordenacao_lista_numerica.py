# Ordene a lista de forma crescente
# Exemplo:
#   Entrada: [5, 7, 2 , 1]
#   Saída Experada: [1, 2, 5, 7]

numeros = [5, 7, 2 , 1]

n = len(numeros)
for i in range(n):
    for j in range(n -i -1):
        if(numeros[j]>numeros[j+1]):
            aux = numeros[j+1]
            numeros[j+1] = numeros[j]
            numeros[j] =aux
   
            

print(numeros)