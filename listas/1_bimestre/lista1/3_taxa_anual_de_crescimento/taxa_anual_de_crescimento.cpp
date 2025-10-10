// Questão 3 - População A x B com taxas fixas
#include <iostream>
#include <iomanip>

int main() {
    double A = 80000.0;
    double B = 200000.0;
    const double taxaA = 0.03;   // 3%
    const double taxaB = 0.015;  // 1.5%

    int anos = 0;
    while (A < B) {
        A *= (1.0 + taxaA);
        B *= (1.0 + taxaB);
        anos++;
    }

    std::cout << "Anos necessarios para A alcançar/ultrapassar B: " << anos << "\n";
    // Opcional: mostrar populacoes finais aproximadas
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Populacao A aproximada: " << A << "\n";
    std::cout << "Populacao B aproximada: " << B << "\n";
    return 0;
}