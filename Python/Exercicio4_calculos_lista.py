# Dada uma lista de números, calcule:
#   - a soma de todos os números
#   - a média de todos os números
#   - O maior número
#   - o menor número 
numeros = [-2,-5,-3,-1]
soma =0
media =0
maiorNumero = numeros[0]
menorNumero =0
for indice, item in enumerate(numeros):
    if(maiorNumero<item):
        maiorNumero = item
    soma = soma+item
menorNumero = maiorNumero
for indice, item in enumerate(numeros):
    if(menorNumero>item):
        menorNumero = item
media = soma/len(numeros)
print(f'O menor número é { menorNumero}\nO maior número é {maiorNumero}\nA soma dos números é {soma} \nA media é {media}')
