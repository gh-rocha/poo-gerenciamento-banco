#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
#include <string>
using namespace std;

class Cliente
{
    public:
        Cliente(string nome, string email, string endereco, long int cpf, long int telefone);
        ~Cliente();
        
        //setters
        void setNome(string nome);
        void setEmail(string email);
        void setEndereco(string endereco);
        void setCpf(long int cpf);
        void setTelefone(long int telefone);
        
        //getters
        std::string getNome() const;
        std::string getEmail() const;
        std::string getEndereco() const;
        long int getCpf() const;
        long int getTelefone() const;
        
        //string toString();//string, string, long int, string, long int );

    private:
        string nome,
               endereco,
               email;
        long int cpf,
                 telefone;

};
#endif // CLIENTE_H