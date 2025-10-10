// Questão 2 - Pede nota entre 0 e 10 repetidamente até ser válida
#include <iostream>
#include <limits>

int main() {
    double nota;

    while (true) {
        std::cout << "Digite uma nota (0 a 10): ";
        if (!(std::cin >> nota)) {
            std::cout << "Valor invalido! Digite um numero.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (nota < 0.0 || nota > 10.0) {
            std::cout << "Valor invalido! A nota deve estar entre 0 e 10.\n";
            continue;
        }
        break;
    }

    std::cout << "Nota valida: " << nota << "\n";
    return 0;
}