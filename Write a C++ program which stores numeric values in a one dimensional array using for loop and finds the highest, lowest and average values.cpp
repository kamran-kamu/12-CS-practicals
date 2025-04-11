#include <iostream>
using namespace std;
int main() {
    const int SIZE = 5;
    int numbers[SIZE];  
    int sum = 0;        
    int highest, lowest; 

    cout << "Enter " << SIZE << " numeric values:\n";
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    highest = lowest = numbers[0];

  
    for (int i = 0; i < SIZE; ++i) {
        sum += numbers[i];
        if (numbers[i] > highest) {
            highest = numbers[i];
        }
        if (numbers[i] < lowest) {
            lowest = numbers[i];
        }
    }

    // Calculate average
    double average = (sum) / SIZE;

    // Output the results
   cout << "Highest value: " << highest << std::endl;
   cout << "Lowest value: " << lowest << std::endl;
    cout << "Average value: " << average << std::endl;

    return 0;
}
