#ifndef STACK_H

//tipo de dados os quais a pilha irá armazenar
//se precisar trocar os dados armazenados, basta trocar o tipo aqui
typedef std::string item_type; 
//o numero maximo de elementos que a pilha pode armazenar
const int max_itens = 100;

class stack{
    
    public:
    stack(); //construtor
    ~stack(); //destrutor. o ~ indica que é um destrutor
    bool is_full(); //verifica se a pilha está cheia
    bool is_empty(); //verifica se a pilha está vazia
    bool push(item_type item); //adiciona um elemento no topo da pilha
    bool pop(); //remove o elemento do topo da pilha. pop significa "tirar" 
    item_type top(); //retorna o elemento do topo da pilha
    item_type bot(); //retorna o elemento de baixo da pilha
    int size(); //retorna o tamanho atual da pilha
    void print(); //imprime a pilha
    void clear(); //limpa a pilha

    private:
    int _size; //tamanho atual da pilha
    item_type* _structure; //estrutura que armazena os elementos da pilha


};

#endif
