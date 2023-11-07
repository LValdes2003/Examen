// Identificar triples pitagóricos
// Autor: Leonardo Valdes
// Fecha: 26/09/2019

int triplesPitagoricos(int triple[])
{
    int a, b, c;
    for (a = 1; a <= 20; a++)
        for (b = 1; b <= 20; b++)
            for (c = 1; c <= 20; c++)
                if (a * a + b * b == c * c)
                {
                    triple[0] = a;
                    triple[1] = b;
                    triple[2] = c;
                    return 1;
                }
    return 0;
}