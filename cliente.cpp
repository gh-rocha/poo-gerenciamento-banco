#include "Cliente.h"
using namespace std;

Cliente::Cliente(string nome, string endereco, string telefone, string email, int cpf)
{
                    this->nome = nome;
					this->endereco = endereco;
					this->telefone = telefone;
					this->email = email;
					this->cpf = cpf;
}

Cliente::~Cliente()
{
    delete();
}



void Cliente::setnome(string nome){
    this->nome = nome;
}
void Cliente::setendereco(string endereco){
    this->endereco = endereco;
}
void Cliente::settelefone(string telefone){
    this->telefone = telefone;
}
void Cliente::setemail(string email){
    this->email = email;
}
void Cliente::setcpf(int cpf){
    this->cpf = cpf;
}
string Cliente::getnome()const{
    return this->nome;
}
string Cliente::getendereco() const{
    return this->endereco;
}
string Cliente::gettelefone() const{
    return this->telefone;
}
string Cliente::getemail() const{
    return this->email;
}
int Cliente::getcpf() const{
    return this->cpf;
}
string Cliente::toString(int cpf){
    return this->cpf;
}