# PROGRAMAÇÃO ORIENTADA A OBJETOS - POO, CLASSES, PUBLIC, PRIVATE, METÓDOS
A Programação Orientada a Objetos (POO) em C++ envolve a criação de classes para modelar objetos do mundo real, encapsulando dados e comportamentos relacionados em uma única unidade. Vamos discutir a criação de classes, membros públicos e privados, e métodos em C++:

**Criação de uma Classe:**

Em C++, você pode criar uma classe usando a palavra-chave `class`, seguida pelo nome da classe. As declarações dos membros da classe são colocadas entre chaves `{}`.

```cpp
class Carro {
public:
    // Membros públicos
    string marca;
    string modelo;
    int ano;
};
```

**Membros Públicos e Privados:**

Uma classe pode ter membros públicos e privados. Membros públicos são acessíveis fora da classe, enquanto membros privados só podem ser acessados internamente à classe. A palavra-chave `public:` e `private:` é usada para definir esses acessos.

```cpp
class Pessoa {
public:
    // Membros públicos
    string nome;
    int idade;

private:
    // Membros privados
    string endereco;
};
```

**Métodos:**

Os métodos são funções associadas a uma classe. Eles definem o comportamento dos objetos dessa classe. Métodos podem ser membros públicos ou privados, assim como variáveis.

```cpp
class Retangulo {
public:
    // Método para calcular a área
    double CalcularArea(double largura, double altura) {
        return largura * altura;
    }

private:
    // Método privado para calcular o perímetro
    double CalcularPerimetro(double largura, double altura) {
        return 2 * (largura + altura);
    }
};
```

**Exemplo Completo:**

Aqui está um exemplo completo que demonstra uma classe `Pessoa` com membros públicos (nome e idade), um método público para imprimir informações e membros privados (endereço) com métodos privados:

```cpp
#include <iostream>
using namespace std;

class Pessoa {
public:
    // Membros públicos
    string nome;
    int idade;

    // Método público para imprimir informações
    void ImprimirInformacoes() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
    }

private:
    // Membro privado
    string endereco;

    // Método privado
    void ExibirEndereco() {
        cout << "Endereço: " << endereco << endl;
    }

public:
    // Método público para configurar o endereço
    void DefinirEndereco(string novoEndereco) {
        endereco = novoEndereco;
    }
};

int main() {
    Pessoa pessoa1;
    pessoa1.nome = "Alice";
    pessoa1.idade = 30;
    pessoa1.DefinirEndereco("123 Rua Principal");

    pessoa1.ImprimirInformacoes(); // Chamando método público
    // pessoa1.ExibirEndereco(); // Isso gerará um erro, pois ExibirEndereco é privado

    return 0;
}
```

Neste exemplo, a classe `Pessoa` possui membros públicos (nome e idade) e privados (endereco), bem como métodos públicos (`ImprimirInformacoes` e `DefinirEndereco`) e um método privado (`ExibirEndereco`). O programa principal cria um objeto da classe `Pessoa`, configura seus membros e chama métodos públicos para acessar e exibir informações.

A POO em C++ é uma maneira poderosa de organizar e estruturar seu código, permitindo que você crie classes para modelar objetos e defina seus comportamentos e propriedades de forma eficiente.
