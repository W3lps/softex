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