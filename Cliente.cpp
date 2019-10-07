#include "Cliente.h"
using namespace std;

Cliente::Cliente(string nome, string endereco, long int telefone, string email, long int cpf)
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


//setters
void Cliente::setNome(string nome){
    this->nome = nome;
}
void Cliente::setEndereco(string endereco){
    this->endereco = endereco;
}
void Cliente::setTelefone(long int telefone){
    this->telefone = telefone;
}
void Cliente::setEmail(string email){
    this->email = email;
}
void Cliente::setCpf(long int cpf){
    this->cpf = cpf;
}

//getters
string Cliente::getNome()const{
    return this->nome;
}
string Cliente::getEndereco() const{
    return this->endereco;
}
long int Cliente::getTelefone() const{
    return this->telefone;
}
string Cliente::getEmail() const{
    return this->email;
}
long int Cliente::getCpf() const{
    return this->cpf;
}

//to_string
string Cliente::toString(string nome, string endereco, long int telefone, string email, long int cpf){
    string resposta ("Nome: ");
    resposta += nome;
    resposta += "; Endereco: ";
    resposta += endereco;
    resposta += "; Tel: ";
    resposta += to_string(telefone);  
    resposta += "; Email: ";
    resposta += email;
    resposta += "; CPF: ";
    resposta += to_string(cpf);
    resposta += "\0";
    
    cout << resposta << endl;

    return resposta;
}

int main(){
    Cliente A("lucca", "r. xpto", 987654321, "corninho_das_montanhas@gmail.com", 70703535);
}