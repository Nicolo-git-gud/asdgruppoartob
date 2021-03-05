#include <iostream>
#include "h.h"
using namespace list;
int main()
{
    List l;
    createEmpty(l);
    addRear(3, l);
    addRear(4, l);
    addFront(2,l);
    addFront(1,l);
    addRear(5, l);
    addRear(6, l);
    std::cout << "Eseguo la print normale" << std::endl;
    print(l);
    std::cout << "Eseguo la print reverse" << std::endl;
    reverse_print(l);
    //clear(l);
}