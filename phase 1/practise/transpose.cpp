#include <iostream>
using namespace std;

void transpose(int matrix[][10], int transposed[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void display(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[10][10], transposed[10][10];
    
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    transpose(matrix, transposed, rows, cols);

    cout << "Original matrix:" << endl;
    display(matrix, rows, cols);

    cout << "Transposed matrix:" << endl;
    display(transposed, cols, rows);

    return 0;
}