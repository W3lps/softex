    #include <iostream>
    #include "carro.h"

    using namespace std;
    
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