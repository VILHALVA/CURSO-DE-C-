# SINTAXE DA LINGUAGEM:
## 0) FUNDAMENTOS:
Aqui estão exemplos de código em C++ que utilizam operadores aritméticos, relacionais e lógicos, juntamente com explicações para cada um deles:

**Operadores Aritméticos:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    
    // Exemplo de operadores aritméticos
    int soma = a + b;        // Soma
    int subtracao = a - b;   // Subtração
    int multiplicacao = a * b;  // Multiplicação
    int divisao = a / b;     // Divisão
    int resto = a % b;       // Resto da divisão

    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Multiplicação: " << multiplicacao << endl;
    cout << "Divisão: " << divisao << endl;
    cout << "Resto: " << resto << endl;

    return 0;
}
```
Neste exemplo, os operadores aritméticos (`+`, `-`, `*`, `/` e `%`) são usados para realizar operações matemáticas básicas entre as variáveis `a` e `b`.

**Operadores Relacionais:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10;
    
    // Exemplo de operadores relacionais
    bool igual = (x == y);   // Igual a
    bool diferente = (x != y); // Diferente de
    bool maior = (x > y);    // Maior que
    bool menor = (x < y);    // Menor que
    bool maiorOuIgual = (x >= y); // Maior ou igual a
    bool menorOuIgual = (x <= y); // Menor ou igual a

    cout << "Igual a: " << igual << endl;
    cout << "Diferente de: " << diferente << endl;
    cout << "Maior que: " << maior << endl;
    cout << "Menor que: " << menor << endl;
    cout << "Maior ou igual a: " << maiorOuIgual << endl;
    cout << "Menor ou igual a: " << menorOuIgual << endl;

    return 0;
}
```
Neste exemplo, os operadores relacionais (`==`, `!=`, `>`, `<`, `>=` e `<=`) são usados para comparar as variáveis `x` e `y` e retornar valores booleanos representando os resultados das comparações.

**Operadores Lógicos:**
```cpp
#include <iostream>
using namespace std;

int main() {
    bool a = true, b = false;
    
    // Exemplo de operadores lógicos
    bool eLogico = (a && b); // E lógico (AND)
    bool ouLogico = (a || b); // OU lógico (OR)
    bool naoLogico = !a;     // NÃO lógico (NOT)

    cout << "E lógico: " << eLogico << endl;
    cout << "OU lógico: " << ouLogico << endl;
    cout << "NÃO lógico: " << naoLogico << endl;

    return 0;
}
```
Neste exemplo, os operadores lógicos (`&&`, `||` e `!`) são usados para realizar operações lógicas entre as variáveis booleanas `a` e `b`.

## 1) VARIAVEIS SIMPLES:
Aqui estão alguns exemplos de tipos primitivos de variáveis em C++ com explicações para cada um deles:

1. **Inteiro (int)**:
   ```cpp
   int idade = 25;
   ```
   - O tipo `int` é usado para armazenar números inteiros, como idade, contagens e índices. Ele não lida com números decimais. No exemplo acima, `idade` é uma variável do tipo `int` que armazena o valor 25.

2. **Ponto Flutuante (float e double)**:
   ```cpp
   float altura = 1.75;
   double peso = 68.5;
   ```
   - Os tipos `float` e `double` são usados para armazenar números com casas decimais. `float` é uma precisão de ponto flutuante simples, enquanto `double` é uma precisão dupla. No exemplo acima, `altura` é uma variável `float` que armazena 1.75 e `peso` é uma variável `double` que armazena 68.5.

3. **Caractere (char)**:
   ```cpp
   char letra = 'A';
   ```
   - O tipo `char` é usado para armazenar caracteres individuais, como letras, números ou símbolos. No exemplo acima, `letra` é uma variável do tipo `char` que armazena o caractere 'A'.

4. **Booleano (bool)**:
   ```cpp
   bool estaChovendo = true;
   ```
   - O tipo `bool` é usado para representar valores lógicos verdadeiro (`true`) ou falso (`false`). É comumente usado em expressões condicionais para controle de fluxo. No exemplo acima, `estaChovendo` é uma variável do tipo `bool` que indica que está chovendo.

5. **Tipo de Dado String (string)**:
   ```cpp
   #include <string>
   using namespace std;
   
   string nome = "Alice";
   ```
   - Embora não seja um tipo primitivo, a classe `string` da biblioteca padrão C++ é frequentemente usada para armazenar sequências de caracteres. É uma maneira conveniente de lidar com texto. No exemplo acima, `nome` é uma variável do tipo `string` que armazena o nome "Alice".

Esses são alguns dos tipos primitivos e comuns em C++, cada um com um propósito específico para armazenar diferentes tipos de dados. Lembre-se de que em C++, você pode declarar e inicializar variáveis usando esses tipos para armazenar e manipular dados em seu programa.

Vou criar um exemplo que envolva variáveis simples, ponteiros e entrada de dados (inputs) em C++. Vamos criar um programa simples que solicita ao usuário que insira dois números inteiros, realiza uma operação de soma entre eles e, em seguida, exibe o resultado.

```cpp
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Solicita ao usuário que insira dois números inteiros
    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    // Cria um ponteiro para int e atribui o endereço da variável num1 a ele
    int *ponteiroParaNum1 = &num1;

    // Realiza a soma usando o ponteiro
    int soma = *ponteiroParaNum1 + num2;

    // Exibe o resultado da soma
    cout << "A soma de " << *ponteiroParaNum1 << " e " << num2 << " é igual a " << soma << endl;

    return 0;
}
```

Neste exemplo:

1. Definimos duas variáveis simples `num1` e `num2` para armazenar os números que o usuário vai digitar.

2. Usamos `cin` para obter os valores de entrada do usuário e armazenamos esses valores nas variáveis `num1` e `num2`.

3. Criamos um ponteiro `ponteiroParaNum1` para um inteiro e atribuímos o endereço de memória da variável `num1` a ele usando o operador `&`.

4. Realizamos a soma dos valores usando o ponteiro `ponteiroParaNum1` e a variável `num2`.

5. Exibimos o resultado da soma na saída padrão.

## 2) ESTRUTURA CONDICIONAL:
### ESTRUTURA IF-ELSE:
A estrutura `if-else` é uma construção fundamental em linguagens de programação, incluindo C++, que permite tomar decisões com base em condições. Ela permite que um programa execute diferentes blocos de código com base na avaliação de uma expressão booleana (uma condição). Aqui está a sintaxe geral da estrutura `if-else` em C++:

```cpp
if (condição) {
    // Bloco de código a ser executado se a condição for verdadeira
} else {
    // Bloco de código a ser executado se a condição for falsa
}
```

- A `condição` é uma expressão que é avaliada como verdadeira (`true`) ou falsa (`false`).
- O bloco de código dentro do primeiro conjunto de chaves `{ }` (após o `if`) é executado se a condição for verdadeira.
- O bloco de código dentro do segundo conjunto de chaves `{ }` (após o `else`) é executado se a condição for falsa.

Aqui está um exemplo prático de como usar a estrutura `if-else` em C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O número digitado é par." << endl;
    } else {
        cout << "O número digitado é ímpar." << endl;
    }

    return 0;
}
```

Neste exemplo:

1. O programa pede ao usuário para inserir um número inteiro.
2. A estrutura `if-else` é usada para verificar se o número é par ou ímpar.
3. Se o número for divisível por 2 (ou seja, o resto da divisão por 2 é igual a 0), o programa exibe "O número digitado é par."
4. Caso contrário, se o número não for divisível por 2 (o resto não é 0), o programa exibe "O número digitado é ímpar."

A estrutura `if-else` é uma ferramenta poderosa para controlar o fluxo de execução em programas C++ com base em condições específicas. Ela permite que você tome decisões e execute o código apropriado com base nas circunstâncias.

### ESTRUTURA IF-ELSE, ELSE IF:
A estrutura `if-else if-else` é uma extensão da estrutura `if-else` em C++, que permite tomar decisões com base em múltiplas condições. Ela é útil quando você tem várias condições a serem verificadas em sequência e deseja executar o código associado à primeira condição verdadeira. Aqui está a sintaxe geral da estrutura `if-else if-else` em C++:

```cpp
if (condição1) {
    // Bloco de código a ser executado se a condição1 for verdadeira
} else if (condição2) {
    // Bloco de código a ser executado se a condição1 for falsa e a condição2 for verdadeira
} else {
    // Bloco de código a ser executado se todas as condições anteriores forem falsas
}
```

- A `condição1` é a primeira condição a ser verificada.
- O bloco de código dentro do primeiro conjunto de chaves `{ }` (após o primeiro `if`) é executado se `condição1` for verdadeira.
- Se `condição1` for falsa, o programa verifica `condição2`, e o bloco de código dentro do segundo conjunto de chaves `{ }` (após o `else if (condição2)`) é executado se `condição2` for verdadeira.
- Se nenhuma das condições anteriores for verdadeira, o bloco de código dentro do último conjunto de chaves `{ }` (após o `else`) é executado.

Aqui está um exemplo prático de como usar a estrutura `if-else if-else` em C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "Digite a nota do aluno: ";
    cin >> nota;

    if (nota >= 90) {
        cout << "A nota é A." << endl;
    } else if (nota >= 80) {
        cout << "A nota é B." << endl;
    } else if (nota >= 70) {
        cout << "A nota é C." << endl;
    } else if (nota >= 60) {
        cout << "A nota é D." << endl;
    } else {
        cout << "A nota é F." << endl;
    }

    return 0;
}
```

Neste exemplo:

1. O programa solicita ao usuário que insira uma nota.
2. A estrutura `if-else if-else` é usada para verificar a nota do aluno em relação às faixas de pontuação padrão.
3. O programa determina a nota com base na primeira condição verdadeira encontrada e exibe a nota correspondente.

A estrutura `if-else if-else` é útil quando você precisa fazer escolhas múltiplas e exclusivas com base em várias condições. Certifique-se de que as condições sejam verificadas em uma ordem lógica e que apenas uma das alternativas seja executada, mesmo que várias condições sejam verdadeiras.

### ESTRUTURA SWITCH:
A estrutura `switch` é uma construção de controle de fluxo em C++ que permite tomar decisões com base em valores inteiros ou constantes. É uma alternativa à estrutura `if-else if-else` quando você precisa verificar múltiplas opções com base no valor de uma única expressão. Aqui está a sintaxe geral da estrutura `switch` em C++:

```cpp
switch (expressao) {
    case valor1:
        // Bloco de código a ser executado se a expressão for igual a valor1
        break;

    case valor2:
        // Bloco de código a ser executado se a expressão for igual a valor2
        break;

    // Outros casos possíveis

    default:
        // Bloco de código a ser executado se nenhum dos casos anteriores for correspondido
}
```

- `expressao` é uma expressão cujo valor será comparado com os casos.
- Cada `case` representa um valor específico que `expressao` pode assumir.
- Se `expressao` for igual a um dos `case`, o bloco de código correspondente a esse `case` será executado.
- O `break` é usado para sair do `switch` após um `case` ser correspondido. Se o `break` não for usado, a execução continuará nos `case` seguintes, mesmo que eles não correspondam.
- O `default` é opcional e é executado se nenhum dos `case` corresponder a `expressao`.

Aqui está um exemplo prático de como usar a estrutura `switch` em C++:

```cpp
#include <iostream>
using namespace std;

int main() {
    int diaSemana;

    cout << "Digite um número de 1 a 7: ";
    cin >> diaSemana;

    switch (diaSemana) {
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

Neste exemplo:

1. O programa pede ao usuário que insira um número de 1 a 7.
2. A estrutura `switch` é usada para verificar o valor da variável `diaSemana` e executar o bloco de código correspondente ao dia da semana correspondente.
3. O `default` é usado para lidar com valores fora do intervalo esperado.

A estrutura `switch` é especialmente útil quando você precisa fazer uma série de verificações em uma única variável com base em seu valor. Certifique-se de usar `break` para evitar que a execução continue em casos subsequentes, a menos que seja essa a intenção.

## 3) ESTRUTURA DE REPETIÇÃO:
### ESTRUTURA FOR:
A estrutura `for` em C++ é uma das construções de controle de fluxo mais utilizadas e é usada para criar loops, permitindo que você execute um bloco de código repetidamente com base em uma condição específica. A estrutura `for` é frequentemente usada quando você sabe quantas vezes deseja repetir um determinado bloco de código. Aqui está a sintaxe geral da estrutura `for` em C++:

```cpp
for (inicialização; condição; atualização) {
    // Bloco de código a ser repetido enquanto a condição for verdadeira
}
```

- A `inicialização` é uma expressão que é executada uma vez antes do início do loop. Ela é geralmente usada para inicializar variáveis de controle do loop.
- A `condição` é uma expressão que é avaliada antes de cada iteração do loop. Se a condição for verdadeira, o loop continua a ser executado; se for falsa, o loop termina.
- A `atualização` é uma expressão que é executada após cada iteração do loop. Ela é geralmente usada para modificar as variáveis de controle do loop de forma que eventualmente a condição seja avaliada como falsa.

Aqui está um exemplo prático de como usar a estrutura `for` em C++ para imprimir os números de 1 a 5:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
```

Neste exemplo:

1. A `inicialização` é `int i = 1`, que inicializa a variável `i` com o valor 1.
2. A `condição` é `i <= 5`, que verifica se `i` é menor ou igual a 5. Enquanto essa condição for verdadeira, o loop continuará a ser executado.
3. A `atualização` é `i++`, que incrementa `i` em 1 a cada iteração.

O resultado será a impressão dos números de 1 a 5.

A estrutura `for` é muito flexível e pode ser usada para criar loops complexos, controlando várias variáveis e condições. É uma ferramenta poderosa para a repetição de código em situações em que você sabe o número de iterações necessárias.

### ESTRUTURA WHILE:
A estrutura `while` em C++ é uma construção de controle de fluxo usada para criar loops, permitindo que você execute um bloco de código repetidamente enquanto uma condição específica for verdadeira. A estrutura `while` é usada quando você não sabe exatamente quantas vezes um bloco de código deve ser repetido, mas deseja que ele continue até que a condição seja falsa. Aqui está a sintaxe geral da estrutura `while` em C++:

```cpp
while (condição) {
    // Bloco de código a ser repetido enquanto a condição for verdadeira
}
```

- A `condição` é uma expressão booleana (ou uma expressão que é avaliada como verdadeira ou falsa). Enquanto essa condição for verdadeira, o bloco de código dentro do `while` continuará a ser executado.
- O loop `while` pode continuar indefinidamente a menos que algo dentro do bloco de código faça com que a condição se torne falsa.

Aqui está um exemplo prático de como usar a estrutura `while` em C++ para contar de 1 até 5:

```cpp
#include <iostream>
using namespace std;

int main() {
    int contador = 1;

    while (contador <= 5) {
        cout << contador << " ";
        contador++;
    }
    cout << endl;

    return 0;
}
```

Neste exemplo:

1. Inicializamos uma variável `contador` com o valor 1.
2. Usamos a estrutura `while` para verificar se `contador` é menor ou igual a 5. Enquanto essa condição for verdadeira, o bloco de código dentro do `while` será executado.
3. Dentro do bloco de código, imprimimos o valor de `contador` e, em seguida, incrementamos `contador` em 1 com `contador++`.

O resultado será a impressão dos números de 1 a 5.

É importante garantir que a condição em um loop `while` eventualmente se torne falsa, caso contrário, o loop continuará indefinidamente, o que pode levar a um programa travado (loop infinito). Portanto, certifique-se de que algo dentro do bloco de código modifique a variável de controle de forma que a condição seja eventualmente falsa.

### ESTRUTURA DO-WHILE:
A estrutura `do-while` em C++ é uma construção de controle de fluxo semelhante à estrutura `while`, mas com uma diferença fundamental: o bloco de código dentro do `do-while` é executado pelo menos uma vez antes de verificar a condição. Isso significa que, ao contrário da estrutura `while`, o `do-while` garante que o bloco de código seja executado pelo menos uma vez, independentemente da condição. Aqui está a sintaxe geral da estrutura `do-while` em C++:

```cpp
do {
    // Bloco de código a ser executado pelo menos uma vez
} while (condição);
```

- O bloco de código dentro do `do` é executado antes de verificar a `condição`.
- A `condição` é uma expressão booleana que é avaliada após a primeira execução do bloco de código. Se a condição for verdadeira, o bloco de código continuará a ser executado; se for falsa, o loop `do-while` termina.

Aqui está um exemplo prático de como usar a estrutura `do-while` em C++ para solicitar que o usuário insira um número até que ele insira um número negativo:

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Digite um número (digite um número negativo para sair): ";
        cin >> numero;
    } while (numero >= 0);

    cout << "Você digitou um número negativo. O programa terminou." << endl;

    return 0;
}
```

Neste exemplo:

1. O programa solicita que o usuário insira um número no bloco de código dentro do `do`.
2. Mesmo que o usuário insira um número positivo, o bloco de código é executado pelo menos uma vez.
3. Após a entrada do usuário, a `condição` `numero >= 0` é verificada. Se o número for negativo, o loop `do-while` termina e o programa continua.
4. Caso contrário, o programa volta ao início do loop e solicita que o usuário insira outro número.

A estrutura `do-while` é útil quando você precisa que um bloco de código seja executado pelo menos uma vez, independentemente da condição, antes de verificar a condição. Isso é especialmente útil em situações em que você deseja garantir que o código dentro do loop seja executado antes de verificar se ele deve continuar.

## 4) VARIAVEIS COMPOSTAS:
Em C++, existem várias variáveis compostas que permitem armazenar coleções de dados. Vou apresentar alguns dos tipos mais comuns com exemplos de código e explicações para cada um deles:

### Array (Vetor):
   Um array é uma coleção de elementos do mesmo tipo, organizados em um índice numérico. Os arrays têm um tamanho fixo no momento da declaração.
   
   Exemplo:
   ```cpp
   int numeros[5] = {1, 2, 3, 4, 5};
   ```
   - Neste exemplo, declaramos um array chamado `numeros` que pode armazenar 5 valores inteiros. Os valores são inicializados durante a declaração.

### Vector (Vetor Dinâmico):
   Um vetor dinâmico é uma coleção de elementos do mesmo tipo, que pode crescer ou encolher dinamicamente durante a execução do programa.

   Exemplo:
   ```cpp
   #include <vector>
   using namespace std;

   vector<int> numeros;
   numeros.push_back(1);
   numeros.push_back(2);
   ```
   - Neste exemplo, usamos um `vector` para armazenar valores inteiros. Não é necessário especificar um tamanho fixo, e você pode adicionar elementos usando `push_back()`.

### String (Cadeia de Caracteres):
   A string é uma sequência de caracteres que representa texto.

   Exemplo:
   ```cpp
   string nome = "Alice";
   ```
   - Neste exemplo, declaramos uma variável `nome` do tipo `string` que armazena o texto "Alice".

### Struct (Estrutura):
   Uma struct é uma coleção de variáveis de diferentes tipos que podem ser agrupadas em uma única estrutura.

   Exemplo:
   ```cpp
   struct Pessoa {
       string nome;
       int idade;
   };

   Pessoa pessoa1;
   pessoa1.nome = "João";
   pessoa1.idade = 30;
   ```
   - Neste exemplo, criamos uma estrutura `Pessoa` com campos `nome` (string) e `idade` (int) e depois declaramos uma variável `pessoa1` do tipo `Pessoa` para armazenar informações sobre uma pessoa.

### Array de Strings:
   Um array de strings é um array de cadeias de caracteres.

   Exemplo:
   ```cpp
   string frutas[] = {"Maçã", "Banana", "Laranja"};
   ```
   - Neste exemplo, criamos um array de strings chamado `frutas` que contém três elementos, representando nomes de frutas.

### Matriz (Array Multidimensional):
   Uma matriz é uma coleção de elementos organizados em várias dimensões, como uma tabela bidimensional.

   Exemplo:
   ```cpp
   int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
   ```
   - Neste exemplo, declaramos uma matriz 3x3 de inteiros com valores predefinidos.

Estes são alguns dos tipos de variáveis compostas em C++ que permitem armazenar e manipular coleções de dados. Cada um deles tem suas próprias características e é útil para diferentes situações, dependendo dos requisitos do seu programa.

## 5) FUNÇÕES:
As funções em C++ são blocos de código que realizam tarefas específicas e podem ser chamados de outros lugares do programa. Elas são uma parte fundamental da programação modular e são usadas para dividir um programa em partes menores e mais gerenciáveis. As funções têm um nome, podem receber argumentos (parâmetros) e retornar um valor, se necessário. Aqui está uma visão geral das funções em C++:

Sintaxe básica de uma função:
```cpp
tipo_retorno nome_da_função(parâmetros) {
    // Corpo da função
    // Código para realizar uma tarefa específica
    return valor_retorno; // Opcional, dependendo do tipo de retorno
}
```

- `tipo_retorno`: É o tipo de dado que a função retorna. Pode ser `void` (se a função não retornar nenhum valor), int, double, string, ou qualquer outro tipo de dado válido em C++.
- `nome_da_função`: É o nome que você escolhe para a função.
- `parâmetros`: São variáveis que a função recebe como entrada. Eles são opcionais e podem ser usados para passar informações para a função.
- `corpo da função`: É o bloco de código que realiza a tarefa específica da função.
- `return valor_retorno`: É usado para retornar um valor da função. Esta parte é opcional se a função for do tipo `void`.

Aqui estão alguns exemplos de funções em C++:

1. Função simples sem parâmetros e sem valor de retorno (void):
```cpp
void saudacao() {
    cout << "Olá, mundo!" << endl;
}
```

2. Função com parâmetros e valor de retorno:
```cpp
int soma(int a, int b) {
    return a + b;
}
```

3. Função com parâmetros e sem valor de retorno (void):
```cpp
void imprimirMensagem(string mensagem) {
    cout << mensagem << endl;
}
```

4. Função com parâmetros padrão:
```cpp
int multiplicacao(int a, int b = 2) {
    return a * b;
}
```

5. Função recursiva (uma função que chama a si mesma):
```cpp
int fatorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}
```

Para usar uma função, você a chama pelo nome, fornecendo os argumentos necessários, se houver, e pode atribuir o valor de retorno a uma variável ou usá-lo de outras maneiras no seu programa.

Exemplo de chamada de função:
```cpp
int resultado = soma(10, 5);
imprimirMensagem("Isso é uma mensagem.");
int produto = multiplicacao(4); // Usará o valor padrão 2 para o segundo parâmetro.
int fat = fatorial(5);
```

As funções são uma parte essencial da organização e reutilização de código em C++, tornando o programa mais legível e fácil de manter.

## 6) CLASS POO:
A Programação Orientada a Objetos (POO) é baseada em quatro pilares fundamentais: encapsulamento, abstração, herança e polimorfismo. Vou fornecer um exemplo para cada um desses pilares em C++:

1. **Encapsulamento**:
   O encapsulamento é o conceito de esconder os detalhes internos de uma classe e fornecer uma interface pública para interagir com os objetos dessa classe. Ele ajuda a proteger os dados de uma classe, permitindo o acesso apenas por meio de métodos controlados.

   Exemplo em C++:
   ```cpp
   class ContaBancaria {
   private:
       double saldo;

   public:
       ContaBancaria() {
           saldo = 0.0;
       }

       void depositar(double valor) {
           if (valor > 0) {
               saldo += valor;
           }
       }

       void sacar(double valor) {
           if (valor > 0 && valor <= saldo) {
               saldo -= valor;
           }
       }

       double consultarSaldo() {
           return saldo;
       }
   };
   ```

   Neste exemplo, a classe `ContaBancaria` encapsula o saldo da conta bancária como um atributo privado e fornece métodos públicos (`depositar`, `sacar` e `consultarSaldo`) para interagir com o saldo. Isso garante que o saldo só possa ser modificado de maneira controlada e segura.

2. **Abstração**:
   A abstração é o processo de simplificar complexidades desnecessárias, focando apenas nos aspectos relevantes de um objeto. Ela permite que você modele objetos do mundo real em classes que representam apenas os atributos e comportamentos essenciais.

   Exemplo em C++:
   ```cpp
   class Animal {
   public:
       virtual void emitirSom() = 0; // Método abstrato (virtual puro)
   };

   class Cachorro : public Animal {
   public:
       void emitirSom() override {
           cout << "O cachorro late." << endl;
       }
   };
   ```

   Neste exemplo, a classe `Animal` define uma função virtual pura `emitirSom()`, que é uma abstração de um som genérico de animal. A classe `Cachorro` herda de `Animal` e fornece uma implementação concreta do som emitido por um cachorro.

3. **Herança**:
   A herança permite criar novas classes (subclasses) com base em classes existentes (superclasses). Isso permite a reutilização de código e a criação de hierarquias de classes.

   Exemplo em C++:
   ```cpp
   class Veiculo {
   public:
       void acelerar() {
           cout << "Veículo acelerando." << endl;
       }
   };

   class Carro : public Veiculo {
   public:
       void abrirPorta() {
           cout << "Porta do carro aberta." << endl;
       }
   };
   ```

   Neste exemplo, a classe `Veiculo` possui um método `acelerar()`, e a classe `Carro` herda de `Veiculo`, obtendo assim todos os métodos de `Veiculo`. Além disso, `Carro` tem um método adicional `abrirPorta()`.

4. **Polimorfismo**:
   O polimorfismo permite que objetos de diferentes classes sejam tratados de maneira uniforme, usando métodos com o mesmo nome. Pode ser alcançado por meio de funções virtuais e sobrescrita de métodos.

   Exemplo em C++:
   ```cpp
   class Animal {
   public:
       virtual void emitirSom() {
           cout << "Animal fazendo barulho." << endl;
       }
   };

   class Cachorro : public Animal {
   public:
       void emitirSom() override {
           cout << "O cachorro late." << endl;
       }
   };

   void fazerAnimalEmitirSom(Animal *animal) {
       animal->emitirSom();
   }
   ```

   Neste exemplo, temos uma função `fazerAnimalEmitirSom()` que aceita um ponteiro para um objeto `Animal`. Como `Cachorro` herda de `Animal` e sobrescreve o método `emitirSom()`, podemos passar um objeto `Cachorro` para essa função, demonstrando polimorfismo.

Esses exemplos ilustram os quatro pilares da Programação Orientada a Objetos em C++: encapsulamento, abstração, herança e polimorfismo. Cada um desses conceitos desempenha um papel importante na criação de código eficiente, modular e reutilizável.