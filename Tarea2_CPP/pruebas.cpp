#include <iostream>
#include <cmath>
int fbnc(int n);

int main(void){
int n;
std::cin>>n;
int sum=0;
 for(int k=1;fbnc(k)<=n;k=k+1){ //siempre y cuando el valor de la secuencia sea menor a n

  if(fbnc(k)%2!=0){
    sum=sum+fbnc(k);
  }
 }
  std::cout<<sum<<"\n";
}

int fbnc(int n){
   int f; 
    if(n<=3){
        f=n;     //la función fibonacci para 0 y 1 es 1
     }
     else{f=fbnc(n-1)+fbnc(n-2);}    //para todos los demás, a(n)=a(n-1)+a(n-2)
return f;
}


