# PASSAGEM DE PARAMETRO POR REFERÊNCIA PARA FUNÇÂO
Em C++, você pode passar parâmetros para uma função por valor ou por referência. A passagem por referência permite que uma função modifique o valor de uma variável original sem criar uma cópia dela, economizando memória e melhorando a eficiência.

Aqui está um exemplo de passagem de parâmetro por referência em C++:

```cpp
#include <iostream>

using namespace std;

// Função que modifica o valor de uma variável por referência
void ModificarPorReferencia(int& numero) {
    numero *= 2;
}

int main() {
    int valor = 10;

    cout << "Valor original: " << valor << endl;

    ModificarPorReferencia(valor); // Chamada da função passando por referência

    cout << "Valor modificado: " << valor << endl;

    return 0;
}
```

Neste exemplo, temos a função `ModificarPorReferencia` que recebe um parâmetro `numero` por referência usando o operador `&`. Quando a função é chamada, qualquer modificação feita dentro dela afetará diretamente a variável original que foi passada como argumento. No caso, o valor de `numero` é multiplicado por 2 dentro da função, e isso modifica diretamente o valor da variável `valor` na função `main`.

A saída deste programa será:

```
Valor original: 10
Valor modificado: 20
```

Observe que a passagem por referência é especialmente útil quando você deseja modificar o valor original de uma variável dentro de uma função. Ela evita a criação de cópias desnecessárias de variáveis, o que pode economizar memória e melhorar o desempenho do programa.

Além disso, a passagem por referência também pode ser usada com tipos complexos, como arrays, structs ou classes, para permitir a modificação direta desses objetos dentro de funções.