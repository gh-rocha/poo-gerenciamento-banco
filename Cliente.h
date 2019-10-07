#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
#include <string>

class Cliente
{
    public:
        Cliente(string nome,string endereco,string telefone,string email,int cpf);
        virtual ~Cliente();
        void setNome(string nome);
        void setEndereco(string endereço);
        void setTelefone(string telefone);
        void setEmail(string email);
        void setCpf(int cpf);
        string getNome() const;
        string getEndereco() const;
        string getTelefone() const;
        string getEmail() const;
        int getCpf() const;
        string toString(int);

    private:
        string nome, endereco, telefone, email;
        int cpf;

};
#endif // CLIENTE_H