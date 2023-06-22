#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;

     public:
     //construtor
     carro(int ano=0, float valor=0, float km=0){
        this->ano = ano;
        this->km = km;
        this->valor = valor;
     }


     void setano(int ano){
        this->ano = ano;
     }

    void setvalor(int valor){
        this->valor = valor;
     }
     
    void setkm(int km){
        this->km = km;
     }

     int getano(){
        return ano;
     }

     int getvalor(){
        return valor;
     }
     int getkm(){
        return km;
     }
};

int main() {
    carro palio;
    palio.setano(1995);
    palio.setvalor(25000); 
    palio.setkm(130000);

    cout << "Pálio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "KM: " << palio.getkm() << endl;
    cout << "Valor: " << palio.getvalor() << endl;

    carro jetta;
    jetta.setano(2023);
    jetta.setvalor(230000); 
    jetta.setkm(0);

    cout << "Jetta: \n";
    cout << "Ano: " << jetta.getano() << endl;
    cout << "KM: " << jetta.getkm() << endl;
    cout << "Valor: " << jetta.getvalor() << endl;
    
    carro a5;
    cout << "Audi a5: \n";
    cout << "Ano: " << a5.getano() << endl;
    cout << "KM: " << a5.getkm() << endl;
    cout << "Valor: " << a5.getvalor() << endl;
    return 0;
}