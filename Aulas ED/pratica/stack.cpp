#include <iostream> //inclui a biblioteca de entrada e saída
#include "stack.h" //inclui o arquivo de cabeçalho da pilha

using namespace std; //usa o namespace std pra não precisar ficar escrevendo std:: antes de cada função

    stack::stack(){
        _size = 0; //inicializa o tamanho da pilha como 0
        _structure = new item_type[max_itens]; //aloca memória para a pilha. o new é usado para alocar memória dinamicamente (está determinado no stack.h)
    } //construtor

    stack::~stack(){
        delete[] _structure; //libera a memória alocada para a pilha, para o computador não entender como se a memória estivesse ocupada
    } //destrutor. o ~ indica que é um destrutor

    bool stack::is_full(){
        return (_size == max_itens); //retorna verdadeiro se o tamanho da pilha for igual ao número máximo de itens que a pilha pode armazenar
    } //verifica se a pilha está cheia

    bool stack::is_empty(){
        return (_size ==0); //retorna verdadeiro se o tamanho da pilha for igual a 0
    } //verifica se a pilha está vazia

    bool stack::push(item_type item){
        if (!is_full()){ //se não está cheio, adicione
            _structure[_size] = item;
            _size++;
            return true; //sucesso
        }
        throw std::runtime_error("ERRO: A pilha está cheia");
    } //adiciona um elemento no topo da pilha

    bool stack::pop(){
        if(!is_empty()){ //se não está vazia, pode deletar um item
            _structure[_size -1]; //tira o ponteiro do ultimo item e passa pro penultimo
            _size--;
            return true; //sucesso
        }
        throw std::runtime_error("ERRO: A pilha está vazia");
    } //remove o elemento do topo da pilha. pop significa "tirar" 

    item_type stack::top(){
        if(!is_empty()){ //se tiver vazia não tem elemento pra adicionar
            return _structure[_size-1]; //retorna o elemento do topo, o -1 é porque o vetor começa em 0 então o ultimo elemento é o tamanho -1
        }
        throw std::runtime_error("ERRO: A pilha está vazia");
    } //retorna o elemento do topo da pilha

    item_type stack::bot(){
        if(!is_empty()){ //se tiver vazia não tem elemento pra adicionar
            return _structure[0]; //retorna o elemento de baixo
        }
        throw std::runtime_error("ERRO: A pilha está vazia");
    } //retorna o elemento de baixo da pilha


    int stack::size(){
        return _size; //retorna o tamanho
    } //retorna o tamanho atual da pilha

    void stack::print(){
        if (!is_empty()){
            for(int i = 0; i < _size; i++ ){ //imprime
            cout << _structure[i] << "\n";
            }
            return; 
        }
        throw std::runtime_error("ERRO: A pilha está vazia");       
    } //imprime a pilha

    void stack::clear(){
        //chama o destrutor
        _size = 0; //zera o tamanho
    } //limpa a pilha

