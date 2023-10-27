#include <time.h>
#include "pilha.h"

int main() {
    lista p;
    inicia_lista(&p);
    srand(time(0));
    do{
        if(rand() % 2 == 0){
            push(rand() % 10, &p);
            mostra_pilha(&p);
        }
        else {
            if(!esta_vazia(&p)){
                printf("%d foi desempilhado\n", pop(&p));
            }
        }
    } while (!esta_vazia(&p));
    return 0;
}