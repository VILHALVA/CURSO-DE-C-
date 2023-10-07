#include <iostream>
using namespace std;

// Definição da estrutura do nó da lista encadeada
struct Node {
    int valor;
    Node* proximo;
};

// Função para imprimir a lista encadeada
void ImprimirLista(Node* cabeca) {
    Node* atual = cabeca;
    while (atual != nullptr) {
        cout << atual->valor << " -> ";
        atual = atual->proximo;
    }
    cout << "nullptr" << endl;
}

// Função para adicionar um elemento ao final da lista
void AdicionarElemento(Node*& cabeca, int valor) {
    Node* novoNo = new Node{valor, nullptr};
    if (cabeca == nullptr) {
        cabeca = novoNo;
    } else {
        Node* atual = cabeca;
        while (atual->proximo != nullptr) {
            atual = atual->proximo;
        }
        atual->proximo = novoNo;
    }
}

// Função para remover um elemento da lista
void RemoverElemento(Node*& cabeca, int valor) {
    if (cabeca == nullptr) {
        return;
    }
    if (cabeca->valor == valor) {
        Node* temp = cabeca;
        cabeca = cabeca->proximo;
        delete temp;
        return;
    }
    Node* atual = cabeca;
    while (atual->proximo != nullptr && atual->proximo->valor != valor) {
        atual = atual->proximo;
    }
    if (atual->proximo != nullptr) {
        Node* temp = atual->proximo;
        atual->proximo = temp->proximo;
        delete temp;
    }
}

int main() {
    Node* lista = nullptr; // Inicializa a lista encadeada como vazia

    // Adiciona elementos à lista
    AdicionarElemento(lista, 10);
    AdicionarElemento(lista, 20);
    AdicionarElemento(lista, 30);
    AdicionarElemento(lista, 40);

    cout << "Lista inicial: ";
    ImprimirLista(lista);

    // Remove um elemento da lista
    RemoverElemento(lista, 20);

    cout << "Lista após a remoção: ";
    ImprimirLista(lista);

    // Libera a memória alocada pela lista encadeada
    while (lista != nullptr) {
        Node* temp = lista;
        lista = lista->proximo;
        delete temp;
    }

    return 0;
}
