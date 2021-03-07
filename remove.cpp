#include <iostream>
#include "h.h"
#include "assert.h"
using namespace list;
//In questo test provo prima un elemento e poi due rimuovendo sia in posizione 1 che in posizione 2;
int main()
{
    List l;
    createEmpty(l);
    addRear(5, l);
    std::cout << "Stampo la lista" << std::endl;
    print(l);
    std::cout << std::endl;
    std::cout << "Stampo la lista al contrario" << std::endl;
    reverse_print(l);
    removePos(0, l);
    std::cout << "Stampo la lista" << std::endl;
    print(l);
    std::cout << std::endl;
    std::cout << "Stampo la lista al contrario" << std::endl;
    assert(size(l) == 0);
    reverse_print(l);
    addRear(5, l);
    addRear(6, l);
    assert(size(l) == 2);
    std::cout << "Stampo la lista" << std::endl;
    print(l);
    std::cout << std::endl;
    std::cout << "Stampo la lista al contrario" << std::endl;
    reverse_print(l);
    removePos(0, l);
    assert(size(l) == 1);
    std::cout << "Stampo la lista" << std::endl;
    print(l);
    std::cout << std::endl;
    std::cout << "Stampo la lista al contrario" << std::endl;
    reverse_print(l);
    addRear(7, l);
    std::cout << "Stampo la lista" << std::endl;
    print(l);
    std::cout << std::endl;
    std::cout << "Stampo la lista al contrario" << std::endl;
    reverse_print(l);
    removePos(1, l);
    assert(size(l) == 1);
    std::cout << "Stampo la lista" << std::endl;
    print(l);
    std::cout << std::endl;
    std::cout << "Stampo la lista al contrario" << std::endl;
    reverse_print(l);
}