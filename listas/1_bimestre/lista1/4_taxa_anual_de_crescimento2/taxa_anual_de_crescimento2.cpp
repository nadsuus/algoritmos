// Questão 4 - Versão parametrizada, com validação e opção de repetir
#include <iostream>
#include <limits>
#include <cctype>

int main() {
    using namespace std;

    auto lerPositivo = [](const string& prompt) {
        double v;
        while (true) {
            cout << prompt;
            if (!(cin >> v)) {
                cout << "Entrada invalida! Digite um numero.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            if (v <= 0.0) {
                cout << "O valor deve ser maior que zero.\n";
                continue;
            }
            return v;
        }
    };

    auto lerNaoNegativo = [](const string& prompt) {
        double v;
        while (true) {
            cout << prompt;
            if (!(cin >> v)) {
                cout << "Entrada invalida! Digite um numero.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            if (v < 0.0) {
                cout << "O valor nao pode ser negativo.\n";
                continue;
            }
            return v;
        }
    };

    char repetir = 'S';
    while (std::toupper(static_cast<unsigned char>(repetir)) == 'S') {
        double popA = lerPositivo("Informe a populacao inicial do pais A: ");
        double popB = lerPositivo("Informe a populacao inicial do pais B: ");
        double taxaAperc = lerNaoNegativo("Informe a taxa de crescimento de A (em %): ");
        double taxaBperc = lerNaoNegativo("Informe a taxa de crescimento de B (em %): ");

        double taxaA = taxaAperc / 100.0;
        double taxaB = taxaBperc / 100.0;

        if (popA >= popB) {
            cout << "A populacao de A ja e maior ou igual a B. Anos necessarios: 0\n";
        } else if (taxaA <= taxaB) {
            cout << "Com as taxas informadas, A nunca alcancara B.\n";
        } else {
            int anos = 0;
            while (popA < popB) {
                popA *= (1.0 + taxaA);
                popB *= (1.0 + taxaB);
                anos++;
                if (anos > 100000) { // guarda de seguranca contra loops infinitos
                    cout << "Numero de anos excedeu o limite esperado.\n";
                    break;
                }
            }
            if (popA >= popB) {
                cout << "Anos necessarios: " << anos << "\n";
            }
        }

        cout << "Deseja repetir (S/N)? ";
        cin >> repetir;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return 0;
}