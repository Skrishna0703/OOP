#include <iostream>
using namespace std;
template <typename T>
void selectionSort(T arr[], int size)
{
    for (int i = 0; i < size - 1; ++i) 
	{
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) 
		{
            if (arr[j] < arr[minIndex]) 
			{
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}
template <typename T>
void displayArray(const T arr[], int size) 
{
    for (int i = 0; i < size; ++i) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() 
{
    const int size = 5;
    int intArray[size];
    cout << "Enter " << size << " integer elements:\n";
    for (int i = 0; i < size; ++i) 
	{
        cin >> intArray[i];
    }
    selectionSort(intArray, size);
    cout << "Sorted Integer Array: ";
    displayArray(intArray, size);
    float floatArray[size];
    cout << "Enter " << size << " float elements:\n";
    for (int i = 0; i < size; ++i) 
	{
        cin >> floatArray[i];
    }
    selectionSort(floatArray, size);
    cout << "Sorted Float Array: ";
    displayArray(floatArray, size);
    return 0;
}

