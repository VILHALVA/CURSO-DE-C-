# ESTRUTURA DE REPETIÇÃO WHILE
A estrutura de repetição `while` em C++ é usada para executar um bloco de código repetidamente enquanto uma condição específica permanece verdadeira. Ela é útil quando você não sabe o número exato de iterações que precisa realizar. Aqui está a sintaxe básica da estrutura `while`:

```cpp
while (condição) {
    // Código a ser repetido
}
```

Aqui estão alguns exemplos de uso da estrutura `while` em C++:

**Exemplo 1:** Contagem regressiva a partir de 10 até 1.

```cpp
#include <iostream>
using namespace std;

int main() {
    int contador = 10;

    while (contador >= 1) {
        cout << contador << " ";
        contador--;
    }
    cout << endl;

    return 0;
}
```

**Exemplo 2:** Solicitar ao usuário para adivinhar um número até que ele acerte.

```cpp
#include <iostream>
using namespace std;

int main() {
    int numeroSecreto = 42;
    int palpite;
    bool acertou = false;

    cout << "Adivinhe o número secreto (entre 1 e 100): ";

    while (!acertou) {
        cin >> palpite;

        if (palpite == numeroSecreto) {
            cout << "Parabéns! Você acertou." << endl;
            acertou = true;
        } else if (palpite < numeroSecreto) {
            cout << "Tente um número maior." << endl;
        } else {
            cout << "Tente um número menor." << endl;
        }
    }

    return 0;
}
```

**Exemplo 3:** Calcular a soma dos números de 1 a 100.

```cpp
#include <iostream>
using namespace std;

int main() {
    int soma = 0;
    int contador = 1;

    while (contador <= 100) {
        soma += contador;
        contador++;
    }

    cout << "A soma dos números de 1 a 100 é: " << soma << endl;

    return 0;
}
```

Em todos esses exemplos, a estrutura `while` é usada para repetir uma ação enquanto a condição especificada permanecer verdadeira. No primeiro exemplo, uma contagem regressiva é realizada, no segundo exemplo, o usuário adivinha um número, e no terceiro exemplo, a soma dos números de 1 a 100 é calculada. A estrutura `while` é flexível e útil quando você precisa de repetições com base em condições dinâmicas. Certifique-se de atualizar a condição dentro do loop para evitar loops infinitos.
