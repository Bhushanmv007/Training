#include<iostream>
using namespace std;
class Myclass{
      private:
      int data;
      public:
      Myclass(){
            cout<<"default constructor"<<endl;
      }
      Myclass(int value):data(value){
            cout<<"parameterised constructor"<<endl;
      }
      Myclass(Myclass& other) : data(other.data){
            cout << "Copy Constructor" << endl;
      }
      void display(){
            cout << "Data: " << data << endl;
      }

};
int main(){
      Myclass o1;//constructor
      Myclass o2(12);//parameterised
      Myclass o3=o2;//copy cons
      Myclass o4(o2);//copy cons
      o1.display();
      o2.display();
      o3.display();
      o4.display();
}