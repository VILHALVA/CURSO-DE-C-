# POLIMORFISMO - PROGRAMAÇÂO ORIENTADA A OBJETOS (POO)
O polimorfismo é um conceito-chave na Programação Orientada a Objetos (POO) que permite que objetos de diferentes classes sejam tratados de maneira uniforme, desde que compartilhem uma interface comum. Em C++, o polimorfismo é implementado principalmente por meio de funções virtuais e classes abstratas.

Aqui está um exemplo simples de polimorfismo em C++:

```cpp
#include <iostream>
#include <string>

using namespace std;

// Classe base abstrata (superclasse)
class Animal {
public:
    string nome;

    Animal(string _nome) : nome(_nome) {}

    // Função virtual pura
    virtual void EmitirSom() = 0;
};

// Classes derivadas (subclasses)
class Cachorro : public Animal {
public:
    Cachorro(string _nome) : Animal(_nome) {}

    void EmitirSom() override {
        cout << "Latindo... Woof! Woof!" << endl;
    }
};

class Gato : public Animal {
public:
    Gato(string _nome) : Animal(_nome) {}

    void EmitirSom() override {
        cout << "Miando... Meow! Meow!" << endl;
    }
};

int main() {
    // Array de ponteiros para a classe base
    Animal* animais[2];

    animais[0] = new Cachorro("Rex");
    animais[1] = new Gato("Whiskers");

    // Polimorfismo: chamando o método EmitirSom para cada objeto
    for (int i = 0; i < 2; i++) {
        cout << animais[i]->nome << ": ";
        animais[i]->EmitirSom();
    }

    // Liberar a memória alocada para os objetos
    for (int i = 0; i < 2; i++) {
        delete animais[i];
    }

    return 0;
}
```

Neste exemplo:

1. Temos uma classe base abstrata chamada `Animal`, que contém um membro `nome` e uma função virtual pura `EmitirSom()`. A função virtual pura é marcada com `= 0` e significa que as classes derivadas devem implementar essa função.

2. Temos duas classes derivadas, `Cachorro` e `Gato`, que herdam da classe base `Animal` e implementam a função `EmitirSom()` de maneiras diferentes.

3. No `main`, criamos um array de ponteiros para a classe base `Animal` e alocamos objetos das classes derivadas `Cachorro` e `Gato`. Em seguida, usamos o polimorfismo para chamar o método `EmitirSom()` para cada objeto, independentemente da classe a que pertencem.

4. Finalmente, liberamos a memória alocada para os objetos usando `delete`.

O polimorfismo permite tratar objetos de classes diferentes de maneira uniforme, desde que compartilhem uma interface comum. Isso torna o código mais flexível e extensível, pois novas classes derivadas podem ser adicionadas sem afetar o código existente que usa a classe base.