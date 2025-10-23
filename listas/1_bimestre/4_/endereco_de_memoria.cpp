#include <iostream>
using namespace std
int main() {
  int a=10,b=20,c;
  c = (a+b) /c;
  cout << "O endereço de a é"
            << reinterpret_cast<std::uintptr_t> (&a) << " (" << &a << " )" << endl;
}