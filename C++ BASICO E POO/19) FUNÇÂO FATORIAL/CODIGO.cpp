#include <iostream>

using namespace std;

// Função recursiva para calcular o fatorial de um número
unsigned long long FatorialRecursivo(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * FatorialRecursivo(n - 1);
    }
}

// Função iterativa para calcular o fatorial de um número
unsigned long long FatorialIterativo(int n) {
    if (n < 0) {
        return 0; // Retorna 0 para números negativos
    } else {
        unsigned long long resultado = 1;
        for (int i = 1; i <= n; i++) {
            resultado *= i;
        }
        return resultado;
    }
}

int main() {
    int numero;

    cout << "Digite um número inteiro não negativo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "O fatorial não está definido para números negativos." << endl;
    } else {
        // Usando a função recursiva para calcular o fatorial
        unsigned long long resultadoRecursivo = FatorialRecursivo(numero);
        cout << "Fatorial (Recursivo) de " << numero << " é " << resultadoRecursivo << endl;

        // Usando a função iterativa para calcular o fatorial
        unsigned long long resultadoIterativo = FatorialIterativo(numero);
        cout << "Fatorial (Iterativo) de " << numero << " é " << resultadoIterativo << endl;
    }

    return 0;
}
