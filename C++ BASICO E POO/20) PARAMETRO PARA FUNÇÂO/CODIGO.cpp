#include <iostream>

using namespace std;

// Função para trocar os valores de duas variáveis por referência
void TrocarValores(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    cout << "Antes da troca:" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    TrocarValores(x, y); // Chamada da função para trocar os valores

    cout << "Depois da troca:" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}
