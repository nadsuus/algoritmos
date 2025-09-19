#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int a,b;
  double media;
  cin >> a >> b;
  media = (a+b) /2.0;
  cout << fixed << setprecision(1) << media << endl;
  return 0;
};
