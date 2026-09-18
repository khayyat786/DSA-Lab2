#include <iostream>
#include <string>
using namespace std;

int main() {
    string InputString;
    cout << "Enter a string: ";
    getline(cin, InputString);

    int length = InputString.length();

    // Dynamically allocate memory for char array 
    char *reversed = new char[length + 1];
    // +1 is to make the index for the nulm character '\0' at the end of the string

    // Reverse the string elements and putting it into the char array
    for (int i = 0; i < length; i++) {
        reversed[i] = InputString[length - 1 - i];
    }
    //Null char to indicate end of the string
    reversed[length] = '\0'; 
    cout << "Original string: " << InputString << endl;
    cout << "Reversed string: " << reversed << endl;

    // Free dynamic memory
    delete[] reversed;
    reversed = nullptr;

    return 0;
}