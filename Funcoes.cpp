
 void registrarClientes(){
    
    string nome, endereco, telefone, email;
    int c;
    long int cpf;

    cout << "Digite a quantidade de Clientes que vai adicionar" << endl;
    cin >> c;

    for (int i = 0; i < c; i++){
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
        while (int a=0 < c) {
            while(cpf == cl[a].getcpf()){
                cout <<"cpf repetido, digite novamente " << endl;
                cin >> cpf;
            } 
            a++;   
        }
       }
 }
int getQuantidadeDeClientes(int quantCliente){
    return quantCliente;
}

int getQuantidadeDeConta(){

}

float getMontanteTotal(){

}

void registrarConta(){
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
}