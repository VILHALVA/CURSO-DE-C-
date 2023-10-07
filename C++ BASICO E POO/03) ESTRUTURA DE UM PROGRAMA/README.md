# ESTRUTURA BASICA DO PROGRAMA
A estrutura básica de um programa em C++ é composta por várias partes, incluindo diretivas de pré-processamento, declaração de bibliotecas, função principal e outras funções, se necessário. Aqui está uma estrutura típica de um programa C++:

```cpp
// Diretivas de pré-processamento
#include <iostream> // Inclui a biblioteca para entrada/saída padrão
using namespace std; // Permite usar símbolos da biblioteca padrão sem o prefixo std::

// Declaração de função (opcional)
void minhaFuncao() {
    // Código da função
}

// Função principal
int main() {
    // Código principal do programa

    // Exemplo de saída na tela
    cout << "Olá, mundo!" << endl;

    // Chamada de função (opcional)
    minhaFuncao();

    return 0; // Retorna um valor inteiro
}
```

Aqui está uma explicação das partes essenciais do programa:

1. **Diretivas de Pré-processamento**: Começamos com diretivas de pré-processamento, que incluem bibliotecas e definem configurações globais para o programa. `#include <iostream>` inclui a biblioteca para entrada/saída padrão, que permite a utilização de `cin` (entrada) e `cout` (saída) no programa.

2. **Declaração do Namespace**: A linha `using namespace std;` permite usar os símbolos da biblioteca padrão (`cin`, `cout`, etc.) sem o prefixo `std::`.

3. **Declaração de Função (Opcional)**: Você pode declarar funções antes da função `main()`. Isso é opcional, e você pode definir funções personalizadas que serão chamadas mais tarde no programa.

4. **Função `main()`**: A função `main()` é o ponto de entrada do programa C++. Todo programa C++ deve ter uma função `main()`. Ela é onde a execução do programa começa.

5. **Código Principal do Programa**: O código principal do programa está dentro da função `main()`. Aqui você escreve as instruções que serão executadas sequencialmente.

6. **Saída na Tela**: O exemplo `cout << "Olá, mundo!" << endl;` demonstra como imprimir texto na tela. `cout` é usado para saída padrão, e `<<` é o operador de inserção que coloca texto na saída. `endl` é usado para inserir uma quebra de linha.

7. **Chamada de Função (Opcional)**: Você pode chamar funções definidas anteriormente no programa, como a função `minhaFuncao()`.

8. **Retorno da Função `main()`**: A função `main()` deve retornar um valor inteiro. Normalmente, retorna 0 para indicar que o programa foi executado com sucesso. Outros valores podem ser usados para indicar erros ou situações específicas.

Lembre-se de que essa é uma estrutura básica e que os programas C++ podem se tornar muito mais complexos à medida que você adiciona mais funcionalidades e lógica ao código. Essa estrutura serve como um ponto de partida para criar programas em C++.