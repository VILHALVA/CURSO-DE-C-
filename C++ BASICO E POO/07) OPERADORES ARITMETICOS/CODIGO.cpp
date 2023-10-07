#include <iostream>
using namespace std;

int main() {
    // Declaração de variáveis
    int num1, num2;
    
    // Solicitar entrada do usuário
    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;
    
    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    // Realizar operações matemáticas
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;

    // Certifique-se de que num2 não seja zero antes da divisão
    if (num2 != 0) {
        double divisao = static_cast<double>(num1) / num2; // Conversão de tipo para obter um resultado de ponto flutuante
        cout << "Divisão (num1 / num2): " << divisao << endl;
    } else {
        cout << "A divisão por zero não é permitida." << endl;
    }

    int resto = num1 % num2;

    // Exibir resultados
    cout << "Soma (num1 + num2): " << soma << endl;
    cout << "Subtração (num1 - num2): " << subtracao << endl;
    cout << "Multiplicação (num1 * num2): " << multiplicacao << endl;
    cout << "Resto (num1 % num2): " << resto << endl;

    return 0;
}
