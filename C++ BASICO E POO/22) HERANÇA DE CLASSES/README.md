# HERANÇA DE CLASSES - PROGRAMAÇÂO ORIENTADA A OBJETOS POO OPP
A herança de classes é um conceito fundamental na Programação Orientada a Objetos (POO) que permite criar uma nova classe (classe derivada ou subclasse) com base em uma classe existente (classe base ou superclasse). Em C++, você pode implementar a herança usando a palavra-chave `class` seguida por `:` e o modo de acesso (public, protected ou private) e, em seguida, o nome da classe base. Aqui está um exemplo de herança de classes em C++:

```cpp
#include <iostream>
#include <string>

using namespace std;

// Classe base (superclasse)
class Animal {
public:
    string nome;
    int idade;

    Animal(string _nome, int _idade) : nome(_nome), idade(_idade) {}

    void EmitirSom() {
        cout << "Som genérico de animal." << endl;
    }
};

// Classe derivada (subclasse) que herda de Animal
class Cachorro : public Animal {
public:
    Cachorro(string _nome, int _idade, string _raca) : Animal(_nome, _idade), raca(_raca) {}

    void EmitirSom() {
        cout << "Latindo... Woof! Woof!" << endl;
    }

    void MostrarInformacoes() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Raça: " << raca << endl;
    }

private:
    string raca;
};

int main() {
    // Criando um objeto da classe derivada (Cachorro)
    Cachorro cachorro("Rex", 3, "Golden Retriever");

    // Chamando métodos da classe base e da classe derivada
    cachorro.EmitirSom(); // Chama o método da classe derivada
    cachorro.MostrarInformacoes(); // Chama um método específico da classe derivada

    return 0;
}
```

Neste exemplo:

1. Temos uma classe base chamada `Animal` que possui membros públicos (`nome` e `idade`) e um método chamado `EmitirSom`.

2. Em seguida, criamos uma classe derivada chamada `Cachorro` usando a herança pública (`: public Animal`). Isso significa que os membros públicos da classe base são herdados como membros públicos da classe derivada.

3. A classe `Cachorro` adiciona um membro privado `raca` e um construtor personalizado que inicializa tanto os membros da classe base como os membros da classe derivada.

4. A classe derivada `Cachorro` substitui o método `EmitirSom` da classe base para fornecer uma implementação específica para cachorros.

5. No `main`, criamos um objeto da classe derivada `Cachorro` e chamamos métodos tanto da classe base como da classe derivada.

A herança de classes permite que você crie hierarquias de classes onde classes derivadas podem herdar características e comportamentos da classe base, ao mesmo tempo em que podem adicionar ou substituir funcionalidades específicas. Isso é uma parte essencial da POO e permite a reutilização de código e a modelagem de objetos do mundo real de forma eficiente.