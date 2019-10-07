#ifndef CONTA_H
#define CONTA_H
#include <string>
#include<iostream>

class Conta
{
    public:
        Conta(int conta, int data, long int cpf, float saldo=0);
        virtual ~Conta();
        void setConta(int );
        void setData(int );
        void setCpf(long int );
        void setSaldo(float );
        int getConta() const;
        int getData() const;
        int long getCpf() const;
        float getSaldo() const;
        string toString(int conta, int data, long int cpf, float saldo);

    private:
        int conta,
            data; 
        float saldo;
        long int cpf;

};

#endif // CONTA_h