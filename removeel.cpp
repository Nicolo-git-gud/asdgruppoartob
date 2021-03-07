#include <iostream>
#include "h.h"
#include "assert.h"
using namespace list;
int main()
{
    List l;
    createEmpty(l);
    addRear(5, l);
    addRear(6, l);
    addRear(5, l);
    addRear(8, l);
    std::cout << "Eseguo la print normale" << std::endl;
    print(l);
    std::cout << "Eseguo la print reverse" << std::endl;
    reverse_print(l);
    removeEl(5,l);
     std::cout << "Eseguo la print normale" << std::endl;
    print(l);
    std::cout << "Eseguo la print reverse" << std::endl;
    reverse_print(l);
    //clear(l);
}