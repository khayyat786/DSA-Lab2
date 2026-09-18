#include <iostream>
using namespace std;

int main() {
    const int size = 6;

    // Dynamic Array in heap 
    int* salArray = new int[size];

    // Input salaries
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> salArray[i];
    }

    //increment formula
    for (int i = 0; i < size; i++) {
        salArray[i] = salArray[i] + salArray[i] / (i + 1);
    }
    cout << endl;
    // printing updated salaries
    cout << "Updated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << salArray[i] << " ";
    }
    cout << endl;

    // Freeing the heap memory
    delete[] salArray;
    return 0;
}