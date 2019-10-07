#include <iostream>
#include <string>
#include <vector>
#include "Conta.h"
#include "Cliente.h"
#include "Funcoes.h"

Cliente registrarClientes();
void imprime_lista_clientes(vector<Cliente>);
void alterar_cliente(vector<Cliente> &lista_clientes);
int busca_clientes(string, vector<Cliente>);

using namespace std;

int main(){
    int opcao; //Opção para seleção no menu

    vector<Cliente> lista_clientes; //Vetor de classes "Cliente" chamado "lista_clientes"

    cout << "Bem vindo ao Banco POO"<< "\n" << endl;
    cout << "1 - Registrar cliente" << endl;
    cout << "2 - Alterar cliente" << endl;
    cout << "3 - Excluir cliente" << endl;
    cout << "4 - Registrar conta" << endl;    
    cout << "5- Alterar conta" << endl;
    cout << "6- Excluir conta" << endl;
    cout << "0- Sair\n" << endl;
    cout << "Insira a opção desejada: >" << endl;

    cin >> opcao; //Lê a primeira opção, depois mantém o loop lendo as próximas
    do{
        cout << "1 - Registrar cliente" << endl;
        cout << "2 - Alterar cliente" << endl;
        cout << "3 - Excluir cliente" << endl;
        cout << "4 - Registrar conta" << endl;    
        cout << "5- Alterar conta" << endl;
        cout << "6- Excluir conta" << endl;
        cout << "0- Sair\n" << endl;

        cout << "Insira a opção desejada: >" << endl;

        switch (opcao){
            case 0:
                cout << "Saindo do banco..." << endl;
                return EXIT_SUCCESS;    
            case 1:
                lista_clientes.push_back(registrarClientes());
                break;
            case 2:
                alterar_cliente(lista_clientes);
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
    }while(cin >> opcao);


    
    
    return 0;
}