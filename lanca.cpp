#include "lanca.h"

using namespace std;

Lancamento::Lancamento(int d, int c, float v, string t){
    data = d;
    conta = c ;
    tipo = t;
    valor = v;
}

Lancamento::~Lancamento(){}

//SET
void Lancamento::setData(int data){
    this->data = data;
}
void Lancamento::setConta(int conta){
    this->conta = conta;
}
void Lancamento::setTipo(string tipo){
    this->tipo = tipo;
}
void Lancamento::setValor(float valor){
    this->valor = valor;
}

string toString(int a, int b, float t, string j){
    //
}