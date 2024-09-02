#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
      int n;
      cout<< "Enter thr size of the array: "<< endl;
      cin>>n;
      int * myArray=new int[n];
      int ** matrix = new int * [n];
      delete[] myArray;
      delete[] matrix; 
      return 0;
}