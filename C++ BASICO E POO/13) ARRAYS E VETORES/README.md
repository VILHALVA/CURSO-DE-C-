# ARRAYS E VETORES
Em C++, arrays e vetores (ou arrays dinâmicos) são usados para armazenar coleções de elementos do mesmo tipo. No entanto, eles têm algumas diferenças significativas em termos de tamanho e alocação de memória. Vamos explorar esses conceitos e fornecer exemplos para ambos.

**Arrays:**
- Em C++, um array é uma coleção fixa de elementos do mesmo tipo.
- O tamanho de um array é definido no momento da declaração e não pode ser alterado.
- Os elementos de um array são armazenados em locais de memória adjacentes.
- A notação de índice é usada para acessar elementos de um array.
- Arrays são alocados na pilha (stack) da memória.
- Exemplo:

```cpp
int numeros[5]; // Declaração de um array de inteiros com tamanho 5

numeros[0] = 1; // Atribuindo valor ao primeiro elemento
numeros[1] = 2; // Atribuindo valor ao segundo elemento
// ...
```

**Vetores (Arrays Dinâmicos):**
- Em C++, um vetor (também chamado de array dinâmico) é uma coleção de elementos do mesmo tipo, mas o tamanho pode ser alterado durante a execução do programa.
- Vetores são criados usando a classe `std::vector` da biblioteca padrão de C++.
- Vetores alocam memória no heap (pilha) e, portanto, não têm limitações rígidas de tamanho como arrays.
- Os elementos de um vetor são acessados usando o operador de índice [] ou a função `at()`.
- Vetores oferecem várias funções úteis, como `push_back()`, `pop_back()`, `size()`, etc.
- Exemplo:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros; // Declaração de um vetor de inteiros

    numeros.push_back(1); // Adicionando elementos ao vetor
    numeros.push_back(2);
    numeros.push_back(3);

    cout << "Primeiro elemento: " << numeros[0] << endl;
    cout << "Tamanho do vetor: " << numeros.size() << endl;

    return 0;
}
```

Neste exemplo, um vetor de inteiros é declarado e manipulado. O vetor pode crescer dinamicamente com o uso de `push_back()`, e a função `size()` é usada para determinar o tamanho atual do vetor.

Resumindo, arrays são estruturas de dados fixas com tamanho definido durante a compilação, enquanto vetores (arrays dinâmicos) são flexíveis em tamanho e podem crescer ou diminuir conforme necessário durante a execução do programa. Vetores são preferíveis na maioria das situações, pois oferecem mais funcionalidades e evitam problemas de estouro de buffer.