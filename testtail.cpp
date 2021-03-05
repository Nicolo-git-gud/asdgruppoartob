#include <iostream>
#include "h.h"
using namespace list;
int main()
{
    List l;
    createEmpty(l);
    addRear(5, l);
    addRear(6, l);
    addRear(7, l);
    addRear(8, l);
    std::cout << "Eseguo la print normale" << std::endl;
    print(c);
    std::cout << "Eseguo la print reverse" << std::endl;
    reverse_print(l);
    //clear(l);
}