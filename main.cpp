#include <iostream>
#include "funciones.h"

int aValor{1};

int main() {
    int triple[3];
    for (int i = 0; i <= 20; i++) {
        triplesPitagoricos(triple, aValor);
        std::cout << triple[0] << " " << triple[1] << " " << triple[2] << std::endl;
        aValor++;
    }
    return 0;
}
