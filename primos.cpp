#include <iostream>
#include <math.h> 

int isprime(int n){
  bool res = true;
  if (n==1){
    res=false;
  }
  else{
    for(int i = 2; i<=sqrt(n); i++){
      if (n%i==0){
	res = false;
      }
    }
  }
  return res;
}

int main(){
  std::cout<<"Ingrese los límites del intervalo, uno después del otro, deben ser enteros y estar separados por Enter"<<std::endl;
  int a;
  int b;
  std::cin>>a;
  std::cin>>b;
  int n = 0;
  for(int i = a; i <=b; i++){
    if ( isprime(i) ){
	n++;
      }
  }
  std::cout<<"El número de primos en el intervalo ["<<a<<","<<b<<"] es "<< n<<std::endl;
  return 0;
}
