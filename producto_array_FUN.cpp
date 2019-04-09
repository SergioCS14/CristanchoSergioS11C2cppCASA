#include <iostream>
#include <math.h> 

int ab[5];

void producto(int a[], int b[]){
  for(int i=0; i<5;i++){
    ab[i] = a[i]*b[i];
  }
}

int iprod(int a[], int b[]){
  int p = 0;
  for(int i=0;i<5;i++){
    p += a[i]*b[i];
  }
  return p;
}

int main(){
  int a[5]={1,2,3,4,5};
  int b[5]={10,20,30,40,50};
  std::cout<<"Los arreglos son: a={"<<a[0]<<","<<a[1]<<","<<a[2]<<","<<a[3]<<","<<a[4]<<"} y b="<<b[0]<<","<<b[1]<<","<<b[2]<<","<<b[3]<<","<<b[4]<<"}"<<std::endl;
  producto(a,b);
  std::cout<<"Su arreglo producto es {"<<ab[0]<<","<<ab[1]<<","<<ab[2]<<","<<ab[3]<<","<<ab[4]<<"}"<<std::endl;
  std::cout<<"Su producto interno es "<<iprod(a,b)<<std::endl;
  return 0;
}
