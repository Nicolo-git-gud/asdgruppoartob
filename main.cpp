#include <iostream>
#include "h.h"
using namespace list;
int main()
{
  List l;
  createEmpty(l);
  addRear(5, l);
  addRear(6,l);
  addRear(7,l);
  addRear(8,l);
  //clear(l);
  reverse_print(l);
}