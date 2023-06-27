#include <iostream>
#include "pilha.h"

using namespace std;

int main() {
    pilha pilha1;
    TipoItem item;
    int opcao;
    cout << "Programa gerador de pilha: \n";

    do {
        cout << "Digite 0 para parar o programa! \n";
        cout << "Digite 1 para inserir um elemento! \n";
        cout << "Digite 2 para remover um elemento! \n";
        cout << "Digite 3 para imprimir a pilha \n";
        cout << "Digite 4 para verificar o tamanho da pilha \n";
        cout << "Digite 5 para verificar se a pilha está vazia \n";
        cout << "Digite 6 para verificar se a pilha está cheia \n";
        cin >> opcao;

        if (opcao == 1) {
            cout << "Digite o elemento a ser inserido: \n";
            cin >> item;
            pilha1.inserir(item);
        } else if (opcao == 2){
            pilha1.remover();
            cout << "Elemento removido: " << item << endl;
        } else if (opcao == 3) {
            pilha1.imprimirPilha();
        } else if (opcao == 4) {
            int tamanho = pilha1.qualtamanho();
            cout << "O tamanho da pilha é: " << tamanho << endl;
        } else if (opcao == 5) {
           bool status = pilha1.checkvazia();
            if (status) {
                cout << "A pilha está vazia! \n";
            } else {
                cout << "A pilha não está vazia \n";
            }
        } else if (opcao == 6) {
           bool status = pilha1.checkcheia();
            if (status) {
                cout << "A pilha está cheia! \n";
            } else {
                cout << "A pilha não está cheia \n";
            }
        }
    } while (opcao != 0);
}