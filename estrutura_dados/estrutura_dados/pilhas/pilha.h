typedef int TipoItem;
const int max_itens = 100;

class pilha{
    private:
    int tamanho;
    TipoItem* estrutura;

    public:
    pilha(); //construtora
    ~pilha(); // destrutura
    bool checkcheia();
    bool checkvazia();
    void inserir(TipoItem item);
    TipoItem remover();
    void imprimirPilha();
    int qualtamanho(); //lenght
};