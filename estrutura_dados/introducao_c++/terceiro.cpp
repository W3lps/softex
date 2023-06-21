#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a=5, b=2;

    // int soma = a + b;
    // cout << "Soma: " << soma << endl;
    cout << "Soma: " << a+b << endl;

    cout << "Subtração: " << a-b << endl;

    cout << "Quociente da divisão: " << a/b << endl;

    cout << "Divisão sem resto : " << a%b << endl;

    float div = (float)a/(float)b;
    cout << "Divisão: " << div << endl;

    float pot = pow(a,b);
    cout << "Potência: " << pot << endl;

    return 0;
}