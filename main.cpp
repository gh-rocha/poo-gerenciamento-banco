#include <iostream>
#include <string>
#include <vector>
//#include "Conta.h"
#include "Cliente.h"
//#include "Funcoes.cpp"
//#include "Conta.cpp"
//#include "Cliente.cpp"

Cliente registrarClientes();

using namespace std;

int main(){
    int opcao, posicao = 0;

    cout << "Bem vindo ao Banco POO"<< "\n" <<"Escolha a opcao desejada:\n"<< endl;
    cout << "1 - Registrar cliente" << endl;
    cout << "2 - Alterar cliente" << endl;
    cout << "3 - Excluir cliente" << endl;
    cout << "4 - Registrar conta" << endl;    
    cout << "5- Alterar conta" << endl;
    cout << "6- Excluir conta" << endl;
    cout << "0- Sair\n" << endl;
    cout << "Insira a opção desejada: >" << endl;

    cin >> opcao; //Lê a primeira vez, depois entra no loop de leitura

    vector<Cliente*> *cliente;  //Vetor de classe
    Cliente *clientes_cadastrados;    //Instanciação do vetor para os clientes cadastrados

    do{
        switch (opcao){
            case 0:
                cout << "Saindo do banco..." << endl;
                return EXIT_SUCCESS;    
            case 1:
                cout << "registrado" << endl;
                clientes_cadastrados[posicao] = registrarClientes();
                break;
            case 2:
                cout << "alterados" << endl;
                //alterarClientes();
                break;
            case 3:
                cout << "excluidas" << endl;
                //excluirClientes();
                break;
            case 4:
                cout << "registradas" << endl;
                //registrarContas();
                break;
            case 5:
                cout << "alteradas" << endl;
                //alterarContas();
                break;
            case 6:
                cout << "excluidas" << endl;
                //excluirContas();
                break;
            default:
                return EXIT_FAILURE;
        }

        cout << "\nInsira a opção desejada: >" << endl;
    }while(cin >> opcao);


    
    
    return 0;
}