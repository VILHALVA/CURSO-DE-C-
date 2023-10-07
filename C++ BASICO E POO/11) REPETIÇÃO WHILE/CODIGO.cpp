#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Inicialização do gerador de números aleatórios com base no tempo
    srand(time(nullptr));

    int numeroSecreto = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100
    int palpite;
    int tentativas = 0;
    bool acertou = false;

    cout << "Bem-vindo ao Jogo de Adivinhação!" << endl;
    cout << "Tente adivinhar o número secreto entre 1 e 100." << endl;

    while (!acertou) {
        cout << "Digite seu palpite: ";
        cin >> palpite;
        tentativas++;

        if (palpite == numeroSecreto) {
            cout << "Parabéns! Você acertou o número secreto (" << numeroSecreto << ") em " << tentativas << " tentativas." << endl;
            acertou = true;
        } else if (palpite < numeroSecreto) {
            cout << "Tente um número maior." << endl;
        } else {
            cout << "Tente um número menor." << endl;
        }
    }

    return 0;
}
