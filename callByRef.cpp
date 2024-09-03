#include<iostream>
using namespace std;

void swap(int *a, int *b){
      int temp = *a;
      *a=*b;
      *b=temp;
}

int main(){
      int a=10;
      int b=20;
      cout<<"values of a = "<<a<<" & b = "<<b<<" before swap"<<endl;
      swap(&a,&b);
      cout<<"values of a = "<<a<<" & b = "<<b<<" after swap"<<endl;
}