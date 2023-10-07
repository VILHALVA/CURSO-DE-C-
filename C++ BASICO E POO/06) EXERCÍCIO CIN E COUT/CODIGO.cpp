#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis
    double comprimento, largura, area;

    // Solicitar ao usuário o comprimento e a largura do retângulo
    cout << "Digite o comprimento do retângulo: ";
    cin >> comprimento;

    cout << "Digite a largura do retângulo: ";
    cin >> largura;

    // Calcular a área do retângulo
    area = comprimento * largura;

    // Exibir a área calculada
    cout << "A área do retângulo é: " << area << endl;

    return 0;
}
