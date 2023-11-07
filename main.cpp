#include <iostream>
#include "funciones.h"

int main() {
    int triple[3];
    triplesPitagoricos(triple);
    std::cout << triple[0] << " " << triple[1] << " " << triple[2] << std::endl;
    return 0;
}
