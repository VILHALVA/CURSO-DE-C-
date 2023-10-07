#include <iostream>
using namespace std;

int main() {
    double saldo = 1000.0; // Saldo inicial de $1000
    int opcao;
    double valor;

    do {
        cout << "Caixa Eletrônico" << endl;
        cout << "Seu saldo atual é: $" << saldo << endl;
        cout << "Escolha uma opção:" << endl;
        cout << "1. Fazer um saque" << endl;
        cout << "2. Sair" << endl;
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor que deseja sacar: $";
                cin >> valor;
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    cout << "Saque de $" << valor << " efetuado com sucesso." << endl;
                } else if (valor <= 0) {
                    cout << "Valor inválido. Tente novamente." << endl;
                } else {
                    cout << "Saldo insuficiente. Seu saldo atual é de $" << saldo << endl;
                }
                break;
            case 2:
                cout << "Saindo do caixa eletrônico." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }

    } while (opcao != 2);

    cout << "Obrigado por usar nosso caixa eletrônico. Tenha um bom dia!" << endl;

    return 0;
}
