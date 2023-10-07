#include <iostream>
#include <string>

using namespace std;

class ContaBancaria {
private:
    string titular;
    double saldo;

public:
    // Construtor para inicializar uma conta
    ContaBancaria(string nomeTitular, double saldoInicial) {
        titular = nomeTitular;
        saldo = saldoInicial;
    }

    // Método para exibir informações da conta
    void ExibirInformacoes() {
        cout << "Titular: " << titular << endl;
        cout << "Saldo: $" << saldo << endl;
    }

    // Método para realizar um depósito
    void Depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Depósito de $" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Valor inválido para depósito." << endl;
        }
    }

    // Método para realizar um saque
    void Sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            cout << "Saque de $" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Saque inválido." << endl;
        }
    }
};

int main() {
    // Criação de objetos da classe ContaBancaria
    ContaBancaria conta1("Alice", 1000.0);
    ContaBancaria conta2("Bob", 1500.0);

    // Exibição das informações das contas
    cout << "Conta 1:" << endl;
    conta1.ExibirInformacoes();

    cout << "\nConta 2:" << endl;
    conta2.ExibirInformacoes();

    // Realização de operações nas contas
    conta1.Depositar(500.0);
    conta2.Sacar(200.0);

    // Exibição das informações atualizadas das contas
    cout << "\nConta 1 (após depósito):" << endl;
    conta1.ExibirInformacoes();

    cout << "\nConta 2 (após saque):" << endl;
    conta2.ExibirInformacoes();

    return 0;
}
