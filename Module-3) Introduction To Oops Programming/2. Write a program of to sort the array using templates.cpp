//2. Write a program of to sort the array using templates

#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {5, 3, 8, 6, 2};
    float arr2[] = {3.5, 1.2, 4.8, 2.9};

    cout << "Integer Array Before Sorting: ";
    displayArray(arr1, 5);
    sortArray(arr1, 5);
    cout << "Integer Array After Sorting: ";
    displayArray(arr1, 5);

    cout << "Float Array Before Sorting: ";
    displayArray(arr2, 4);
    sortArray(arr2, 4);
    cout << "Float Array After Sorting: ";
    displayArray(arr2, 4);

    return 0;
}

