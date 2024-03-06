#include <iostream>
#include "primes.h"

//Francisco Brand Vélez
//Samuel Felipe Noreña Téllez
//María Alejandra Rodríguez Méndez
//Johan Nicolás Ardila Hernández
//Carlos David Díaz

int main(int argc, char **argv)
{
    // ./a.out nmin nmax
    int nmin{0}, nmax{0};
    // leer los limites desde la linea de comando
    nmin = std::stoi(argv[1]);
    nmax = std::stoi(argv[2]);

    // kernel: if n is primer AND n+4 is prime
    int delta = 6;
    for (int n = nmin; n + delta <= nmax; n++)
    {
        if (is_prime(n) == true and is_prime(n + delta) == true)
        {
            std::cout << "(" << n << ", " << n + delta << ") ";
        }
    }
    std::cout << "\n";

    return 0;
}