# Coloque a aplicação dentro de um while para que rode infinitamente, 
# até que o usuário digite 0.
# Nessa aplicação crie um cadastro de clientes = {nome, idade} e
# com as seguintes operações:
# - Inserção de cliente
# - Busca por nome ou id (índice da lista)
# - Remoção 
# - Atualização
#
# Importante: ignore nomes iguais, mas caso exista 
# considere apenas um sem muitos critérios.
import os
import time
cliente = [] #conterá os dicionários

def InserirCliente(nome, idade):
    novo_cliente ={
        "nome": nome,
        "idade": idade,
    }
    cliente.append(novo_cliente)
    print("Cliente adicionado com sucesso")

#   -- End InsserirCliente  --

def RemocaoCliente(nomeC):
        existe = False
        for i in cliente:
            if i["nome"].lower() == nomeC.lower():
                cliente.remove(i)
                print("Cliente removido")
                existe = True
        if(existe == False):
                print("Cliente não encontrado")
#   --  End RemoçãoCliente  --
def RemocaoClienteId(idC):
        encontrado = False
        for indice, item in enumerate(cliente):
            if (indice == idC):
                    del cliente[indice]
                    print("Cliente removido")
                    encontrado = True
        if(encontrado == False):
                print("Cliente não encontrado")
#   --  End RemoçãoClienteId  --
def BuscaCliente(nome):
        existe = False
        for i in cliente:
            if(i["nome"].lower()  == nome.lower()):
                print(f'nome: {i["nome"]}, idade: {i["idade"]}')
                existe = True
        if(existe == False):
                print("Cliente inexitente")
#   -- End BuscaCliente --
def BuscaClienteId(idC):
    if not cliente:
        print("Não ha cliente na lista")
    else:
        existe= False
        for indice, item in enumerate(cliente):
            if(indice  == idC):
                print(f'nome: {item["nome"]}, idade: {item["idade"]}')
                existe = True
        if existe==False:
            print("Cliente inexistente")
#   -- End BuscaClienteId   --
def Atualização():
    if not cliente:
        print("Não ha clientes na lista")
    for indice, item in enumerate(cliente):
        print(f'Cliente: {item['nome']}, Idade: {item['idade']}')

op =1
nomeId = 0
id = 0
while op != 0:
    os.system('cls')
    print("\tMENU\n [0] - sair\n [1] - Inserção de cliente\n [2] - Remoção de cliente\n [3] - Busca\n [4] - Atualização\n")
    op = int(input(">>> "))

    if(op == 1):
        #os.system('cls')
        print("\tINSERÇÃO DE CLIENTE\t")
        nome = input("Digite o nome do cliente:\n>>> ")
        idade = int(input("Digite a idade do cliente:\n>>> "))
        InserirCliente(nome, idade)
        time.sleep(3)
    elif(op == 2):
       # os.system('cls')
        print("\tREMOÇÃO DE CLIENTE\t")
        if not cliente:
            print("Não ha cliente na lista")
        else:
            while(nomeId != "-1"):
                nomeId = input("\tREMOVER por: \n a)Nome\n b)ID\n-1)Cancelar\n>>> ")
                if(nomeId == 'a'):
                    nome = input("Digite o nome do cliente a ser removido\n>>> ")
                    RemocaoCliente(nome)
                    nomeId = 0
                    break
                elif(nomeId== 'b'):
                    id = int(input("Digite o id do cliente a ser removido\n>>>"))
                    RemocaoClienteId(id)
                    nomeId = 0
                    break
        nomeId = 0
        time.sleep(3)
        
    elif(op == 3):
       print("\BUSCA DE CLIENTE\t")
       if not cliente:
            print("Não ha cliente na lista")
       else:
        while(nomeId != "-1"):
                nomeId = input("\tBUSCAR por: \n a)Nome\n b)ID\n-1)Cancelar\n>>> ")
                if(nomeId == 'a'):
                    nome = input("Digite o nome do cliente\n>>> ")
                    BuscaCliente(nome)
                    nomeId = 0
                    break
                elif(nomeId== 'b'):
                    id = int(input("Digite o id do cliente\n>>>"))
                    BuscaClienteId(id)
                    nomeId = 0
                    break
       nomeId = 0
       time.sleep(3)
    elif(op ==4):
        Atualização()
        time.sleep(3)
        
    elif(op != 0):
        print("Tentativa Invalida\nTente novamente\n")
    else:
        print("Programa Encerrado")
    