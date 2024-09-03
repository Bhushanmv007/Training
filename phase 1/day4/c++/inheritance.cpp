#include <iostream>
using namespace std;
class Employee { // Parent Class
public:
    string Name;
    int Age;
    string Company;
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    void empDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
class SoftwareDeveloper : public Employee{// to use the Name Age etc from Emp we need to write public here
public:
    string FavProLang;
    SoftwareDeveloper(
            string name, int age, string company, string favProLang) :
            Employee(name, age, company){
        FavProLang = favProLang;
    }
    void job(){
        cout << Name << " develops applications using "
        << FavProLang << endl;
    }
};
class Lecturer {// parent lecturer // teach()
      public: 
      string Name;
      int Age;
      string Qualification;
      Lecturer(string name, int age, string qualification){
            Name=name;
            Age=age;
            Qualification=qualification;
      }
      void teach(){
            cout << "Name: " << Name << endl;
            cout << "Age: " << Age << endl;
            cout << "Qualification: " << Qualification << endl;
      }
                                    
};
// Subject
class subject : public Lecturer{
public:
      string Subject;
      subject(string name,int age, string qualification, string subject ):
      Lecturer(name,age,qualification){
            Subject=subject;
      }
      void teaches(){
            cout << Name << " teaches "<< Subject << endl;
    }
};
int main() {
    Employee e1 = Employee("Sahana", 29, "Bizotic");
    e1.empDetails();
    SoftwareDeveloper s1 = SoftwareDeveloper("Ramya", 32, "Bizotic", "Java");
    s1.empDetails();
    s1.job();
    Lecturer l1=Lecturer("Saurav", 29 , "Masters");
    l1.teach();
    subject sub1=subject("lec1",21,"student","c++");
    sub1.teach();
    sub1.teaches();
    return 0;
}