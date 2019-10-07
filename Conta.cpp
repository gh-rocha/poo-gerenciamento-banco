#include "Conta.h"
using namespace std;

Conta::Conta(int conta, int data, long int cpf, float saldo)
{
                    this->conta = conta;
					this->data = data;
					this->saldo = saldo;
					this->cpf = cpf;
}

Conta::~Conta()
{
    cout << "Conta numero " << this->conta << "apagada!" << endl;
}


//setters
void Conta::setConta(int NumeroConta){
    this->conta = NumeroConta;
}
void Conta::setData(int Data){
    this->data = Data;
}
void Conta::setCpf(long int cpf){
    this->cpf = cpf;
}
void Conta::setSaldo(float saldo){
    this->saldo = saldo;
}

//getters
int Conta::getConta()const{
    return this->conta;
}
int Conta::getData() const{
    return this->data;
}

int long Conta::getCpf() const{
    return this->cpf;
}
float Conta::getSaldo() const{
    return this->saldo;
}
//std::string Conta::toString(int conta, int data, long int cpf, float saldo){
    // return this->saldo;
//}