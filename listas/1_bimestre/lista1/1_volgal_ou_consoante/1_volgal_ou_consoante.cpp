// Questão 1 - Vogal ou Consoante
#include <iostream>
#include <cctype>

int main() {
    char c;
    std::cout << "Digite uma letra: ";
    std::cin >> c;

    if (!std::isalpha(static_cast<unsigned char>(c))) {
        std::cout << "Entrada invalida: nao e uma letra.\n";
        return 0;
    }

    char lower = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
    bool vogal = (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');

    if (vogal) {
        std::cout << "Vogal\n";
    } else {
        std::cout << "Consoante\n";
    }
    return 0;
}