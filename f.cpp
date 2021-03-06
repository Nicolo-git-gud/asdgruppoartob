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
/* restituisce la dimensione della lista */
bool list::isEmpty(const List &l)
{
    return (l->next == l);
}

int list::size(const List &l)
{
    int size = 0;
    node *tmp = l->next;
    while (tmp != l)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
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
/* restituisce l'elemento in posizione pos se presente; restituisce un elemento 
che per convenzione si decide che rappresenta l'elemento vuoto altrimenti*/
Elem list::get(int pos, const List &l)
{
    Elem vuoto = -123456789;
    if (pos > size(l) || l->next == l)
        return vuoto;
    int posizione = 0;
    node *scorro = l->next;
    while (pos != posizione)
    {
        posizione++;
        scorro = scorro->next;
    }
    return scorro->info;
}
/* modifica l'elemento in posizione pos, se la posizione e' ammissibile */
void list::set(int pos, Elem e, const List &l)
{
    //Come negli array e nei vector la posizione 0 è effettivamente quello che noi chiamiamo primo elemento
    if (pos > size(l) || l->next == l)
        throw std::string("err");
    int posizione = 0;
    node *scorro = l->next;
    while (pos != posizione)
    {
        posizione++;
        scorro = scorro->next;
    }
    scorro->info = e;
}
void list::addRear(Elem e, const List &l)
{
    node *aux = new node;
    aux->info = e;
    aux->next = l;
    aux->prev = l->prev;
    l->prev->next = aux;
    l->prev = aux;
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
    node *tmp = l->next;
    aux->info = e;
    l->next = aux;
    aux->next = tmp;
    tmp->prev = aux;
    aux->prev = l;
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

/* inserisce l'elemento in posizione pos, shiftando a destra gli altri elementi */
void list::add(int pos, Elem e, const List &l)
{
    //Come negli array e nei vector la posizione 0 è effettivamente quello che noi chiamiamo primo elemento
    if (pos > size(l))
        throw std::string("err");
        int posizione = 0;
        node *tmp = l->next;
    while(posizione!=pos){
        posizione ++;
        tmp = tmp->next;
    }
    node *aux = new node;
    aux->info = e;
    aux->next = tmp;
    aux->prev = tmp->prev;
    tmp->prev->next = aux;
    tmp->prev = aux;


   
   
    

    
   
}

/* cancella l'elemento in posizione pos dalla lista */
void list::removePos(int pos, const List &l)
{
    int posizione = 0;
    if (pos > size(l) || l->next == l)
        throw std::string("err");
    node *aux = l->next;
    while (pos != posizione)
    {
        posizione++;
        aux = aux->next;
    }
    node *tmp = aux;
    aux->prev->next = aux->next;
    aux->next->prev = aux->prev;
    delete tmp;
}

/* cancella tutte le occorrenze dell'elemento elem, se presenti, dalla lista */
void list::removeEl(Elem e, const List &l)
{
    int pos = 0;
    node *aux = l->next;
    while (aux->info != e && aux->next != l)
    {
        pos++;
        aux = aux->next;
    }
    if (aux->info == e)
    {
        removePos(pos, l);
        if (aux->next == l)
            return;
        return removeEl(e, l);
    }
}