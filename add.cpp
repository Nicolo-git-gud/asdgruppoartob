#include <iostream>
#include "h.h"
using namespace list;
int main()
{
    List l;
    createEmpty(l);
    add(0, 2, l);
    std::cout << "Provo la print" << std::endl;
    print(l);
    std::cout << "Provo la reverse print" << std::endl;
    reverse_print(l);
    add(1, 3, l);
    std::cout << "Provo la print" << std::endl;
    print(l);
    std::cout << "Provo la reverse print" << std::endl;
    reverse_print(l);
    add(0, 4, l);
    std::cout << "Provo la print" << std::endl;
    print(l);
    std::cout << "Provo la reverse print" << std::endl;
    reverse_print(l);
     add(1, 5, l);
    std::cout << "Provo la print" << std::endl;
    print(l);
    std::cout << "Provo la reverse print" << std::endl;
    reverse_print(l);
      add(2, 7, l);
    std::cout << "Provo la print" << std::endl;
    print(l);
    std::cout << "Provo la reverse print" << std::endl;
    reverse_print(l);
     add(5, 8, l);
    std::cout << "Provo la print" << std::endl;
    print(l);
    std::cout << "Provo la reverse print" << std::endl;
    reverse_print(l);
}