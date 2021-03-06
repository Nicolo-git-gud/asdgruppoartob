#include <iostream>
#include "h.h"
using namespace list;
int main()
{
    List l;
    createEmpty(l);
    std::cout << "testo la size" << std::endl;
    std::cout << size(l);
    addFront(5, l);
    std::cout << "testo la size" << std::endl;
    std::cout << size(l);
    addFront(6, l);
    std::cout << "testo la size" << std::endl;
    std::cout << size(l);
    addFront(7, l);
    std::cout << "testo la size" << std::endl;
    std::cout << size(l);
    addFront(8, l);
    std::cout << "testo la size" << std::endl;
    std::cout << size(l);
    std::cout << "Eseguo la print normale " << std::endl;
    print(l);
    //clear(l);
}