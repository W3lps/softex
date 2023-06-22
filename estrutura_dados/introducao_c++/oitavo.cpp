#include <iostream>

using namespace std;

int main() {
    //ALOCAÇÃO ESTÁTICA

    // int vet[4];
    // vet[0] = 5;
    // vet[1] = 10;

    //nessa notação os 2 últimos elementos recebem zero.
    // int vet[4] = {5, 10};

    // cout << vet[2] << endl; == 0

    // for (int i=0; i<4; i++) {
    //     cout << vet[i] << endl;
    // }

    // int x = sizeof(vet); //tamanho de bytes
    // int y = sizeof(int);
    // cout << "Tamanho do inteiro: " << y << endl;
    // cout << "Tamanho do Vetor (4 int): " << x << endl; //vet = 4 bits

    // ALOCAÇÃO DINÂMICA
    int tamanho;
    cout << "Digite o tamanho do vetor!" << endl;
    cin >> tamanho;
    int* vetor = new int[tamanho];
    
    for (int i=0; i<tamanho; i++){
        cout << "Digite o elemento " << i+1 << " do vetor: " << endl;
        cin >> vetor[i];
    }

    for(int i=0; i<tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    delete [] vetor;

 return 0;   
}