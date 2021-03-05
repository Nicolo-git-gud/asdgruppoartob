#include <iostream>
#include "h.h"
using namespace list;
int main()
{
  List l;
  createEmpty(l);
  addFront(5, l);
  addFront(6,l);
  addFront(7,l);
  addFront(8,l);
  std::cout << "Eseguo la print normale " << std::endl;
  print(l);
  //clear(l);
  std::cout << "Eseguo la print reverse" << std::endl;
  reverse_print(l);
}