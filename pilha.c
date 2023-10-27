#include "pilha.h"

void inicia_lista(lista *l)
{
    l->primeiro = NULL;
}

int esta_vazia(lista *l)
{
    return l->primeiro == NULL;
}

int push(int i, lista *l)
{
    struct no *novo = cria_no(i);
    if (novo != NULL)
    {
        if (!esta_vazia(l))
        {
            novo->proximo = l->primeiro;
        }
        l->primeiro = novo;
        return 1;
        return 0;
    }
}

void mostra_pilha(lista *l)
{
    struct no *aux;
    if (esta_vazia(l))
    {
        printf("está vazia");
    }
    else
    {
        aux = l->primeiro;
        while (aux) // (aux != NULL)
        {
            printf("%d ", aux->info);
            aux = aux->proximo; // aux aponta o proximo
        }
    } 
    printf("\n---------------------\n");
}

int pop(lista *l)
{
    int i = l->primeiro->info;
    struct no *aux = l->primeiro;
    l->primeiro = l->primeiro->proximo;
    free(aux);
    return i;
}
