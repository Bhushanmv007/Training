#include <iostream>
using namespace std;

void findPairs(int arr[], int size, int target) {
    cout << "Pairs with sum " << target << " are:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }
}

int main() {
    int size, target;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    findPairs(arr, size, target);

    return 0;
}