#include <iostream>
#include "h.h"
#include "assert.h"
using namespace list;
//In questo test provo tanti elementi;
int main()
{
    List l;
    createEmpty(l);
    addRear(5, l);
    addRear(6, l);
    addRear(7, l);
    addRear(8, l);
    std::cout << "Stampo la lista" << std::endl;
    print(l);
    std::cout << std::endl;
    std::cout << "Stampo la lista al contrario" << std::endl;
    reverse_print(l);
    removePos(2,l);
    assert(size(l) == 3);
    std::cout << "Stampo la lista" << std::endl;
    print(l);
    std::cout << std::endl;
    std::cout << "Stampo la lista al contrario" << std::endl;
    reverse_print(l);
    removePos(1,l);
    assert(size(l) == 2);
    std::cout << "Stampo la lista" << std::endl;
    print(l);
    std::cout << std::endl;
    std::cout << "Stampo la lista al contrario" << std::endl;
    reverse_print(l);
    
}