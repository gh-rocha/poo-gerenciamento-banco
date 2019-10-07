#include <iostream>
#include <string>
#include "Cliente.h"
using namespace std;

/*
Cliente::Cliente(){
    this->nome = "nome";
	this->endereco = "endereco";
	this->telefone = 999999;
	this->email = "email";
	this->cpf = 7070;
}*/

Cliente::Cliente(string nome, string email, string endereco, long int cpf, long int telefone) {
    this->nome = nome;
	this->endereco = endereco;
	this->telefone = telefone;
	this->email = email;
	this->cpf = cpf;
}

Cliente::~Cliente() {
    cout << "Conta de " << this->nome << "apagada!" << endl;
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
std::string Cliente::getNome()const{
    return this->nome;
}
std::string Cliente::getEndereco() const{
    return this->endereco;
}
long int Cliente::getTelefone() const{
    return this->telefone;
}
std::string Cliente::getEmail() const{
    return this->email;
}
long int Cliente::getCpf() const{
    return this->cpf;
}

// //to_string
// string Cliente::toString(){//string nome, string endereco, long int telefone, string email, long int cpf){
//     string resposta ("Nome: ");
//     resposta += getNome();
//     resposta += "; Endereco: ";
//     resposta += getEndereco();
//     resposta += "; Tel: ";
//     resposta += to_string(getTelefone());  
//     resposta += "; Email: ";
//     resposta += getEmail();
//     resposta += "; CPF: ";
//     resposta += to_string(getCpf());
//     resposta += "\0";
    
//     cout << resposta << endl;

//     return resposta;
// }

// int main(){
//     Cliente A("lucca", "r. xpto", 987654321, "corninho_das_montanhas@gmail.com", 70703535);
//     A.toString();
// }