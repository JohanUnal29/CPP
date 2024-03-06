#include <iostream>

bool isPrime(int m);

long long int isFactorPrime(int n);

int main(int argc, char* argv[])
{

    char* end;
    long long int numero = std::strtoll(argv[1], &end, 10);
    long long int factor_primo_max2;

    if(isPrime(numero)){
        std::cout << "Como es primo el factor primo mas grande de " << numero << " es: " << numero << "\n";
    } else{
        factor_primo_max2 = isFactorPrime(numero);
        std::cout << "El factor primo mas grande de " << numero << " es: " << factor_primo_max2 << "\n";
    }

    return 0;
}

bool isPrime(int m)
{
    bool flag = true;
    for (int a = 2; a < m; a++)
    {
        if (m % a == 0)
        { // no es primo por encontrar divisor
            flag = false;
            break;
        }
    }
    return flag;
}

long long int isFactorPrime(int n)
{
    long long int factor_primo_max = 1;

    for (int i = 2; n > 1; i++)
    {
        while (n % i == 0)
        {
            factor_primo_max = i;
            n /= i;
        }
    }
    return factor_primo_max;
}