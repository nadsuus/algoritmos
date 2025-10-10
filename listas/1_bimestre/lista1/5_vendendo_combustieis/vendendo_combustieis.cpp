// Questão 5 - Posto de combustiveis com descontos por litro
#include <iostream>
#include <iomanip>
#include <limits>
#include <cctype>

int main() {
    using namespace std;

    double litros;
    char tipo;

    // Ler litros
    while (true) {
        cout << "Informe o numero de litros vendidos: ";
        if (!(cin >> litros)) {
            cout << "Entrada invalida! Digite um numero.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        if (litros <= 0.0) {
            cout << "Quantidade de litros deve ser maior que zero.\n";
            continue;
        }
        break;
    }

    // Ler tipo de combustivel
    while (true) {
        cout << "Informe o tipo de combustivel (A-alcool, G-gasolina): ";
        if (!(cin >> tipo)) {
            cout << "Entrada invalida!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        tipo = static_cast<char>(std::toupper(static_cast<unsigned char>(tipo)));
        if (tipo == 'A' || tipo == 'G') break;
        cout << "Tipo invalido! Digite 'A' para alcool ou 'G' para gasolina.\n";
    }

    double preco = (tipo == 'A') ? 1.90 : 2.50;
    double desconto = 0.0;
    if (tipo == 'A') {
        desconto = (litros <= 20.0) ? 0.03 : 0.05;
    } else { // 'G'
        desconto = (litros <= 20.0) ? 0.04 : 0.06;
    }

    double total = litros * preco * (1.0 - desconto);

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << total << "\n";

    return 0;
}