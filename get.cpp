#include <iostream>
#include "h.h"
#include "assert.h"
using namespace list;
int main()
{
    List l;
    createEmpty(l);
    assert(get(0, l) == -123456789);
        addFront(5, l);
    assert(get(0, l) == 5);
        addRear(6,l);
    assert(get(1, l) == 6);
}