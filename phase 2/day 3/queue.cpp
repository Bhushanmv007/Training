#include<iostream>
#include<queue>
using namespace std;

int main(){
      queue<int> q;     
      q.push(10);
      q.push(20);
      q.push(30);
      cout<<"first elem before pop : "<< q.front()<<endl;
      q.pop();
      cout<<"first elem after pop : "<< q.front()<<endl;
      cout<<"last elem : "<< q.back() <<endl;
}