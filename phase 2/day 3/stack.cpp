#include<iostream>
#include<stack>
using namespace std;

int main(){
      stack<int> s;
      s.push(10);
      s.push(20);
      s.pop();
      
      if(s.empty()){
            cout<<"Stack is empty"<<endl;
      }
      cout<<"The top elem is : " << s.top() <<endl;
}