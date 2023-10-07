# ENTRADA DE DADOS
Em C++, você pode receber entrada de dados do usuário usando a biblioteca `iostream` em combinação com os objetos `cin`. Aqui estão os passos básicos para receber entrada de dados:

1. **Inclua a biblioteca `iostream`**: Para usar a entrada/saída padrão em C++, inclua a biblioteca `<iostream>` no início do seu programa.

```cpp
#include <iostream>
using namespace std;
```

2. **Declare uma Variável para Armazenar a Entrada**: Declare uma variável do tipo apropriado para armazenar o valor de entrada do usuário.

3. **Use `cin` para Receber a Entrada**: Use `cin` seguido do operador `>>` para receber a entrada do usuário e armazená-la na variável declarada.

4. **Exemplo**:

```cpp
#include <iostream>
using namespace std;

int main() {
    int numero;
    
    // Solicitar entrada do usuário
    cout << "Digite um número inteiro: ";
    
    // Receber entrada do usuário e armazenar na variável 'numero'
    cin >> numero;
    
    // Exibir o número inserido
    cout << "Você digitou: " << numero << endl;

    return 0;
}
```

Neste exemplo, o programa solicita ao usuário que insira um número inteiro. A entrada do usuário é lida usando `cin` e armazenada na variável `numero`. Em seguida, o programa exibe o número inserido.

Você pode usar `cin` para receber entradas de diferentes tipos de dados (inteiros, números de ponto flutuante, caracteres, etc.) da mesma maneira, desde que a variável de destino seja do tipo correto.

Lembre-se de que `cin` não lida bem com erros de entrada. Se o usuário inserir algo que não seja do tipo esperado (por exemplo, inserir um caractere em vez de um número inteiro), isso pode levar a comportamentos indesejados. Portanto, ao receber entradas do usuário, é uma boa prática verificar e validar a entrada para garantir que ela seja adequada ao seu programa.