# ESTRUTURA DE REPETIÇÃO DO-WHILE
A estrutura de repetição `do-while` em C++ é semelhante à estrutura `while`, mas com uma diferença fundamental: o código dentro do bloco é executado pelo menos uma vez antes de verificar a condição. Isso significa que, independentemente da condição ser verdadeira ou falsa no início, o bloco de código será executado pelo menos uma vez. Aqui está a sintaxe básica da estrutura `do-while`:

```cpp
do {
    // Código a ser repetido
} while (condição);
```

Aqui estão alguns exemplos de uso da estrutura `do-while` em C++:

**Exemplo 1:** Solicitar ao usuário um número até que ele insira um número maior que 10.

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Digite um número maior que 10: ";
        cin >> numero;
    } while (numero <= 10);

    cout << "Número válido: " << numero << endl;

    return 0;
}
```

**Exemplo 2:** Realizar uma contagem regressiva de 10 a 1 usando `do-while`.

```cpp
#include <iostream>
using namespace std;

int main() {
    int contador = 10;

    do {
        cout << contador << " ";
        contador--;
    } while (contador >= 1);
    
    cout << endl;

    return 0;
}
```

**Exemplo 3:** Calcular a soma dos números digitados pelo usuário até que ele insira 0.

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    int soma = 0;

    do {
        cout << "Digite um número (ou 0 para encerrar): ";
        cin >> numero;
        soma += numero;
    } while (numero != 0);

    cout << "A soma dos números é: " << soma << endl;

    return 0;
}
```

A principal característica do `do-while` é que o bloco de código é executado pelo menos uma vez, independentemente da condição ser verdadeira ou falsa inicialmente. Isso o torna útil quando você precisa garantir que uma determinada ação seja executada pelo menos uma vez antes de verificar a condição de parada.
