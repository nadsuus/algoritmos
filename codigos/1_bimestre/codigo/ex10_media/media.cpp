#include <iostream>

int j, i;
float notas[30], soma, media;

int main() {
    soma = 0;
    for(j=0; j<30; j++) {
        if (j < 15) {
            notas[j] = 5;
        } else {
            notas[j] = 10;
        }
    }

    for (i = 0; i < 30; i++) {
        soma = soma + notas[i];
    }

    media = soma/30;

    std::cout << "A media é: " << media << std::endl;

    return 0;
}