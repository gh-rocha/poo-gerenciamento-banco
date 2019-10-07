#include "Conta.h"
using namespace std;

Conta::Conta(int NumeroConta, int Data, int cpf, float saldo)
{
                    this->NumeroConta = NumeroConta;
					this->Data = Data;
					this->saldo = saldo;
					this->cpf = cpf;
}

Conta::~Conta()
{
    delete();
}



void Conta::setNumeroConta(int NumeroConta){
    this->NumeroConta = NumeroConta;
void Conta::setData(int Data){
    this->Data = Data;
}
void Conta::setcpf(string cpf){
    this->cpf = cpf;
}
void Conta::setSaldo(float saldo){
    this->saldo = saldo;
}
string Conta::getNumeroConta()const{
    return this->NumeroConta;
}
string Conta::getData() const{
    return this->Data;
}

int Conta::getcpf() const{
    return this->cpf;
}
string Conta::getSaldo() const{
    return this->saldo;
}
string Conta::toString(int NumeroConta, int Data, int cpf, float saldo){
    return this->saldo;
}