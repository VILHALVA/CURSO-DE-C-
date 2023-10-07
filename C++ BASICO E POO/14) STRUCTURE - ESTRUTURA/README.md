# STRUCTURE - ESTRUTURA
Em C++, uma estrutura (structure), frequentemente chamada de `struct`, é uma construção de dados que permite agrupar diferentes tipos de variáveis sob um único nome. É semelhante a uma classe, mas sem métodos ou comportamentos. As estruturas são frequentemente usadas para representar registros de dados, como informações de contato, pontos em um espaço tridimensional, informações de estudantes, entre outros.

Aqui está a sintaxe básica para declarar e usar uma estrutura em C++:

```cpp
struct NomeDaEstrutura {
    TipoDeDado1 membro1;
    TipoDeDado2 membro2;
    // ...
};

int main() {
    NomeDaEstrutura instanciaDaEstrutura;

    instanciaDaEstrutura.membro1 = valor1;
    instanciaDaEstrutura.membro2 = valor2;
    // ...

    return 0;
}
```

Aqui está um exemplo mais completo que representa informações de um estudante usando uma estrutura:

```cpp
#include <iostream>
#include <string>
using namespace std;

struct Estudante {
    string nome;
    int idade;
    double nota;
};

int main() {
    Estudante aluno;

    aluno.nome = "João";
    aluno.idade = 20;
    aluno.nota = 8.5;

    cout << "Nome: " << aluno.nome << endl;
    cout << "Idade: " << aluno.idade << endl;
    cout << "Nota: " << aluno.nota << endl;

    return 0;
}
```

Neste exemplo, uma estrutura chamada `Estudante` é definida com três membros: `nome`, `idade` e `nota`. Em seguida, uma instância da estrutura `aluno` é criada e seus membros são inicializados com valores. Você pode acessar e manipular os membros da estrutura como se fossem variáveis independentes.

As estruturas são úteis quando você precisa organizar dados relacionados em uma única unidade. Elas são frequentemente usadas em conjunto com arrays e vetores para criar coleções de registros de dados.