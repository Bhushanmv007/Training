//use of namespace
#include <iostream>
using namespace std;
namespace jitb2 {
    void add(){
        cout << "Batch 2" << endl;
    }
}
namespace jitb1 {
    void add(){
        cout << "Batch 1" << endl;
    }
}
int main() {
    cout << "Hello, World!" << endl;
    cout << "JIT" << endl;
    jitb2::add();
    jitb1::add();
    string name;
    cout<< "Enter the name: "<< endl;
    
    return 0;
}