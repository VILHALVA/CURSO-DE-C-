# FUNÇÕES COM ARGUMENTOS VARIÁVEIS
Em C++, é possível criar funções que aceitam um número variável de argumentos usando o mecanismo de argumentos de tamanho variável (variadic arguments). Isso é feito usando a elipse `...` como parte da lista de argumentos da função e a biblioteca `<cstdarg>` para acessar os argumentos. As funções variádicas são úteis quando você deseja criar funções flexíveis que podem lidar com diferentes quantidades de argumentos.

Aqui está um exemplo de como criar uma função variádica que calcula a média de uma lista de números:

```cpp
#include <iostream>
#include <cstdarg>

using namespace std;

// Função variádica para calcular a média de uma lista de números
double CalcularMedia(int quantidade, ...) {
    va_list args;         // Declaração da lista de argumentos
    va_start(args, quantidade); // Inicialização da lista de argumentos

    double soma = 0.0;

    for (int i = 0; i < quantidade; i++) {
        double numero = va_arg(args, double); // Obter próximo argumento
        soma += numero;
    }

    va_end(args); // Finalização da lista de argumentos

    if (quantidade > 0) {
        return soma / quantidade;
    } else {
        return 0.0;
    }
}

int main() {
    // Exemplo de chamada da função variádica
    double media1 = CalcularMedia(3, 10.5, 20.0, 30.5);
    double media2 = CalcularMedia(5, 5.0, 7.0, 9.0, 11.0, 13.0);

    cout << "Média 1: " << media1 << endl;
    cout << "Média 2: " << media2 << endl;

    return 0;
}
```

Neste exemplo, a função `CalcularMedia` aceita um número variável de argumentos. A função `va_start` é usada para inicializar a lista de argumentos, `va_arg` é usada para obter cada argumento individualmente e `va_end` é usada para finalizar a lista de argumentos.

Na função `main`, mostramos como chamar a função `CalcularMedia` com diferentes quantidades de argumentos. Ela calcula a média dos números passados como argumentos e retorna o resultado.

Tenha em mente que funções variádicas podem ser poderosas, mas também requerem cuidado ao garantir que a quantidade e os tipos de argumentos correspondam ao que a função espera. Além disso, é importante lembrar de finalizar a lista de argumentos usando `va_end` para evitar vazamentos de memória.