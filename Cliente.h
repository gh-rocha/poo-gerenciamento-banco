#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
#include <string>

class Cliente
{
    public:
        Cliente(string nome,string endereco,long int telefone,string email,long int cpf);
        virtual ~Cliente();
        void setNome(string );
        void setEndereco(string );
        void setTelefone(long int );
        void setEmail(string );
        void setCpf(long int );
        string getNome() const;
        string getEndereco() const;
        long int getTelefone() const;
        string getEmail() const;
        long int getCpf() const;
        string toString(string, string, long int, string, long int );

    private:
        string nome,
               endereco,
               email;
        long int cpf,
                 telefone;

};
#endif // CLIENTE_H