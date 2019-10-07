#include <iostream>
#include <string>
#include <vector>
#include <unistd.h> //unslep
#include CONTA_H
#include CLIENTE_H
#include "Conta.cpp"
#include "Cliente.cpp"
#include "Funcoes.cpp"

using namespace std;

int main(){
    int opcao;
    int c;
    
    cout << "Bem vindo ao Banco POO"<< "\n" <<"Digite 1 para adicionar clientes"<< endl;
    switch (opcao)
    {
    case 0:
        cout << "Saindo do banco..." << endl;
        usleep(3000000); //Espera 3 segundo e sai
        return EXIT_SUCCESS;
    case 1:
        registrarClientes();
    case 2:
        //registrarContas();
        //
        //
        // int quantConta;
        // cout << "Digite a quantidade de conta que vai adicionar" << endl;
        // cin >> quantConta;
        // for (int i = 0; i < quantConta; i++){
        //     cout << "Digite o nome do proprietario" << endl;
        //     cin >> nome;
        //     cout << "Digite o endereco do proprietario" << endl;
        //     cin >> endereco;
        //     cout << "Digite o cpf do proprietario" << endl;
        //     cin >> cpf;
        //     cout << "Digite o telefone do proprietario" << endl;
        //     cin >> telefone;
        //     cout << "Digite o email do proprietario" << endl;
        //     cin >> email;
        // }
    default:
        break;
    }
    
    return 0;
}