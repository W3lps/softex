#include <iostream>
#include <cstddef>

using namespace std;

int main() {
    int var1;
    //ponteiro
    int* point1;

    var1 = 5;
    point1=&var1;

    cout << var1 << endl;
    //endereço do primeiro byte do ponteiro
    cout << point1 << endl;
    //valor armazenado no ponteiro
    cout << *point1;

    int var2;
    // var2 = var1;
    // var2 = *point1;
    // cout << var2;

    // // var1 = 30;
    // *point1 = 30;

    // cout << var1;

    var2 = 50;
    // point1 = &var2;

    //cout << *point1;

    int* point2;
    //point2 sempre aponta para algum numero a nao ser que especifiquemos o vazio
    cout << *point2;
    point2 = NULL;
    cout << *point2;

    //podemos reservar um espaço na memoria acessivel somente pelo ponteiro
    int* pont3 = new int;
    *pont3 = 35;
    cout << *pont3;

    //nesse caso o pont3 vai armazenar o valor do point1 em seu proprio endereço
    //*pont3 = *point1;

    //nesse caso o pont3 vai apontar para o mesmo endereço do point1 causando 
    // um vazamento de memoria devido a perda da variavel
    //pont3 = point1;

    //assim nao causamos o vazamento de memoria
    delete pont3;
    pont3 = point1;


    return 0;
}