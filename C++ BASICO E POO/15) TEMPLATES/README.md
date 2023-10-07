# TEMPLATES
Templates em C++ permitem que você escreva código genérico que pode funcionar com diferentes tipos de dados, proporcionando reutilização de código e maior flexibilidade. Os templates permitem criar funções e classes que podem aceitar tipos de dados específicos como argumentos, permitindo que você escreva código que funciona para inteiros, floats, strings e outros tipos de dados, sem a necessidade de criar funções ou classes separadas para cada tipo.

Aqui estão alguns conceitos-chave relacionados a templates em C++:

1. **Funções de Modelo (Function Templates):**
   - Você pode criar funções de modelo usando a palavra-chave `template`.
   - As funções de modelo podem aceitar parâmetros de tipo genérico.
   - Exemplo de uma função de modelo para encontrar o mínimo entre dois valores:

   ```cpp
   template <typename T>
   T Minimo(T a, T b) {
       return (a < b) ? a : b;
   }
   ```

2. **Classes de Modelo (Class Templates):**
   - Você pode criar classes de modelo para criar classes que aceitam tipos de dados genéricos.
   - Exemplo de uma classe de modelo para uma lista vinculada genérica:

   ```cpp
   template <typename T>
   class ListaVinculada {
   public:
       // Métodos da lista vinculada aqui
   private:
       // Definição de nó da lista vinculada
       struct Node {
           T data;
           Node* next;
       };
       Node* head;
   };
   ```

3. **Uso de Templates:**
   - Para usar uma função ou classe de modelo, você deve especificar o tipo de dados desejado entre `<` e `>` ao criar uma instância ou chamar uma função.
   - Exemplo de uso da função de modelo `Minimo`:

   ```cpp
   int resultado = Minimo(10, 5); // Chamando com inteiros
   double resultado2 = Minimo(3.14, 2.71); // Chamando com doubles
   ```

   - Exemplo de uso da classe de modelo `ListaVinculada`:

   ```cpp
   ListaVinculada<int> listaInteiros; // Lista de inteiros
   ListaVinculada<string> listaStrings; // Lista de strings
   ```

Templates são uma parte poderosa da programação C++ e são amplamente utilizados para criar código genérico que pode ser adaptado para diferentes tipos de dados. Eles permitem escrever código mais flexível e eficiente, reduzindo a duplicação de código e tornando seu código mais reutilizável.