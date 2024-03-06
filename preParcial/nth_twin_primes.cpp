#include "primes.h"

bool is_prime(int m)
{
    if (m <= 0)
    {
        // std::cerr << "Negative number\n";
        return false;
    }

    if (1 == m)
    {
        return false;
    }
    bool flag = true;
    for (long n = 2; n * n <= m; n++)
    {
        if (m % n == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

void nth_twin_primes(int n)
{
    
    bool flag = true;
    int contador = 0;
    int i = 1;
    while (contador < n){
        i++;
        if(is_prime(i) and is_prime(i+2)){
            contador++;
        }
    }
    if (contador == n){
        std::cout << "(" << i << ", " << i+2 << ") "; 
    }
        
}