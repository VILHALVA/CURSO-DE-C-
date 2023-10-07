# OPERADORES ARITMETICOS
Em C++, os operadores aritméticos são usados para realizar operações matemáticas em valores numéricos, como adição, subtração, multiplicação, divisão e outras. Aqui estão os operadores aritméticos básicos em C++:

1. **Adição (`+`)**: Realiza a adição de dois valores.

```cpp
int resultado = 5 + 3; // resultado contém 8
```

2. **Subtração (`-`)**: Realiza a subtração de dois valores.

```cpp
int resultado = 10 - 4; // resultado contém 6
```

3. **Multiplicação (`*`)**: Realiza a multiplicação de dois valores.

```cpp
int resultado = 6 * 7; // resultado contém 42
```

4. **Divisão (`/`)**: Realiza a divisão de dois valores.

```cpp
int resultado = 12 / 4; // resultado contém 3
```

Observe que a divisão de dois números inteiros resultará em um número inteiro. Se você deseja uma divisão com ponto flutuante, certifique-se de que pelo menos um dos operandos seja do tipo `float` ou `double`.

5. **Módulo (`%`)**: Calcula o resto da divisão entre dois valores.

```cpp
int resto = 17 % 4; // resto contém 1
```

6. **Incremento (`++`) e Decremento (`--`)**: Esses operadores são usados para aumentar ou diminuir o valor de uma variável em 1.

```cpp
int contador = 10;
contador++; // Incremento, agora contador é 11
contador--; // Decremento, agora contador é 10 novamente
```

7. **Operadores de Atribuição Combinada**: Eles permitem realizar uma operação e atribuir o resultado a uma variável na mesma linha.

```cpp
int numero = 5;
numero += 3; // Equivalente a numero = numero + 3; (numero contém 8)
numero -= 2; // Equivalente a numero = numero - 2; (numero contém 6)
numero *= 4; // Equivalente a numero = numero * 4; (numero contém 24)
numero /= 6; // Equivalente a numero = numero / 6; (numero contém 4)
```

8. **Ordem das Operações**: As operações aritméticas em C++ seguem a ordem padrão das operações matemáticas, conhecida como "PEMDAS" (Parênteses, Exponenciação, Multiplicação e Divisão da esquerda para a direita, Adição e Subtração da esquerda para a direita). Você pode usar parênteses para controlar a ordem das operações.

```cpp
int resultado = (5 + 3) * 2; // resultado contém 16 (5+3=8, 8*2=16)
```

Estes são os operadores aritméticos básicos em C++. Você pode usá-los para realizar uma variedade de cálculos matemáticos em seus programas.