#include <iostream>
#include "primes.h"

int main(int argc, char **argv){
    int nmin = 1;
    int nmax = 150;
    int suma = 0;

    for(int ii = nmin; ii <= nmax; ++ii){
        if(isprime(ii)){
            suma = suma + ii;
        }
    }
    std::cout << suma << "\n";
    return 0;
}