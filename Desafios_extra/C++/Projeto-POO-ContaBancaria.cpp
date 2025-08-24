/*
     Classe Conta Banc�ria
Crie uma classe chamada ContaBancaria que represente uma conta banc�ria simples.
Seu desafio �:
Encapsulamento: A classe deve ter atributos
privados para o saldo e o n�mero da conta.
Construtor: O construtor deve ser capaz
de inicializar o saldo e o n�mero da conta ao criar um novo objeto.
M�todos: A classe deve ter m�todos p�blicos que permitam:
Depositar: Adicionar um valor ao saldo da conta.
Sacar: Retirar um valor do saldo. Este m�todo deve ter uma l�gica
de verifica��o: ele s� deve permitir a retirada se o saldo for suficiente.
Consultar Saldo: Um m�todo para retornar o saldo atual da conta.
*/

#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;
using std::fixed;
class ContaBancaria{
public:
    ContaBancaria(double saldo, int conta);        //Construtor
    void depositar(double deposito);               //Fun��o-membro responsavel pelo deposito da conta
    bool sacar(double saque);                      //Fun��o-membro responsavel pela subtra��o do dinheiro
    double getSaldo();                            //Fun��o-membro responsavel pela exibi��o do saldo
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
                cout<<"Voc� n�o tem saldo dispon�vel para completar esta opera��o\n ";
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
