#include <iostream>

using namespace std;

int main() {
    float n1, n2;
    cout << "Informe a nota 1: ";
    cin >> n2;
    cout << "Informe a nota 2: ";
    cin >> n1;
    float media = (n1+n2) / 2;

    // if(media>=5) {
    //     cout << "Aluno aprovado\n";
    // };

    // if(media >=5) {
    //     cout << "Aluno aprovado\n";
    // } else {
    //     cout << "Aluno reprovado\n";
    // }

    if (media < 2.5) {
        cout << "Nota Final: D\n";
    } else if(media < 5) {
        cout << "Nota Final: C\n";
    } else if(media < 7.5) {
        cout << "Nota Final: B\n";
    } else {
        cout << "Nota Final: A\n";
    }
    return 0;

    float freq;
    cout << "Qual é a frequencia do aluno?\n";
    cin >> freq;

    if (media >= 5) {
        cout << "Aluno aprovado \n";
    } else {
        cout << "Aluno reprovado! \n";
    }

    if (media < 5 || freq < 75) {
        cout <<  "Aluno Reprovado \n";
    } else {
        cout << "Aluno Aprovado \n";
    }

    //operador ternario
    (media >= 5) ? cout << "Aprovado" : cout << "Reprovado";
}