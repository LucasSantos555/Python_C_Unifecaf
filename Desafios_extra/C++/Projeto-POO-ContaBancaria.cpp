/*
     Classe Conta Bancária
Crie uma classe chamada ContaBancaria que represente uma conta bancária simples.
Seu desafio é:
Encapsulamento: A classe deve ter atributos
privados para o saldo e o número da conta.
Construtor: O construtor deve ser capaz
de inicializar o saldo e o número da conta ao criar um novo objeto.
Métodos: A classe deve ter métodos públicos que permitam:
Depositar: Adicionar um valor ao saldo da conta.
Sacar: Retirar um valor do saldo. Este método deve ter uma lógica
de verificação: ele só deve permitir a retirada se o saldo for suficiente.
Consultar Saldo: Um método para retornar o saldo atual da conta.
*/

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;
using std::fixed;
class ContaBancaria{
public:
    ContaBancaria(double saldo, int conta);        //Construtor
    void depositar(double deposito);               //Função-membro responsavel pelo deposito da conta
    bool sacar(double saque);                      //Função-membro responsavel pela subtração do dinheiro
    double getSaldo();                            //Função-membro responsavel pela exibição do saldo
private:
    double saldo;
    int conta;


};

int main()
{
setlocale(LC_ALL, "Portuguese");
int op=1;
double valorTransacao;
ContaBancaria obj(1000.0,2);

   while(op != 0){
    cout<<"\tMENU\n1-Exibir saldo\n2-Depositar\n3-Sacar\n0-sair\n"<<endl<<">>> ";

    cin>>op;
        switch (op)
        {
        case 1:
            cout<<"Seu saldo atual eh: "<<fixed<<setprecision(2)<<obj.getSaldo()<<endl;
            break;
        case 2:
            cout<<"Digite o valor R$ a ser depositado: ";
            cin>>valorTransacao;
            obj.depositar(valorTransacao);
            cout<<"Seu saldo apos o deposito: "<<fixed<<setprecision(2)<<obj.getSaldo()<<endl;
            break;
        case 3:
            while(1){
            cout<<"Digite o valor R$ que deseja sacar: "<<setw(20);
            cin>>valorTransacao;

            if(!obj.sacar(valorTransacao)){
                cout<<"Você não tem saldo disponível para completar esta operação\n ";
            }else{
             cout<<"Seu saldo apos o saque: "<<fixed<<setprecision(2)<<obj.getSaldo()<<endl;
                break;
                }

            }
            break;
        }//endcase
   }
    return 0;
}

ContaBancaria::ContaBancaria(double saldo, int conta)
{
    this ->saldo = saldo;
    this ->conta = conta;

}//fimConstrutor
//===============================================================
void ContaBancaria::depositar(double deposito){
    saldo = saldo+deposito;
}//fimDepositar
//================================================================
bool ContaBancaria::sacar(double saque){


        if(saldo>saque){
            saldo = saldo - saque;
           return true;
        }else{
            return false;
        }

}//endSacar
double ContaBancaria::getSaldo(){
return saldo;
}
