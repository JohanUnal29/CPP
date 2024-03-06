#include <iostream>

int main(int argc, char* argv[]) {


  char* end;
  int n = std::strtoll(argv[1], &end, 10);

  int a = 1, b = 2;
  int sumaImpares = 1;
  int c = 0;

  while(c <= n) {
    c = a + b; 

    if (c % 2 == 1 && c <= n) {
      sumaImpares += c;
    }

    a = b;
    b = c; 
  }

  std::cout <<"Suma de terminos impares: " << sumaImpares << "\n";

  return 0;
}