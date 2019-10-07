#include <iostream>
#include <string>
#include "conta.h"
#include "cliente.h"
#include "conta.cpp"
#include "cliente.cpp"
using namespace std;

int getQuantidadeDeClientes(int quantCliente){
    return quantCliente;
}

int getQuantidadeDeConta(){

}

float getMontanteTotal(){

}
int main(){
    // doocumentação
    int opcao;
    string nome, endereco, telefone, email;
    int cpf;
    int quantCliente;
    cout << "Digite a quantidade de Clientes que vai adicionar" << endl;
        cin >> quantCliente;
    Cliente cl [quantCliente];
    
    cout << "Bem vindo ao Banco POO"<< "\n" <<"Digite 1 para adicionar clientes"<< endl;
    // doocumentação2
    switch (opcao)
    {
    case 1:
        for (int i = 0; i < quantCliente; i++){
            cout << "Digite o nome do proprietario" << endl;
            cin >> nome;
            cout << "Digite o endereco do proprietario" << endl;
            cin >> endereco;
            cout << "Digite o cpf do proprietario" << endl;
            cin >> cpf;           
            cout << "Digite o telefone do proprietario" << endl;
            cin >> telefone;
            cout << "Digite o email do proprietario" << endl;
            cin >> email;
            if(i == 0){
                 cl[i](nome, endereco, telefone, email, cpf);
            }    
            while (int a=0 < quantCliente) {
                while(cpf == cl[a].getcpf()){
                    cout <<"cpf repetido, digite novamente " << endl;
                    cin >> cpf;
                } 
                a++;   
            }
        }

        break;
    case 2:
        int quantConta;
        cout << "Digite a quantidade de conta que vai adicionar" << endl;
        cin >> quantConta;
        for (int i = 0; i < quantConta; i++){
            cout << "Digite o nome do proprietario" << endl;
            cin >> nome;
            cout << "Digite o endereco do proprietario" << endl;
            cin >> endereco;
            cout << "Digite o cpf do proprietario" << endl;
            cin >> cpf;
            cout << "Digite o telefone do proprietario" << endl;
            cin >> telefone;
            cout << "Digite o email do proprietario" << endl;
            cin >> email;
        }
        break;
    
    default:
        break;
    }
    
    return 0;
}