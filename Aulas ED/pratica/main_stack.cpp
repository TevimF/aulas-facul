#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    cout << "--- Insira seu nome ---" << endl;
    string nome;
    cin >> nome;
    cout << "Bem vindo, " << nome << '!' << endl;
    int resposta;
    stack pilha; // Cria a pilha fora do loop para que ela persista entre iterações
    do {
        cout << nome << ", o que voce deseja fazer?" << endl;
        cout << "1 - Adicionar um elemento na pilha" << endl;
        cout << "2 - Remover um elemento da pilha" << endl;
        cout << "3 - Verificar o elemento do topo da pilha" << endl;
        cout << "4 - Verificar o elemento de baixo da pilha" << endl;
        cout << "5 - Verificar o tamanho da pilha" << endl;
        cout << "6 - Imprimir a pilha" << endl;
        cout << "7 - Limpar a pilha" << endl;
        cout << "0 - Sair" << endl;
        cin >> resposta;
        cout << endl;

        switch (resposta) {
            case 1: {
                cout << "Digite o elemento que deseja adicionar na pilha: ";
                item_type item;
                cin >> item;
                try {
                    pilha.push(item);
                    cout << "Elemento adicionado com sucesso!" << endl;
                } catch(const std::exception& e) {
                    std::cerr << e.what() << endl;
                }
                break;
            }

            case 2: {
                cout << "Removendo um elemento..." << endl;
                try {
                    pilha.pop();
                    cout << "Elemento removido com sucesso!" << endl;
                } catch(const std::exception& e) {
                    std::cerr << e.what() << endl;
                }
                break;
            }

            case 3: {
                cout << "O elemento do topo da pilha é: ";
                try {
                    cout << pilha.top() << endl;
                } catch(const std::exception& e) {
                    std::cerr << e.what() << endl;
                }
                break;
            }

            case 4: {
                cout << "O elemento de baixo da pilha é: ";
                try {
                    cout << pilha.bot() << endl;
                } catch(const std::exception& e) {
                    std::cerr << e.what() << endl;
                }
                break;
            }

            case 5: {
                cout << "O tamanho da pilha é: ";
                cout << pilha.size() << endl;
                break;
            }

            case 6: {
                cout << "Imprimindo a pilha..." << endl;
                try {
                    pilha.print();
                } catch(const std::exception& e) {
                    std::cerr << e.what() << endl;
                }
                break;
            }

            case 7: {
                cout << "Limpando a pilha..." << endl;
                pilha.clear();
                break;
            }

            default:
                break;
        }
    } while (resposta != 0);

    cout << "Obrigado por usar o programa!" << endl;

    return 0;
}
