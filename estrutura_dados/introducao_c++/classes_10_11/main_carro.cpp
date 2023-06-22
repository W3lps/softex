#include <iostream>
#include "carro.h"

using namespace std;

int main() {
    carro palio(1995, 25000, 130000);

    cout << "Pálio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "KM: " << palio.getkm() << endl;
    cout << "Valor: " << palio.getvalor() << endl;

    carro jetta(2023, 230000, 0);

    cout << "Jetta: \n";
    cout << "Ano: " << jetta.getano() << endl;
    cout << "KM: " << jetta.getkm() << endl;
    cout << "Valor: " << jetta.getvalor() << endl;

    system("pause");
    return 0;
}