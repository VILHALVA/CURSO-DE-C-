#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> listaDeTarefas; // Declaração de um vetor de strings

    cout << "Lista de Tarefas" << endl;

    while (true) {
        cout << "Opções:" << endl;
        cout << "1. Adicionar tarefa" << endl;
        cout << "2. Listar tarefas" << endl;
        cout << "3. Remover tarefa" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opção: ";

        int opcao;
        cin >> opcao;

        if (opcao == 1) {
            cout << "Digite a nova tarefa: ";
            string tarefa;
            cin.ignore(); // Limpar o buffer de entrada
            getline(cin, tarefa);
            listaDeTarefas.push_back(tarefa);
            cout << "Tarefa adicionada com sucesso!" << endl;
        } else if (opcao == 2) {
            cout << "Tarefas:" << endl;
            for (size_t i = 0; i < listaDeTarefas.size(); i++) {
                cout << i + 1 << ". " << listaDeTarefas[i] << endl;
            }
        } else if (opcao == 3) {
            if (!listaDeTarefas.empty()) {
                cout << "Digite o número da tarefa a ser removida: ";
                int numeroTarefa;
                cin >> numeroTarefa;
                if (numeroTarefa >= 1 && static_cast<size_t>(numeroTarefa) <= listaDeTarefas.size()) {
                    listaDeTarefas.erase(listaDeTarefas.begin() + numeroTarefa - 1);
                    cout << "Tarefa removida com sucesso!" << endl;
                } else {
                    cout << "Número de tarefa inválido." << endl;
                }
            } else {
                cout << "A lista de tarefas está vazia." << endl;
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
