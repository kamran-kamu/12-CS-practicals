#include <iostream>
using namespace std;

int main() {

    int rows;
//c++ porgram to create patterns....
    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}
