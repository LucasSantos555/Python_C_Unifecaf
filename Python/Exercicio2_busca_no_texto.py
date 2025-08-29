# Busque no texto principal o valor digitado pelo usuário, 
# ao final retorne True se o valor for encontrado ou False 
# caso contrário. Deve ser analisado caractere por caractere. 
# Exemplo de entrada e saída:
#     Entrada do usuário: brasil
#     Texto: no brasil existem muitos lugares bonitos
#     Retorno experado: True

texto = "no brasil existem muitos lugares bonitos"
entrada = "brasil"
lupa =0
def AchaPalavra():
    tamanhoTexto = len(texto)
    tamanhoEntrada = len(entrada)
    existe = False
    for i in range(0, tamanhoTexto):
        lupa = texto[i:i+tamanhoEntrada]
        if(lupa == entrada):
            existe = True
    return existe
       
if(AchaPalavra() == True):
    print(f'A palavra {entrada} foi encontrada')
else:
    print(f'A palavra {entrada} não foi encontrada ou não existe no texto')
