#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void insert(int arr[], int& size, int element, int pos) {
    if (pos >= 0 && pos <= size) {
        for (int i = size; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = element;
        size++;
    } else {
        cout << "Invalid position!" << endl;
    }
}

void deleteElement(int arr[], int& size, int pos) {
    if (pos >= 0 && pos < size) {
        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    } else {
        cout << "Invalid position!" << endl;
    }
}

int search(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

void update(int arr[], int size, int element, int pos) {
    if (pos >= 0 && pos < size) {
        arr[pos] = element;
    } else {
        cout << "Invalid position!" << endl;
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[MAX_SIZE], size = 0, choice, element, pos;

    while (true) {
        cout << "\nMenu:\n1. Insert\n2. Delete\n3. Search\n4. Update\n5. Display\n6. Exit\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter element and position: ";
                cin >> element >> pos;
                insert(arr, size, element, pos);
                break;
            case 2:
                cout << "Enter position: ";
                cin >> pos;
                deleteElement(arr, size, pos);
                break;
            case 3:
                cout << "Enter element to search: ";
                cin >> element;
                pos = search(arr, size, element);
                if (pos != -1) {
                    cout << "Element found at position " << pos << endl;
                } else {
                    cout << "Element not found!" << endl;
                }
                break;
            case 4:
                cout << "Enter new element and position to update: ";
                cin >> element >> pos;
                update(arr, size, element, pos);
                break;
            case 5:
                display(arr, size);
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
}