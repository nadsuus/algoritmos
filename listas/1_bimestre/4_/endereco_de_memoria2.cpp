#include <iostream>
using namespace std;

int main() {
  int a = 20;
  int *p;
  p = &a;

  cout << "Valor de *p: " << *p << endl;
  *p = 50;
  cout << "Valor de a: " << a << endl;
  return 0;
}