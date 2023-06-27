#include <iostream>
#include "pilha.h"

using namespace std;

    pilha::pilha()
    {
        tamanho = 0;
        estrutura = new TipoItem[max_itens];
    }
    pilha::~pilha() // destrutora
    {
        delete [] estrutura;
    } 
    bool pilha::checkcheia()
    {
        return (tamanho == max_itens);
    }
    bool pilha::checkvazia()
    {
          return (tamanho == 0);
    }
    void pilha::inserir(TipoItem item)
    {
        if (checkcheia()){
            cout << "A pilha está cheia, não é possível inserir esse elemento" << endl;
        } else {
            estrutura[tamanho] = item;
            tamanho++;
        }
    }
    TipoItem pilha::remover() 
    {
        if (checkvazia()){
            cout << "A pilha está vazia, não é possível retirar um elemento" << endl;
            return 0;
        } else {
            tamanho --;
            return estrutura[tamanho];
        }
    }
    void pilha::imprimirPilha()
    {
        cout << "Pilha [ ";
        for (int i=0; i<tamanho; i++) {
            cout << estrutura[i] << " ";
        };
        cout << " ] \n";
    }
    int pilha::qualtamanho()//lenght
    {
        return tamanho;
    } 