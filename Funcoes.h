#include <string>

Cliente registrarClientes() {

  std::string nome, endereco, telefone, email;
  long int cpf;

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

  Cliente *objeto;
  objeto = new Cliente(nome, email, endereco, cpf, telefone);

  return *objeto;
  }
// }
// int getQuantidadeDeClientes(int quantCliente) {
//   return quantCliente;
// }

// int getQuantidadeDeConta() {

// }

// float getMontanteTotal() {

// }

// void registrarConta() {
//   int quantConta;
//   cout << "Digite a quantidade de conta que vai adicionar" << endl;
//   cin >> quantConta;
//   for (int i = 0; i < quantConta; i++) {
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
//   }
// }