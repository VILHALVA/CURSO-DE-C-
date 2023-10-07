#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaração de variáveis para armazenar entrada do usuário
    int idade;
    double salario;
    string nome;

    // Solicitar entrada do usuário
    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite seu salário: ";
    cin >> salario;

    // Exibir os dados inseridos
    cout << "\nInformações do Usuário:\n";
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Salário: R$" << salario << endl;

    return 0;
}
