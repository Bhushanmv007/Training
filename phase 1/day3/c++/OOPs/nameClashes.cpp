#include <iostream>
using namespace std;
class Student {
public:
    int RollNo;
    string Name;
    string Branch;
    Student(int RollNo,string Name,string Branch){
        this->RollNo = RollNo;
        this->Name = Name;
        this->Branch = Branch;
    }
    void studentData(){
        cout << "Name: " << Name << endl;
        cout << "RollNo: " << RollNo << endl;
        cout << "Branch: " << Branch << endl;
    }
};
int main() {
    Student s1(101, "Sanjay", "CSE");
    s1.studentData();
    return 0;
}