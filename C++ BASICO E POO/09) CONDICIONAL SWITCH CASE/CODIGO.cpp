#include <iostream>
using namespace std;

int main() {
    int escolha;
    double valor;

    cout << "Conversor de Unidades de Comprimento" << endl;
    cout << "Escolha uma opção:" << endl;
    cout << "1. Metros para Pés" << endl;
    cout << "2. Pés para Metros" << endl;
    cout << "3. Metros para Polegadas" << endl;
    cout << "4. Polegadas para Metros" << endl;
    cout << "5. Sair" << endl;
    cout << "Opção: ";
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Digite o valor em metros: ";
            cin >> valor;
            cout << valor << " metros equivalem a " << valor * 3.28084 << " pés." << endl;
            break;
        case 2:
            cout << "Digite o valor em pés: ";
            cin >> valor;
            cout << valor << " pés equivalem a " << valor / 3.28084 << " metros." << endl;
            break;
        case 3:
            cout << "Digite o valor em metros: ";
            cin >> valor;
            cout << valor << " metros equivalem a " << valor * 39.3701 << " polegadas." << endl;
            break;
        case 4:
            cout << "Digite o valor em polegadas: ";
            cin >> valor;
            cout << valor << " polegadas equivalem a " << valor / 39.3701 << " metros." << endl;
            break;
        case 5:
            cout << "Saindo do programa." << endl;
            break;
        default:
            cout << "Opção inválida." << endl;
    }

    return 0;
}
