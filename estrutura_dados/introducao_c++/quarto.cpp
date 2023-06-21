#include <iostream>

using namespace std;

//constante
#define pi 3.14;
#define curtir cout << "Curta esse video " << endl;

int somar(int x, int y){
    int soma = x + y;

    return soma;
}

void inscrever() {
    cout << "Se inscreva no canal" << endl;
}

int main() {

    inscrever();
    int s = somar(2, 10);
    cout << s << endl;

    cout << pi;

    curtir;

    return 0;
}