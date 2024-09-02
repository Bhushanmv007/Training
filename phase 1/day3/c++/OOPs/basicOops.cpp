//constructer 
#include <iostream>
using namespace std;
class Employee {
public:
    string Name;
    string Company;
    int Age;
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
int main() {
    // Way 1
    Employee e1;
    e1.Name = "Aruna";
    e1.Age = 21;
    e1.Company = "Accenture";
    e1.employeeDetails();
    // Way 2
    Employee e2 = Employee();
    return 0;
}

