# FUNCTION - FUNÇÕES
Funções em C++ são blocos de código que realizam uma tarefa específica e podem ser chamados (invocados) de outras partes do programa. Elas ajudam a organizar o código, tornando-o mais modular e mais fácil de entender, reutilizar e manter. As funções em C++ podem ter parâmetros de entrada e podem retornar valores.

Aqui estão os elementos básicos relacionados a funções em C++:

1. **Declaração de Função:**
   - Para declarar uma função em C++, você precisa especificar seu nome, tipo de retorno, parâmetros (se houver) e corpo.
   - Por exemplo: `int Soma(int a, int b);` declara uma função chamada `Soma` que recebe dois inteiros como parâmetros e retorna um inteiro.

2. **Definição de Função:**
   - A definição de uma função é onde você escreve o corpo da função, isto é, o código que será executado quando a função for chamada.
   - Por exemplo:

   ```cpp
   int Soma(int a, int b) {
       return a + b;
   }
   ```

3. **Chamada de Função:**
   - Para chamar (invocar) uma função, use seu nome seguido por parênteses. Os argumentos (valores) passados para a função são colocados entre os parênteses.
   - Por exemplo: `int resultado = Soma(5, 3);` chama a função `Soma` com os argumentos 5 e 3 e armazena o resultado na variável `resultado`.

4. **Valor de Retorno:**
   - A declaração de tipo de retorno (como `int` no exemplo acima) indica o tipo de dado que a função retorna. Se uma função não retornar nenhum valor, use `void`.
   - A palavra-chave `return` é usada para retornar um valor da função. O tipo de valor retornado deve ser compatível com o tipo de retorno declarado na função.

5. **Parâmetros de Função:**
   - Os parâmetros de função são variáveis ​​usadas para receber valores passados para a função. Eles são definidos na declaração da função.
   - Por exemplo: `int Soma(int a, int b)` tem dois parâmetros, `a` e `b`.

6. **Funções com void:**
   - Funções com `void` como tipo de retorno não retornam nenhum valor.
   - Exemplo: `void ExibirMensagem(string mensagem)` pode ser usado para exibir uma mensagem na tela.

7. **Escopo de Variáveis:**
   - As variáveis declaradas dentro de uma função têm escopo local, o que significa que elas são visíveis apenas dentro da função em que foram declaradas.

8. **Protótipos de Função:**
   - Um protótipo de função é uma declaração antecipada da função antes de seu uso real no código. Isso permite que o compilador saiba sobre a função antes de chamá-la.

Aqui está um exemplo simples de função em C++:

```cpp
#include <iostream>
using namespace std;

// Declaração de função
int Soma(int a, int b);

int main() {
    int x = 5, y = 3;
    
    // Chamada da função
    int resultado = Soma(x, y);

    cout << "A soma de " << x << " e " << y << " é " << resultado << endl;

    return 0;
}

// Definição da função
int Soma(int a, int b) {
    return a + b;
}
```

Neste exemplo, a função `Soma` é declarada no início do programa e definida posteriormente. Ela é chamada no `main()` para somar dois números e retornar o resultado, que é então exibido na tela. Funções são uma parte fundamental da programação em C++, permitindo que você quebre seu código em partes menores e mais gerenciáveis.