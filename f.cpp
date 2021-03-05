// Implementa le funzioni sulle liste realizzate con strutture doppiamente collegate, circolari, con sentinella, senza ordinamento

// FILE DA MODIFICARE

#include "h.h"

using namespace list;

struct list::node
{ // descrivo qui, fuori dal namespace, come e' fatta la struttura node: i dettagli interni non saranno visibili dal main
    Elem info;
    node *prev;
    node *next;
};

/* crea la lista vuota */
void list::createEmpty(List &l)
{
    node *aux = new node;
    aux->next = aux;
    aux->prev = aux;
    l = aux;
}
/* "smantella" la lista svuotandola */
void list::clear(const List &l)
{
    node *aux = l->next;
    while (aux != l)
    {
        node *temp = aux;
        aux = aux->next;
        delete temp;
    }
    l->next = l;
    l->prev = l;
}
/* modifica l'elemento in posizione pos, se la posizione e' ammissibile */
void list::set(int pos, Elem e, const List &l)
{
}
void list::addRear(Elem e, const List &l)
{
    node *aux = new node;
    aux->info = e;
    aux->next = l;
    l->prev = aux;
    if (l->next == l)
    {
        l->next = aux;
        aux->prev = l;
    }
    else
    {
        node *scorro = l;
        while (scorro->next != l)
            scorro = scorro->next;
        scorro->next = aux;
        aux->prev = scorro;
    }
}
/* stampa la lista */
void print(const List &l)
{
    List q = l->next; // q "salta la sentinella" e va alla testa della lista
    while (q != l)
    { // avanza finche' non finisce la lista
        cout << q->info << "; ";
        q = q->next;
    }
}
void list::addFront(Elem e, const List &l)
{
    node *aux = new node;
    aux->info = e;
    aux->prev = l;
    if (l->next == l)
    {
        l->next = aux;
        aux->next = l;
        l->prev = aux;
    }
    else
    {
        l->next->prev = aux;
        aux->next = l->next;
        l->next = aux;
    }
}
void reverse_print(const List &l)
{

    node *a = l->prev;
    while (a != l)
    {
        std::cout << a->info << std::endl;
        a = a->prev;
    }
}