// Identificar triples pitagóricos
// Autor: Leonardo Valdes
// Fecha: 26/09/2019

#include <iostream>

void triplesPitagoricos(int n) {
    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            for (int c = b; c <= n; c++) {
                if (a * a + b * b == c * c) {
                    std::cout << a << " " << b << " " << c << "\n" << std::endl;
                }
            }
        }
    }
}