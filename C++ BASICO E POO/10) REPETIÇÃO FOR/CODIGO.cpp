#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicita ao usuário um número para criar a tabela de multiplicação
    cout << "Digite um número inteiro para a tabela de multiplicação: ";
    cin >> numero;

    cout << "Tabela de Multiplicação para " << numero << ":\n";
    
    // Cria uma tabela de multiplicação de 1 a 10 para o número fornecido
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
