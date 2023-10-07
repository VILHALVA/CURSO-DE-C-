#include <iostream>
using namespace std;

int main() {
    // Variáveis para armazenar informações do candidato
    int idade;
    double experiencia;
    bool possuiReferencias;

    // Solicitar informações do candidato
    cout << "Idade do candidato: ";
    cin >> idade;

    cout << "Anos de experiência: ";
    cin >> experiencia;

    cout << "Possui referências? (1 para Sim, 0 para Não): ";
    cin >> possuiReferencias;

    // Verificar a elegibilidade do candidato
    if (idade >= 18 && idade <= 60) {
        if (experiencia >= 2.0) {
            if (possuiReferencias) {
                cout << "O candidato é elegível para o emprego!" << endl;
            } else {
                cout << "O candidato não possui referências e não é elegível." << endl;
            }
        } else {
            cout << "O candidato não possui experiência suficiente e não é elegível." << endl;
        }
    } else {
        cout << "O candidato não atende aos requisitos de idade e não é elegível." << endl;
    }

    return 0;
}
