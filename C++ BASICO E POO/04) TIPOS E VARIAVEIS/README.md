Em C++, os tipos de dados são usados para definir o tipo de valor que uma variável pode armazenar. Aqui estão alguns dos tipos de dados básicos em C++ e como definir variáveis com eles:

1. **Tipos de Dados Numéricos Inteiros**:
   - `int`: Representa números inteiros, positivos e negativos. Exemplo: `int idade = 30;`.
   - `short`: Representa inteiros curtos (geralmente 2 bytes).
   - `long`: Representa inteiros longos (geralmente 4 bytes ou mais).
   - `long long`: Representa inteiros longos longos (geralmente 8 bytes ou mais).

```cpp
int numero = 42;
short numeroCurto = 100;
long numeroLongo = 1234567890;
```

2. **Tipos de Dados de Ponto Flutuante**:
   - `float`: Representa números de ponto flutuante com precisão simples.
   - `double`: Representa números de ponto flutuante com precisão dupla (mais precisa).
   - `long double`: Representa números de ponto flutuante com maior precisão (mais raro).

```cpp
float salario = 2500.50;
double pi = 3.14159265359;
```

3. **Tipos de Dados Caractere**:
   - `char`: Representa um caractere único. Exemplo: `char letra = 'A';`.

```cpp
char grade = 'B';
```

4. **Tipos de Dados Booleanos**:
   - `bool`: Representa valores booleanos, `true` (verdadeiro) ou `false` (falso).

```cpp
bool estaChovendo = false;
```

5. **Tipos de Dados de Texto**:
   - `string`: Representa sequências de caracteres. Para usar `string`, você deve incluir a biblioteca `<string>`.
   
```cpp
#include <string>
using namespace std;

string nome = "João";
```

6. **Tipos de Dados Personalizados (Classes)**:
   - Você pode criar seus próprios tipos de dados personalizados usando classes. Isso é parte do paradigma de programação orientada a objetos (POO) em C++.

```cpp
class Pessoa {
public:
    string nome;
    int idade;
};

Pessoa pessoa1;
pessoa1.nome = "Alice";
pessoa1.idade = 25;
```

7. **Constantes**:
   - Você também pode definir constantes usando a palavra-chave `const` para criar valores que não podem ser alterados após a inicialização.

```cpp
const int numeroMaximo = 100;
```

8. **Variáveis sem Tipo Definido**:
   - C++ também oferece um tipo de dado `auto` que pode ser usado para declarar variáveis sem especificar explicitamente o tipo. O tipo é inferido com base no valor atribuído.

```cpp
auto x = 42; // x será do tipo int
```

É importante escolher o tipo de dado apropriado para suas variáveis, levando em consideração os requisitos de memória, faixa de valores possíveis e precisão necessária. Além disso, é boa prática inicializar variáveis no momento da declaração para evitar valores indesejados.

Lembre-se de que C++ é uma linguagem de tipagem estática, o que significa que o tipo de dado de uma variável é definido em tempo de compilação e não pode ser alterado durante a execução do programa.