#include <iostream>
using namespace std;

// prints the address and the value it is is pointing to
void analyze_pointer(int *ptr)
{
    cout << "Memory address: " << ptr << endl;
    cout << "Value that pointer is pointing to: " << *ptr << endl;
}
int main()
{
    // int inside the the stack memory
    int iValue = 42;
    cout << "int inside the stack" << endl;
    analyze_pointer(&iValue);
    cout << endl;

    // int inside the heap memory
    int *hValue = new int;
    *hValue = 99;
    cout << "int inside the heap" << endl;
    analyze_pointer(hValue);

    delete hValue;
    return 0;
}
