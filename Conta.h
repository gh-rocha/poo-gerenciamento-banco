#ifndef Conta_H
#define Conta_H
#include <String>
#include <string.h>
#include<string>
#include<iostream>

class Conta
{
    public:
        Conta(int NumeroConta, int Data, int cpf, float saldo);
        virtual ~Conta();
        void setNumeroConta(int NumeroConta);
        void setData(int Data);
        void setcpf(int cpf);
        void setSaldo(float saldo);
        int getNumeroConta() const;
        int getData() const;
        float getSaldo() const;
        int getcpf() const;
        string toString(int);
        string toString(int);
        string toString(int);
        string toString(float);


    protected:

    private:
        float saldo;
        int NumeroConta, Data, cpf;

};

#endif // Conta_H