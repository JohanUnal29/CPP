#include <iostream>
#include "primes.h"

int main(int argc, char **argv){
    int nmin = 1;
    int nmax = 150;

    for(int ii = nmin; ii <= nmax; ++ii){
        if(isprime(ii)){
            std::cout << ii << " ";
        }
    }
    std::cout << "\n";
    return 0;
}