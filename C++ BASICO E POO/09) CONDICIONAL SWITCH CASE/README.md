# ESTRUTURA CONDIONAL SWITCH CASE
A estrutura `switch-case` em C++ é usada para tomar decisões com base no valor de uma expressão. Ela permite que você avalie a expressão em relação a várias constantes ou valores de caso e execute o código correspondente ao valor correspondente. Aqui está a sintaxe básica do `switch-case`:

```cpp
switch (expressao) {
    case valor1:
        // Código a ser executado se a expressão for igual a valor1
        break;
    case valor2:
        // Código a ser executado se a expressão for igual a valor2
        break;
    // ...
    default:
        // Código a ser executado se a expressão não corresponder a nenhum caso
}
```

Aqui estão alguns exemplos de uso do `switch-case` em C++:

**Exemplo 1:** Um programa que exibe o dia da semana com base em um número (1 a 7).

```cpp
#include <iostream>
using namespace std;

int main() {
    int numeroDia;
    cout << "Digite um número de 1 a 7: ";
    cin >> numeroDia;

    switch (numeroDia) {
        case 1:
            cout << "Domingo" << endl;
            break;
        case 2:
            cout << "Segunda-feira" << endl;
            break;
        case 3:
            cout << "Terça-feira" << endl;
            break;
        case 4:
            cout << "Quarta-feira" << endl;
            break;
        case 5:
            cout << "Quinta-feira" << endl;
            break;
        case 6:
            cout << "Sexta-feira" << endl;
            break;
        case 7:
            cout << "Sábado" << endl;
            break;
        default:
            cout << "Número inválido" << endl;
    }

    return 0;
}
```

**Exemplo 2:** Um programa que determina o preço de um produto com base no código fornecido pelo usuário.

```cpp
#include <iostream>
using namespace std;

int main() {
    int codigoProduto;
    cout << "Digite o código do produto (1, 2, ou 3): ";
    cin >> codigoProduto;

    double preco;

    switch (codigoProduto) {
        case 1:
            preco = 10.99;
            break;
        case 2:
            preco = 19.99;
            break;
        case 3:
            preco = 5.99;
            break;
        default:
            cout << "Código de produto inválido" << endl;
            return 1; // Terminar o programa com código de erro
    }

    cout << "O preço do produto é: R$" << preco << endl;

    return 0;
}
```

Lembre-se de usar a instrução `break` após cada caso para evitar que a execução continue nos casos subsequentes. O bloco `default` é opcional e é executado quando nenhum dos casos corresponde à expressão.

A estrutura `switch-case` é útil quando você precisa tomar decisões com base em um valor discreto, como um número inteiro, caractere ou enumeração. Ela simplifica o código quando você tem várias opções a serem consideradas.