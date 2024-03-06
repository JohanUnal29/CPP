#include <iostream>

bool isPrime(int m);

int main(int argc, char* argv[])
{
    // declara las variables para los limites
    char* end;
    long long int n = std::strtoll(argv[1], &end, 10);
    long long int suma = 0;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            suma = suma + i;
        }
    }

    std::cout << "suma: "<< suma << "\n";

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