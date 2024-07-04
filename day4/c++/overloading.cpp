#include<iostream>
using namespace std;
class Addition{
      public:
      static void add(int a, int b){ // use static to use fuction without adding multiple objects
            cout<< a+b<<endl;
      }
      static void add(int a, int b, int c){//we can use overloading of same func using different no of parameters or 
            cout<<a+b+c<<endl;
      }
      static void add(int a, float b){// or using different data types 
            cout<< a+b<<endl;
      }
};
int main(){
      Addition::add(1,2);
      Addition::add(1,2,3);
      Addition::add(1,2.4f);
      return 0;
}