#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5};
    cout << "Printing integer array:" << endl;
    for (int x : arr){
        cout << x << " ";
    }
    cout << endl;
    char letters[] = {'J','I','T'};
    for (char ch : letters){
        cout << ch << " ";
    }
    cout << endl;
    return 0;
}