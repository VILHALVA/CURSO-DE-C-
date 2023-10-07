#include <iostream>
#include <string>

using namespace std;

// Classe base (superclasse)
class Veiculo {
public:
    string marca;
    int ano;

    Veiculo(string _marca, int _ano) : marca(_marca), ano(_ano) {}

    void Apresentar() {
        cout << "Marca: " << marca << endl;
        cout << "Ano: " << ano << endl;
    }

    virtual void Mover() {
        cout << "O veículo está se movendo." << endl;
    }
};

// Classe derivada (subclasse) Carro, herda de Veiculo
class Carro : public Veiculo {
public:
    Carro(string _marca, int _ano, string _modelo) : Veiculo(_marca, _ano), modelo(_modelo) {}

    void MostrarDetalhes() {
        Apresentar(); // Chama o método da classe base
        cout << "Modelo: " << modelo << endl;
    }

    void Mover() override {
        cout << "O carro está dirigindo." << endl;
    }

private:
    string modelo;
};

// Classe derivada (subclasse) Aviao, herda de Veiculo
class Aviao : public Veiculo {
public:
    Aviao(string _marca, int _ano, string _tipo) : Veiculo(_marca, _ano), tipo(_tipo) {}

    void MostrarDetalhes() {
        Apresentar(); // Chama o método da classe base
        cout << "Tipo: " << tipo << endl;
    }

    void Mover() override {
        cout << "O avião está voando." << endl;
    }

private:
    string tipo;
};

int main() {
    // Criando objetos das classes derivadas
    Carro carro("Toyota", 2022, "Corolla");
    Aviao aviao("Boeing", 2019, "Comercial");

    // Chamando métodos das classes derivadas
    cout << "Detalhes do Carro:" << endl;
    carro.MostrarDetalhes();
    carro.Mover(); // Chama o método da classe derivada

    cout << "\nDetalhes do Avião:" << endl;
    aviao.MostrarDetalhes();
    aviao.Mover(); // Chama o método da classe derivada

    return 0;
}
