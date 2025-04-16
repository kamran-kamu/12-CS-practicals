#include <iostream>
using namespace std;

const int MAX = 4;

int addMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = a[i][j] + b[i][j];
    return 0;
}

int subtractMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = a[i][j] - b[i][j];
    return 0;
}

int multiplyMatrices(int a[MAX][MAX], int b[MAX][MAX], int result[MAX][MAX], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++)
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    return 0;
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX];
    int rows = 2, cols = 2;

    cout << "Enter elements of first matrix (2x2):\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];

    cout << "Enter elements of second matrix (2x2):\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> b[i][j];

    addMatrices(a, b, result, rows, cols);
    cout << "Sum of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    subtractMatrices(a, b, result, rows, cols);
    cout << "Difference of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    multiplyMatrices(a, b, result, rows, cols, cols);
    cout << "Product of matrices:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}

