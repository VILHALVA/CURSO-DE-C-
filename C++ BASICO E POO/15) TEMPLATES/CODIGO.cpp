#include <iostream>
#include <stdexcept>
using namespace std;

// Classe de modelo para Vetor Genérico
template <typename T>
class Vetor {
public:
    // Construtor que inicializa um vetor vazio com tamanho zero
    Vetor() : tamanho(0), capacidade(10) {
        elementos = new T[capacidade];
    }

    // Destrutor para liberar memória
    ~Vetor() {
        delete[] elementos;
    }

    // Adicionar um elemento ao vetor
    void Adicionar(const T& elemento) {
        if (tamanho >= capacidade) {
            AumentarCapacidade();
        }
        elementos[tamanho++] = elemento;
    }

    // Acessar um elemento pelo índice
    T& operator[](int indice) {
        if (indice < 0 || indice >= tamanho) {
            throw out_of_range("Índice fora dos limites.");
        }
        return elementos[indice];
    }

    // Retorna o tamanho atual do vetor
    int Tamanho() const {
        return tamanho;
    }

private:
    T* elementos;
    int tamanho;
    int capacidade;

    // Função auxiliar para aumentar a capacidade do vetor quando necessário
    void AumentarCapacidade() {
        capacidade *= 2;
        T* novoArray = new T[capacidade];
        for (int i = 0; i < tamanho; i++) {
            novoArray[i] = elementos[i];
        }
        delete[] elementos;
        elementos = novoArray;
    }
};

int main() {
    Vetor<int> numeros; // Vetor de inteiros
    Vetor<string> palavras; // Vetor de strings

    numeros.Adicionar(10);
    numeros.Adicionar(20);
    numeros.Adicionar(30);

    palavras.Adicionar("Hello");
    palavras.Adicionar("World");

    cout << "Elementos do vetor de inteiros:" << endl;
    for (int i = 0; i < numeros.Tamanho(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "Elementos do vetor de strings:" << endl;
    for (int i = 0; i < palavras.Tamanho(); i++) {
        cout << palavras[i] << " ";
    }
    cout << endl;

    return 0;
}
