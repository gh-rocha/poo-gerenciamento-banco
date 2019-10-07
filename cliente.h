#ifndef CLIENTE_H
#define CLIENTE_H
#include <String>
#include <string.h>
#include<string>
#include<iostream>

class Cliente
{
    public:
        Cliente(string nome,string endereco,string telefone,string email,int cpf);
        virtual ~Cliente();
        void setnome(string nome);
        void setendereco(string endereço);
        void settelefone(string telefone);
        void setemail(string email);
        void setcpf(int cpf);
        string getnome() const;
        string getendereco() const;
        string gettelefone() const;
        string getemail() const;
        int getcpf() const;
        string toString(int);

    protected:

    private:
        string nome, endereco, telefone, email;
        int cpf;

};
#endif // CLIENTE_H