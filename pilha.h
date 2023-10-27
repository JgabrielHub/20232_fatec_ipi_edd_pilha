#include "no.h"

typedef struct
{
    struct no *primeiro;
} lista;

void inicia_lista(lista *);

int esta_vazia(lista *);

int push(int, lista *);

void mostra_pilha(lista *);

int pop(lista *);
