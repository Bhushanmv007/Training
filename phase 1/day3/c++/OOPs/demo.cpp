#include<iostream>
using namespace std;
class JIT{
      short s;
      char c;
      int i;
      double d;
};
int main(){
      JIT obj;
      cout << "The size:"<<sizeof(obj)<<"bytes"<<endl;
      return 0;
}
//answer will come 8 coz of padding as int is 4+short is 