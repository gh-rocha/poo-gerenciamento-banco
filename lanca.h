#ifndef LANCAMENTO_H
#define LANCAMENTO_H
#include <string>
#include <iostream>

using namespace std;
class Lancamento{
    public:
        Lancamento(int , int , float, string);
        ~Lancamento();
        
        //setters
        void setData(int );
        void setConta(int );
        void setTipo(string );
        void setValor(float );

        //getters
        int getData(){
            return data;
        };
        int getConta(){
            return conta;
        };
        float getValor(){
            return valor;
        };
        string getTipo(){
            return tipo;
        };

        string toString(int, int, float, string);

    private:
        int data,
            conta;
        float valor;
        string tipo;
};
#endif