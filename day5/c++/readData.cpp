#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    fstream myFile;
    myFile.open(
            "C:\\Users\\91812\\Desktop\\TNP\\day5\\c++\\abc.txt", ios::in);
    if (myFile.is_open()){
        string line;
        while (getline(myFile, line)){
            cout << line << endl;
        }
        myFile.close();
    }
    return 0;
}