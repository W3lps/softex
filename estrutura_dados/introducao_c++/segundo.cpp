#include <iostream>

using namespace std;

int main() {
    int inteiro = 5;
    int inteiro2 = 5.2;

    cout << inteiro << endl << inteiro2 << endl;

    float real;
    real = 5.2;
    float real2 = 5.2e99;

    cout << real << endl << real2 << endl;

    double doubleReal = 5.2e99;
    cout << doubleReal << endl;

    bool booleano;
    booleano = true;

    cout << booleano << endl;

    char letra;
    letra = 'a';
    cout << letra << endl;

    string palavra;
    palavra = "bola";
    cout << palavra << endl;

    int idade;
    cout << "Qual sua idade? " << endl;
    cin >> idade;

    cout << idade << endl;

    return 0;
}