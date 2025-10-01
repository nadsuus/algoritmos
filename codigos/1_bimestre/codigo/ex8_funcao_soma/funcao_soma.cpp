#include <iostream>

int soma(int a, int b) {
    int r;
    r = a + b;
    return r;
}   
int main () {
    int a, b, s;
    std:: cin >> a >> b;
    s = soma(a, b);
    std:: cout << "A soma é "
                 << s 
                << std:: endl;
    return 0;
}