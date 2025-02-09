#include <iostream>
using namespace std;
int main() 
{
    cout<<"hello world";
    int main() {
        const int SIZE = 10;
        int arr1[SIZE], arr2[SIZE], merged[SIZE * 2];
        // Input for first array
        cout << "Enter 10 elements for first array: ";
        for (int i = 0; i < SIZE; i++) {
        cin >> arr1[i];
        }
        // Input for second array
        cout << "Enter 10 elements for second array: ";
        for (int i = 0; i < SIZE; i++) {
        cin >> arr2[i];
        }
        // Merging two arrays
        for (int i = 0; i < SIZE; i++) {
        merged[i] = arr1[i];
        merged[i + SIZE] = arr2[i];
        }
        // Sorting in descending order (Simple Bubble Sort)
        for (int i = 0; i < SIZE * 2 - 1; i++) {
        for (int j = 0; j < SIZE * 2 - i - 1; j++) {
        if (merged[j] < merged[j + 1]) {
        int temp = merged[j];
        merged[j] = merged[j + 1];
        merged[j + 1] = temp;
        }
        }
        }
        // Display sorted merged array
        cout << "Merged array in descending order: ";
        for (int i = 0; i < SIZE * 2; i++) {
        cout << merged[i] << " ";
        }        
return 0;
}