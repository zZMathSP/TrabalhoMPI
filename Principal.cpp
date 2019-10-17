#include <iostream>
#include <stdlib.h>
#include "Aeroporto.h"

using namespace std;

int main() {
  Aeroporto *a1 = new Aeroporto(1);
  Aeroporto *a2 = new Aeroporto(2);

  cout << a1->getCodigo() << endl;
  cout << a2->getCodigo() << endl;
  return 0;
}
