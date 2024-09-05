#include <iostream>
using namespace std;

int main() {
    // take the size of the array from user
    int size;
    cout << "Enter the size: ";
    cin >> size;

    // Declare the array with the given size
    int array[size];

    // Input elements into the array
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        int ele;
        cin >> ele;
        array[i] = ele;
    }

    // Declare result, left, and right arrays
    int result[size];
    int left[size];
    int right[size];

    // Initialize the first element of left and last element of right
    left[0] = 1;
    right[size - 1] = 1;

    // Calculate left products
    // left[i] contains the product of all elements to the left of array[i]
    for (int i = 1; i < size; i++) {
        left[i] = array[i - 1] * left[i - 1];
    }

    // Calculate right products
    // right[i] contains the product of all elements to the right of array[i]
    for (int i = size - 2; i >= 0; i--) {
        right[i] = array[i + 1] * right[i + 1];
    }

    // Calculate the result array
    // result[i] contains the product of all elements of array except array[i]
    for (int i = 0; i < size; i++) {
        result[i] = left[i] * right[i];
    }

    // Output the result array
    cout << "The multiplied array is: ";
    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }

    return 0;
}