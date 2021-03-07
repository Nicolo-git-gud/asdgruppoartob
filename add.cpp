#include <iostream>
#include "h.h"
using namespace list;
int main()
{
  List l;
  createEmpty(l);
  std::cout << "Il programma funziona se vedete una lista in ordine crescente e in ordine decrescente con la print reverse " << std::endl;
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
  add(2, 5, l);
  std::cout << "Provo la print" << std::endl;
  print(l);
  std::cout << "Provo la reverse print" << std::endl;
  reverse_print(l);
  add(0, 1, l);
  std::cout << "Provo la print" << std::endl;
  print(l);
  std::cout << "Provo la reverse print" << std::endl;
  reverse_print(l);
  add(4, 6, l);
  std::cout << "Provo la print" << std::endl;
  print(l);
  std::cout << "Provo la reverse print" << std::endl;
  reverse_print(l);
  add(3, 4, l);
  std::cout << "Provo la print" << std::endl;
  print(l);
  std::cout << "Provo la reverse print" << std::endl;
  reverse_print(l);
}
