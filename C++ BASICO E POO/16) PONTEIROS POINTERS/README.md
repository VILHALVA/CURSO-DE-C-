# PONTEIROS POINTERS
Ponteiros (pointers) em C++ são variáveis especiais que armazenam endereços de memória de outras variáveis. Eles são uma das características mais poderosas e complexas da linguagem C++ e são amplamente usados para manipular a memória, trabalhar com estruturas de dados avançadas e realizar operações de baixo nível. Ponteiros podem ser usados para acessar e modificar variáveis por meio de seu endereço de memória.

Aqui estão alguns conceitos-chave relacionados a ponteiros em C++:

1. **Declaração de Ponteiro:**
   - Para declarar um ponteiro, use o tipo de dado seguido pelo operador `*`. Por exemplo, `int* ponteiroInteiro;` declara um ponteiro para um inteiro.

2. **Atribuição de Endereço:**
   - Você pode atribuir o endereço de memória de uma variável a um ponteiro usando o operador de endereço `&`. Por exemplo, `ponteiroInteiro = &variavelInteira;` atribui o endereço de `variavelInteira` ao `ponteiroInteiro`.

3. **Acesso a Variáveis por Ponteiros:**
   - Para acessar o valor de uma variável por meio de um ponteiro, use o operador de desreferência `*`. Por exemplo, `int valor = *ponteiroInteiro;` armazena o valor apontado por `ponteiroInteiro` na variável `valor`.

4. **Operações Aritméticas de Ponteiros:**
   - Os ponteiros podem ser usados em operações aritméticas para percorrer arrays ou estruturas de dados. Por exemplo, `ponteiroInteiro++;` desloca o ponteiro para o próximo elemento do array.

5. **Ponteiro Nulo (Null Pointer):**
   - Um ponteiro que não aponta para nenhum endereço de memória é chamado de ponteiro nulo. Você pode atribuir um ponteiro nulo usando `nullptr` em C++11 ou posterior.

6. **Ponteiro para Função:**
   - Você pode criar ponteiros que apontam para funções e chamá-las por meio dos ponteiros.

Aqui está um exemplo simples de uso de ponteiros em C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero = 42;
    int* ponteiro = &numero;

    cout << "Valor de numero: " << numero << endl;
    cout << "Endereço de numero: " << &numero << endl;
    cout << "Valor apontado por ponteiro: " << *ponteiro << endl;
    cout << "Endereço armazenado em ponteiro: " << ponteiro << endl;

    *ponteiro = 100; // Modifica o valor de numero por meio do ponteiro

    cout << "Novo valor de numero: " << numero << endl;

    return 0;
}
```

Neste exemplo, um ponteiro `ponteiro` é declarado e inicializado com o endereço de memória da variável `numero`. O operador `*` é usado para acessar o valor apontado por `ponteiro`. O programa demonstra como usar um ponteiro para acessar e modificar o valor da variável `numero`.

Ponteiros são uma ferramenta poderosa, mas podem ser fontes de bugs e erros de acesso à memória se não forem usados com cuidado. Portanto, é importante entender completamente como funcionam e usá-los com responsabilidade.