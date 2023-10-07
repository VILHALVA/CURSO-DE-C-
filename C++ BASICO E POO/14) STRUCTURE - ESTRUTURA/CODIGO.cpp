#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definição da estrutura Contato
struct Contato {
    string nome;
    string telefone;
    string email;
};

int main() {
    vector<Contato> listaDeContatos; // Vetor de estruturas Contato

    while (true) {
        cout << "Gerenciador de Contatos" << endl;
        cout << "Opções:" << endl;
        cout << "1. Adicionar contato" << endl;
        cout << "2. Listar contatos" << endl;
        cout << "3. Pesquisar contato" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";

        int opcao;
        cin >> opcao;

        if (opcao == 1) {
            Contato novoContato;
            cout << "Nome: ";
            cin.ignore();
            getline(cin, novoContato.nome);
            cout << "Telefone: ";
            getline(cin, novoContato.telefone);
            cout << "Email: ";
            getline(cin, novoContato.email);
            listaDeContatos.push_back(novoContato);
            cout << "Contato adicionado com sucesso!" << endl;
        } else if (opcao == 2) {
            cout << "Lista de Contatos:" << endl;
            for (size_t i = 0; i < listaDeContatos.size(); i++) {
                cout << "Nome: " << listaDeContatos[i].nome << endl;
                cout << "Telefone: " << listaDeContatos[i].telefone << endl;
                cout << "Email: " << listaDeContatos[i].email << endl;
                cout << "-----------------------" << endl;
            }
        } else if (opcao == 3) {
            string nomePesquisa;
            cout << "Digite o nome para pesquisar: ";
            cin.ignore();
            getline(cin, nomePesquisa);
            bool encontrado = false;
            for (size_t i = 0; i < listaDeContatos.size(); i++) {
                if (listaDeContatos[i].nome == nomePesquisa) {
                    cout << "Contato encontrado:" << endl;
                    cout << "Nome: " << listaDeContatos[i].nome << endl;
                    cout << "Telefone: " << listaDeContatos[i].telefone << endl;
                    cout << "Email: " << listaDeContatos[i].email << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) {
                cout << "Contato não encontrado." << endl;
            }
        } else if (opcao == 4) {
            cout << "Saindo do programa." << endl;
            break;
        } else {
            cout << "Opção inválida. Tente novamente." << endl;
        }
    }

    return 0;
}
