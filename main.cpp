#include <iostream>
#include <string>
#include <vector>
//#include "Conta.h"
//#include "Cliente.h"
//#include "Funcoes.cpp"
//#include "Conta.cpp"
//#include "Cliente.cpp"

void registrarClientes();

using namespace std;

int main(){
    int opcao;

    cout << "Bem vindo ao Banco POO"<< "\n" <<"Escolha a opcao desejada:\n"<< endl;
    cout << "1 - Registrar cliente" << endl;
    cout << "2 - Alterar cliente" << endl;
    cout << "3 - Excluir cliente" << endl;
    cout << "4 - Registrar conta" << endl;    
    cout << "5- Alterar conta" << endl;
    cout << "6- Excluir conta" << endl;
    cout << "0- Sair" << endl;

    while(cin >> opcao){
        switch (opcao){
            case 0:
                cout << "Saindo do banco..." << endl;
                return EXIT_SUCCESS;    
            case 1:
                cout << "registrado" << endl;
                //registrarClientes();
            case 2:
                //alterarClientes();
            case 3:
                //excluirContas();
            case 4:
                //registrarContas();
            case 5:
                //alterarContas();
            case 6:
                //excluirContas();
                cout << "excluido" << endl;
            default:
                return EXIT_FAILURE;
        }
    }


    
    
    return 0;
}