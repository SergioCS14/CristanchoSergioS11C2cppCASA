#include <iostream>
#include <math.h>

double funcion(double x){
  return cos(x);
}

int main(){
  int n;
  double a;
  double b;
  std::cout<<"Este programa calcula la integral de cos en un intervalo [a,b] con el método de la media usando n puntos"<<std::endl;
  std::cout<<"Ingrese los valores de a,b,n, en ese orden separados por Enter"<<std::endl;
  std::cin>>a;
  std::cin>>b;
  std::cin>>n;
  double mean=0;
  for(int i =0; i<n; i++){
    mean += funcion(a+i*(b-a)/n);
  }
  std::cout<<"La integral de cos en ese intervalo es "<<(b-a)*mean/n<<std::endl;
  return 0;
}
