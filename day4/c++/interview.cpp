#include <iostream>
using namespace std;
class Printer {
public:
    string _name;
    int _availablePaper;
    Printer(string name, int paper){
        _name = name;
        _availablePaper = paper;
    }
    void PrintDoc(string txtDoc){
        // 40 / 10 = 4 pages
        int requiredPaper = txtDoc.length() / 10;
        if (requiredPaper > _availablePaper){
//            throw 404;
              throw "Out Of Paper...!!!!";
        }
        cout << "Printing...!!!!" << txtDoc << endl;
        _availablePaper -= requiredPaper;

    }
};
int main() {
    Printer myPrinter("HP DeskJet", 10);
    cout << myPrinter._availablePaper << endl;
    try {
        myPrinter.PrintDoc(
                "Tushara is a Software Developer");
        myPrinter.PrintDoc(
                "Aruna is a Software Developer");
        myPrinter.PrintDoc(
                "Deeksha is a Software Developer");
        myPrinter.PrintDoc(
                "Samhitha is a Software Developer");
        myPrinter.PrintDoc(
                "Hrishikesh is a Software Developer");
    }
    catch(int errorCode){
        cout << errorCode << " No paper available." << endl;
    }
    catch (const char * txtException){
        cout << "Exception: " << txtException << endl;
    }
    catch (...){ // Unknown Exceptions will handle any exception
        cout << "Something unexpected happened..!!" << endl;
    }
    cout << myPrinter._availablePaper << endl;
    return 0;
}