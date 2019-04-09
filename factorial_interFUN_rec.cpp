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
  if (a==0){
    return 1;
      }
  else{
    return a*factorial(a-1);
  }
}
