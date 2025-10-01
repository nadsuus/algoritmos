#include <iostream>

int main() {
    int a, b;
    double c;
    std:: cin >> a >> b;
    std::cout << "Valor de a: " << a << " | Valor de b: " << b << std::endl; // linha adicionada para teste
    // c = static_cast<double>(a/b);
    // c = static_cast<double>(a)/b; 
    // c = a/static_cast<double>(b);
     c = static_cast<double>(a)/static_cast<double>(b); 
    std::cout << a << " / " << b << " = " << c << std::endl;
    return 0;
}