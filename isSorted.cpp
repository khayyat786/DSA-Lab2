#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int *arr, const int size);

void testSingleElement()
{
    int arr[] = {42}; // Mixed non-sequential value
    assert(isSorted(arr, 1) == true);
    cout << "passed test single element" << endl;
}

void testUnsortedArray()
{
    int arr[] = {8, 14, 3, 99, 12};
    assert(isSorted(arr, 5) == false);
    cout << "passed test unsorted array" << endl;
}

void testSortedArray()
{
    int arr[] = {4, 19, 23, 50, 105};
    assert(isSorted(arr, 5) == true);
    cout << "passed test sorted array" << endl;
}

void testDescendingArray()
{
    int arr[] = {88, 71, 40, 12, -3};
    assert(isSorted(arr, 5) == false);
    cout << "passed test descending array" << endl;
}

void testNegativeValues()
{
    int arr[] = {-95, -50, -48, -12, -2};
    assert(isSorted(arr, 5) == true);
    cout << "passed test negative values" << endl;
}

void testDuplicateValues()
{
    int arr[] = {13, 13, 27, 44, 44};
    assert(isSorted(arr, 5) == true);
    cout << "passed test duplicate values" << endl;
}

void testEmptyArray()
{
    assert(isSorted(nullptr, 0) == true);
    cout << "passed test empty array" << endl;
}

void testAllEqualValues()
{
    int arr[] = {107, 107, 107, 107};
    assert(isSorted(arr, 4) == true);
    cout << "passed test all equal values" << endl;
}

int main()
{

    testSingleElement();
    testUnsortedArray();
    testSortedArray();
    testDescendingArray();
    testNegativeValues();
    testDuplicateValues();
    testEmptyArray();
    testAllEqualValues();

    cout << "passed all" << endl;
    return 0;
}

bool isSorted(const int *arr, const int size)
{
    if (size <= 1)
    {
        return true;
    }

    for (int i = 0; i < size - 1; ++i)
    {

        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
