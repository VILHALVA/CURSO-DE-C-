# ESTRUTURA CONDICIONAL
A estrutura `if-else` é usada em C++ para tomar decisões condicionais em seu programa. Com ela, você pode executar diferentes blocos de código com base em uma condição booleana. Aqui está a sintaxe básica da estrutura `if-else`:

```cpp
if (condição) {
    // Código a ser executado se a condição for verdadeira
} else {
    // Código a ser executado se a condição for falsa
}
```

Aqui estão alguns exemplos de uso do `if-else` em C++:

**Exemplo 1:** Verificar se um número é positivo ou negativo.

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    if (numero > 0) {
        cout << "O número é positivo." << endl;
    } else if (numero < 0) {
        cout << "O número é negativo." << endl;
    } else {
        cout << "O número é zero." << endl;
    }

    return 0;
}
```

**Exemplo 2:** Determinar se um aluno foi aprovado ou reprovado com base em sua nota.

```cpp
#include <iostream>
using namespace std;

int main() {
    double nota;
    cout << "Digite a nota do aluno: ";
    cin >> nota;

    if (nota >= 6.0) {
        cout << "Aluno aprovado!" << endl;
    } else {
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}
```

**Exemplo 3:** Verificar se um número é par ou ímpar.

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O número é par." << endl;
    } else {
        cout << "O número é ímpar." << endl;
    }

    return 0;
}
```

Nesses exemplos, a estrutura `if-else` é usada para verificar as condições especificadas e executar o bloco de código apropriado com base no resultado da condição. Você pode usar `if-else` em cenários mais complexos com várias condições `if` e `else if` para tomar decisões mais elaboradas em seus programas C++.