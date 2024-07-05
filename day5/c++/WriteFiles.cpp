#include<iostream>
#include<fstream>
using namespace std;
int main(){
      fstream myFile;
      myFile.open("C:\\Users\\91812\\Desktop\\TNP\\day5\\c++\\abc.txt", /*mode*/ ios::out);
      if(myFile.is_open()){
            myFile << "Hello.\n";
            myFile << "Line 5.\n";
            myFile.close();
      }
      myFile.open("C:\\Users\\91812\\Desktop\\TNP\\day5\\c++\\abc.txt", /*mode*/ ios::app);
      if(myFile.is_open()){
            myFile << "hi.\n";
            myFile << "arunaaaaaaa.\n";
            myFile.close();
      }
      system("pause>0");
      //return 0;
}