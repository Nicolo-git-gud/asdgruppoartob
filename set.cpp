#include <iostream>
#include "h.h"
using namespace list;
int main()
{
    List l;
    createEmpty(l);
    addFront(9, l);
    addFront(6, l);
    addFront(7, l);
    addFront(8, l);
    std::cout << "Stampo la lista" << std::endl;
    print(l);
    set(0, 2, l);
    std::cout << "Stampo la lista con modifica al primo elemento" << std::endl;
    print(l);
    set(1, 3, l);
    std::cout << "Stampo la lista con modifica ai primi due elementi" << std::endl;
    print(l);
    set(2, 4, l);
    std::cout << "Stampo la lista con modifica ai primi tre elementi" << std::endl;
    print(l);
    set(3, 5, l);
    std::cout << "Stampo la lista con modifica a tutti gli elementi" << std::endl;
    print(l);
}