#include<iostream>
#include<stack>
#include<string>  
using namespace std;

int main(){
    stack<char> s;
    string str;

    cout << "String: ";
    cin >> str;

    // Push all characters of the string into the stack
    for(char c : str){
        s.push(c);
    }

    // Pop characters from the stack to reverse the string
    string reversed_str = "";
    while(!s.empty()){
        reversed_str += s.top();
        s.pop();
    }

    cout << "Reversed String: " << reversed_str << endl;

    return 0;
}
