#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definição da classe ContaBancaria
class ContaBancaria {
public:
    ContaBancaria(int numero, string nomeCliente, double saldoInicial)
        : numeroConta(numero), cliente(nomeCliente), saldo(saldoInicial) {}

    int ObterNumeroConta() const {
        return numeroConta;
    }

    string ObterNomeCliente() const {
        return cliente;
    }

    double ObterSaldo() const {
        return saldo;
    }

    void Depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Depósito de $" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Valor inválido para depósito." << endl;
        }
    }

    void Sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
            cout << "Saque de $" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Saque inválido." << endl;
        }
    }

private:
    int numeroConta;
    string cliente;
    double saldo;
};

// Função para criar uma nova conta bancária
ContaBancaria CriarConta() {
    int numero;
    string nome;
    double saldoInicial;

    cout << "Número da conta: ";
    cin >> numero;
    cout << "Nome do cliente: ";
    cin.ignore();
    getline(cin, nome);
    cout << "Saldo inicial: $";
    cin >> saldoInicial;

    return ContaBancaria(numero, nome, saldoInicial);
}

// Função para listar informações de uma conta
void ListarInformacoes(const ContaBancaria& conta) {
    cout << "Número da conta: " << conta.ObterNumeroConta() << endl;
    cout << "Nome do cliente: " << conta.ObterNomeCliente() << endl;
    cout << "Saldo: $" << conta.ObterSaldo() << endl;
}

int main() {
    vector<ContaBancaria> contas;

    while (true) {
        cout << "\nOpções:" << endl;
        cout << "1. Criar conta" << endl;
        cout << "2. Listar contas" << endl;
        cout << "3. Realizar depósito" << endl;
        cout << "4. Realizar saque" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";

        int opcao;
        cin >> opcao;

        switch (opcao) {
            case 1:
                contas.push_back(CriarConta());
                cout << "Conta criada com sucesso." << endl;
                break;
            case 2:
                if (!contas.empty()) {
                    cout << "Lista de contas:" << endl;
                    for (const auto& conta : contas) {
                        ListarInformacoes(conta);
                        cout << "-----------------------" << endl;
                    }
                } else {
                    cout << "Nenhuma conta encontrada." << endl;
                }
                break;
            case 3:
                if (!contas.empty()) {
                    int numero;
                    double valor;
                    cout << "Número da conta: ";
                    cin >> numero;
                    for (auto& conta : contas) {
                        if (conta.ObterNumeroConta() == numero) {
                            cout << "Valor do depósito: $";
                            cin >> valor;
                            conta.Depositar(valor);
                            break;
                        }
                    }
                } else {
                    cout << "Nenhuma conta encontrada." << endl;
                }
                break;
            case 4:
                if (!contas.empty()) {
                    int numero;
                    double valor;
                    cout << "Número da conta: ";
                    cin >> numero;
                    for (auto& conta : contas) {
                        if (conta.ObterNumeroConta() == numero) {
                            cout << "Valor do saque: $";
                            cin >> valor;
                            conta.Sacar(valor);
                            break;
                        }
                    }
                } else {
                    cout << "Nenhuma conta encontrada." << endl;
                }
                break;
            case 5:
                cout << "Saindo do programa." << endl;
                return 0;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
                break;
        }
    }

    return 0;
}
