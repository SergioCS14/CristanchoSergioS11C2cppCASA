#include <iostream>

int factorial(int a);

int main(){
  std::cout<<"Ingrese el entero"<<std::endl;
  int n;
  std::cin>>n;
  std::cout<<n<<"!="<<factorial(n)<<std::endl;
  return 0;
}

int factorial(int a){
  int res = 1;
  for(int i = 2; i<=a; i++){
    res*=i;
  }
  return res;
}
