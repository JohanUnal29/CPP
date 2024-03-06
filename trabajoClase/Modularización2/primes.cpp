#include "primes.h"

bool is_prime(int m)
{
    bool flag = true;
    for (int n = 2; n*n <= m; n++) {
        if (m%n == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}