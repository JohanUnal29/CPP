#include <iostream>

bool isPrime(int m);

int main(void)
{
    //declara las variables para los limites
    int nmin = 1 , nmax = 100; 
    //hacer un for para recorrer entre limites
    for (int m=nmin; m < nmax; m++){
        //por cada valor verificar si es primo
        if(isPrime(m)){
            std::cout << "Is Prime" << "\n"; 
        }
        else{
            std::cout << "Isn't Prime" << "\n"; 
        }
    }
    
    return 0;
}

bool isPrime(int m){
    bool flag = true;
    for(int a = 2; a<m; a++){
        if(m%a == 0){ //no es primo por encontrar divisor
            flag = false;
            break;
        }
    }
    return flag;
}

int main(void)
{
    //declara las variables para los limites
    int n = 10;

    if(n<=10){
        isPrime(n);
    }else{
        std::cout << "too long for verify" << "\n";
    }
    
    return 0;
}