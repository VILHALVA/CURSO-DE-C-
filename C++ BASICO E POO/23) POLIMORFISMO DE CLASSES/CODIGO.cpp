#include <iostream>
#include <vector>

using namespace std;

// Classe abstrata (superclasse) para representar formas geométricas
class Forma {
public:
    virtual double CalcularArea() const = 0;
    virtual void Desenhar() const = 0;
};

// Classes derivadas (subclasses) representando formas específicas
class Retangulo : public Forma {
private:
    double largura;
    double altura;

public:
    Retangulo(double _largura, double _altura) : largura(_largura), altura(_altura) {}

    double CalcularArea() const override {
        return largura * altura;
    }

    void Desenhar() const override {
        cout << "Desenhando um retângulo de largura " << largura << " e altura " << altura << endl;
    }
};

class Circulo : public Forma {
private:
    double raio;

public:
    Circulo(double _raio) : raio(_raio) {}

    double CalcularArea() const override {
        return 3.14159 * raio * raio;
    }

    void Desenhar() const override {
        cout << "Desenhando um círculo de raio " << raio << endl;
    }
};

int main() {
    vector<Forma*> formas;
    formas.push_back(new Retangulo(5.0, 3.0));
    formas.push_back(new Circulo(2.5));

    for (const Forma* forma : formas) {
        forma->Desenhar();
        cout << "Área: " << forma->CalcularArea() << endl;
        cout << endl;
    }

    for (Forma* forma : formas) {
        delete forma;
    }

    return 0;
}
