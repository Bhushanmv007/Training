#include <iostream>
using namespace std;
class AbstractEmployee{
      // pure virtual func
      // implementation will be in child class
      // it acts like an interface
      virtual void checkPromotion()=0;
};
class Employee : AbstractEmployee{ // Parent Class
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
    virtual void work(){
      cout<< Name<<" checks emails, creates reports, attends meetings, etc"<<endl;
    }
      void checkPromotion(){
            if (Age>30){
                  cout<<Name<<"is promoted"<<endl;
            }else{
            cout << Name << " is not promoted." << endl;
        }

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
        cout << Name << " develops applications using " << FavProLang << endl;
    }
    void work(){
      cout << Name << " fixes bugs & tests apps" << endl;
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
      void work(){
      cout << Name << " Provides education" << endl;
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
      e1.work();
      SoftwareDeveloper s1 = SoftwareDeveloper("Ramya", 32, "Bizotic", "Java");
      s1.empDetails();
      s1.job();
      s1.work();
      Lecturer l1=Lecturer("Saurav", 31 , "Masters");
      l1.teach();
      l1.work();
      subject sub1=subject("lec1",21,"student","c++");
      sub1.teach();
      sub1.teaches();
      Employee * s=&s1;
      s1.work();
      e1.checkPromotion();
      s1.checkPromotion();
      return 0;
}