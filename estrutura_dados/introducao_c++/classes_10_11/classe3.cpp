#include <iostream>

using namespace std;

class carro {
    private:
    int ano;
    float valor, km;
    
    public:
    carro(int ano, float valor, float km);


    void setano(int ano);
    void setvalor(int valor);
    void setkm(int km);

    int getano();
    int getvalor();
    int getkm();

};

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

    return 0;
}


    carro::carro(int ano=0, float valor=0, float km=0){
        this->ano = ano;
        this->km = km;
        this->valor = valor;
     }


     void carro::setano(int ano){
        this->ano = ano;
     }

    void carro::setvalor(int valor){
        this->valor = valor;
     }
     
    void carro::setkm(int km){
        this->km = km;
     }

     int carro::getano(){
        return ano;
     }

     int carro::getvalor(){
        return valor;
     }
     int carro::getkm(){
        return km;
     }