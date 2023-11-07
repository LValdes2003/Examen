#include <iostream>

// funcion para encontrar los triples pitagoricos
void triplesPitagoricos(int n) {
    // bucles usan todos los valores de a, b y c en el rango de 1 a n
    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            for (int c = b; c <= n; c++) {
                // la condición para un triple pitagórico
                if (a * a + b * b == c * c) {
                    std::cout << a << " " << b << " " << c << "\n" << std::endl;
                }
            }
        }
    }
}