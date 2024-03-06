#include <catch2/catch_test_macros.hpp>
#include "primes.h"

TEST_CASE("Primes are computed", "[isprime]"){
    REQUIERE( isprime( 2) == true);
    REQUIERE( isprime( 3) == true);
    REQUIERE( isprime(10) == false);
    REQUIERE( isprime(1008) == false);
    REQUIERE( isprime(1009) == true);
    REQUIERE( isprime(2000000011) == true);
    REQUIERE( isprime(20000000089) == true);
}