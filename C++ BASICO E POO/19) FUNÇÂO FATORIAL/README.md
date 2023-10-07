# FUNÇÂO FATORIAL
A função fatorial é um exemplo clássico de função matemática e pode ser implementada em C++ de forma recursiva ou iterativa. O fatorial de um número inteiro não negativo `n`, denotado por `n!`, é o produto de todos os inteiros positivos de 1 a `n`. 

Aqui estão duas implementações da função fatorial em C++:

**Implementação Recursiva:**

```cpp
#include <iostream>

using namespace std;

// Função recursiva para calcular o fatorial de um número
unsigned long long Fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * Fatorial(n - 1);
    }
}

int main() {
    int numero;
    
    cout << "Digite um número inteiro não negativo: ";
    cin >> numero;
    
    if (numero < 0) {
        cout << "O fatorial não está definido para números negativos." << endl;
    } else {
        unsigned long long resultado = Fatorial(numero);
        cout << "O fatorial de " << numero << " é " << resultado << endl;
    }

    return 0;
}
```

**Implementação Iterativa:**

```cpp
#include <iostream>

using namespace std;

// Função iterativa para calcular o fatorial de um número
unsigned long long Fatorial(int n) {
    if (n < 0) {
        return 0; // Retorna 0 para números negativos
    } else {
        unsigned long long resultado = 1;
        for (int i = 1; i <= n; i++) {
            resultado *= i;
        }
        return resultado;
    }
}

int main() {
    int numero;
    
    cout << "Digite um número inteiro não negativo: ";
    cin >> numero;
    
    unsigned long long resultado = Fatorial(numero);
    
    if (numero < 0) {
        cout << "O fatorial não está definido para números negativos." << endl;
    } else {
        cout << "O fatorial de " << numero << " é " << resultado << endl;
    }

    return 0;
}
```

Ambos os exemplos permitem calcular o fatorial de um número inteiro não negativo, mas usando abordagens diferentes. A implementação recursiva usa uma chamada de função recursiva para calcular o fatorial, enquanto a implementação iterativa usa um loop `for`. Ambas as implementações produzirão o mesmo resultado. Certifique-se de escolher a abordagem que melhor se adapte às necessidades do seu programa.