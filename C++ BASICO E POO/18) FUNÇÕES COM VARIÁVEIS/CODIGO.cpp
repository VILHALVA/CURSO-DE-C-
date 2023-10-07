#include <iostream>
#include <cstdarg>
#include <string>

using namespace std;

// Função variádica para concatenar strings
string ConcatenarStrings(int quantidade, ...) {
    va_list args;           // Declaração da lista de argumentos
    va_start(args, quantidade); // Inicialização da lista de argumentos

    string resultado = "";

    for (int i = 0; i < quantidade; i++) {
        const char* str = va_arg(args, const char*); // Obter próximo argumento
        resultado += str;
    }

    va_end(args); // Finalização da lista de argumentos

    return resultado;
}

int main() {
    // Exemplo de chamada da função variádica
    string resultado1 = ConcatenarStrings(3, "Hello, ", "world, ", "C++");
    string resultado2 = ConcatenarStrings(4, "Um", " ", "dois", " três");

    cout << "Resultado 1: " << resultado1 << endl;
    cout << "Resultado 2: " << resultado2 << endl;

    return 0;
}
