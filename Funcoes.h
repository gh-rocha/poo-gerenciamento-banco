#include <string>

Cliente registrarClientes() {

  std::string nome, endereco, email;
  long int cpf, telefone;

  cout << "Digite o nome do proprietario: >";
  cin >> nome;
  cout << "\nDigite o endereco do proprietario" << endl;
  cin >> endereco;
  cout << "\nDigite o cpf do proprietario" << endl;
  cin >> cpf;
  cout << "\nDigite o telefone do proprietario" << endl;
  cin >> telefone;
  cout << "\nDigite o email do proprietario" << endl;
  cin >> email;

  // while (int a = 0 < c) {
  //   while (cpf == cl[a].getcpf()) {
  //     cout << "cpf repetido, digite novamente " << endl;
  //     cin >> cpf;
  //   }
  //   a++;
  // }

  Cliente * objeto;
  objeto = new Cliente(nome, email, endereco, cpf, telefone);

  return *objeto;
}
int busca_cliente(string nome, vector<Cliente> &lista_clientes){
  int cont = 0;
  for(cont;lista_clientes.size();cont++){
    if(!nome.compare(lista_clientes[cont].getNome())) //Se o nome digitado for igual a algum da lista
      return cont;
    else return -1;
  }

  return -1;
}

void imprime_lista_clientes(vector<Cliente> &lista_clientes){
  int cont = 0;
  for(cont;lista_clientes.size();cont++){
    cout << "Cliente " << cont + 1  << ":" << lista_clientes[cont].getNome() << endl;
  }
}

void alterar_cliente(vector<Cliente> &lista_clientes){
  std::string nome;

  cout << "Digite o nome do cliente que quer alterar:" << endl;
  imprime_lista_clientes(lista_clientes);
  cout << "Nome: > " << endl;
  cin >> nome;
  busca_cliente(nome,lista_clientes);
}
