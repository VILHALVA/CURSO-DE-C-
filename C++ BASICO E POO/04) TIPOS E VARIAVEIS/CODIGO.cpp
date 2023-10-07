#include <iostream>
using namespace std;

int main() {
    // Tipos de Dados Numéricos Inteiros
    int numeroInteiro = 42;
    short numeroCurto = 100;
    long numeroLongo = 1234567890;
    long long numeroLongoLongo = 1234567890123456789;

    // Tipos de Dados de Ponto Flutuante
    float salarioMensal = 2500.50;
    double pi = 3.14159265359;
    long double outroNumero = 12345.678901234567890123456789L;

    // Tipos de Dados Caractere
    char letra = 'A';
    char simbolo = '$';

    // Tipos de Dados Booleanos
    bool estaChovendo = false;
    bool temCafe = true;

    // Tipos de Dados de Texto (string)
    string nome = "João";
    string sobrenome = "Silva";

    // Constantes
    const int numeroMaximo = 100;
    const double taxaDeJuros = 0.05;

    // Exibindo valores das variáveis
    cout << "Número Inteiro: " << numeroInteiro << endl;
    cout << "Número Curto: " << numeroCurto << endl;
    cout << "Número Longo: " << numeroLongo << endl;
    cout << "Número Longo Longo: " << numeroLongoLongo << endl;
    
    cout << "Salário Mensal: " << salarioMensal << endl;
    cout << "Valor de Pi: " << pi << endl;
    cout << "Outro Número: " << outroNumero << endl;
    
    cout << "Letra: " << letra << endl;
    cout << "Símbolo: " << simbolo << endl;
    
    cout << "Está Chovendo? " << (estaChovendo ? "Sim" : "Não") << endl;
    cout << "Tem Café? " << (temCafe ? "Sim" : "Não") << endl;
    
    cout << "Nome Completo: " << nome << " " << sobrenome << endl;
    
    cout << "Número Máximo: " << numeroMaximo << endl;
    cout << "Taxa de Juros: " << taxaDeJuros << endl;

    return 0;
}
