#ifndef CLIENTE_H
#define CLIENTE_H

#include<iostream>
#include <string>

class Cliente
{
    public:
        //Cliente();
        Cliente(string nome, string email, string endereco, long int cpf, long int telefone);
        ~Cliente();
        
        //setters
        void setNome(string );
        void setEmail(string );
        void setEndereco(string );
        void setCpf(long int );
        void setTelefone(long int );
        
        //getters
        string getNome() const;
        string getEmail() const;
        string getEndereco() const;
        long int getCpf() const;
        long int getTelefone() const;
        
        string toString();//string, string, long int, string, long int );

    private:
        string nome,
               endereco,
               email;
        long int cpf,
                 telefone;

};
#endif // CLIENTE_H