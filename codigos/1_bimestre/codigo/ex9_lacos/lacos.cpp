#include <iostream>

// FOR

int contar_divisores_for(int n) {
    int i, qtd = 1;
    for (i=1; i<n; i++) {
    if ((n%i) == 0) {
        qtd++; }
}
return qtd;
}

// WHILE 

int contar_divisores(int n) {
    int d=1, qtd=1;
    while (d!=n)
        if ((n%d++)==0)
            qtd++;

    return qtd;
}



// DO WHILE

int contar_divisores_doWhile(int n) {
    int d=1, qtd=1;
    do {
        if ((n%d++)==0)
            qtd++;
    } while (d!=n);
    return qtd;
}


//MAIN

int main() {
int n, qtd1, qtd2, qtd3;
std::cin >> n;
qtd1 = contar_divisores_for(n);
qtd2 = contar_divisores_doWhile(n);
qtd3 = contar_divisores(n);
std::cout<< qtd1 << std::endl;
std::cout<< qtd2 << std::endl;
std::cout<< qtd3 << std::endl;
return 0;   
}
