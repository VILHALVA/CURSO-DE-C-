# ESTRUTURA DE REPETIÇÃO FOR
A estrutura de repetição `for` é usada em C++ para executar um bloco de código um número específico de vezes. Ela é especialmente útil quando você sabe previamente quantas vezes deseja repetir uma ação. Aqui está a sintaxe básica da estrutura `for`:

```cpp
for (inicialização; condição; incremento/decremento) {
    // Código a ser repetido
}
```

- `inicialização`: É onde você inicializa uma variável de controle que determina quando o loop deve terminar.
- `condição`: É uma expressão booleana que verifica se o loop deve continuar executando.
- `incremento/decremento`: É onde você atualiza a variável de controle para que, eventualmente, a condição se torne falsa e o loop termine.

Aqui estão alguns exemplos de uso da estrutura `for` em C++:

**Exemplo 1:** Imprimir números de 1 a 10.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
```

**Exemplo 2:** Calcular a soma dos números de 1 a 100.

```cpp
#include <iostream>
using namespace std;

int main() {
    int soma = 0;
    for (int i = 1; i <= 100; i++) {
        soma += i;
    }
    cout << "A soma dos números de 1 a 100 é: " << soma << endl;

    return 0;
}
```

**Exemplo 3:** Imprimir os elementos de um array.

```cpp
#include <iostream>
using namespace std;

int main() {
    int numeros[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
```

Em todos esses exemplos, a estrutura `for` é usada para repetir uma ação um número específico de vezes. O primeiro exemplo imprime números de 1 a 10, o segundo calcula a soma dos números de 1 a 100 e o terceiro imprime os elementos de um array. Você pode personalizar a inicialização, a condição e o incremento/decremento de acordo com sua necessidade específica em diferentes situações.