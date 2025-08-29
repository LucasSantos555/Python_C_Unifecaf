# Busque no texto principal o valor digitado pelo usuário, 
# ao final retorne True se o valor for encontrado ou False 
# caso contrário. Deve ser analisado caractere por caractere. 
# Exemplo de entrada e saída:
#     Entrada do usuário: brasil
#     Texto: no brasil existem muitos lugares bonitos
#     Retorno experado: True

texto = "no brasil existem muitos lugares bonitos"
entrada = input("Digite a palavra a ser localizada: ").lower()


def AchaPalavra():
    tamanhoTexto = len(texto)
    tamanhoEntrada = len(entrada)
   # existe = False
    for i in range(0, tamanhoTexto):
        lupa = texto[i:i+tamanhoEntrada]
        if(lupa == entrada):
            return True
    return False
       
if(AchaPalavra() == True):
    print(f'A palavra {entrada} foi encontrada')
else:
    print(f'A palavra {entrada} não foi encontrada ou não existe no texto')
