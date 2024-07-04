// 3 classes patient, information, payment, when u do patientDetails 
// u need to get all the data from these classes 
// but the catch is to not use inheritance 
#include<iostream>
using namespace std;
class Payment{
      public:
      double admFees;
      double regFees;
      double balAmt;
      Payment(double aFees, double rFees, double bAmt){
            admFees=aFees;
            regFees=rFees;
            balAmt=bAmt;
      }
};
class Information{
      public:
      char blockNo;
      int floorNo;
      int roomNo;
      int bedNo;
      Information(char bNo, int fNo, int rNo, int bdNo){
            blockNo = bNo;
            floorNo = fNo;
            roomNo = rNo;
            bedNo = bdNo;
      }
};
class Patient{
      public:
      string patientName;
      int patientAge;
      string disease;
      int dateOfArrival;
      Information info;
      Payment pay;
      Patient(string name , int age, string d, int doa, Information& i, Payment& p):info(i),pay(p) {
            patientName=name;
            patientAge=age;
            disease=d;
            dateOfArrival=doa;
            info = i;
            pay = p;
      }
      void patientDetails(){
            cout << "The patient deatils are: " << endl;
            cout << "Name: " << patientName << endl;
            cout << "Age: " << patientAge <<endl;
            cout << "Disease: " << disease << endl;
            cout << "Date of Arrival: " << dateOfArrival <<endl;
            cout << "Block No: " << info.blockNo <<endl;
            cout << "Floor No: " << info.floorNo<< endl;
            cout << "Room No: " << info.roomNo << endl;
            cout << "Bed No: " << info.bedNo<< endl;
            cout << "Admission Fees: "<< pay.admFees << endl;
            cout << "Registration fees: "<< pay.regFees  << endl;
            cout << "Balance amt: " << pay.balAmt<<  endl;
      }
};
 
int main(){
      Information info=Information('B',2,201,3);
      Payment pay=Payment(20000,5000,10000);
      Patient p1=Patient("abc",30,"covid",20,info,pay);
      p1.patientDetails();
      return 0;
}