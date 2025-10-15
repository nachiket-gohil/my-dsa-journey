// Reverse an Array

#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int> &arr) {
    for (int x : arr) cout << x << " ";
    cout << "\n";
}

void reverseArray(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; i++) {
        int j = n - i - 1;
        cout << "i index : " << i << " | ";
        cout << "j index : " << j << "\n";
        cout << "Swapping arr[" << i << "] = " << arr[i]
             << " | with arr[" << j << "] = " << arr[j] << "\n";
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    std::vector<int> numbers = {0};
    // [8, 2, 1, 4, 3, 7, 5, 6, 9, 0]
    // [0, 1, 4, 3, 7, 5, 6]
    // [1, 4, 3, 2, 6, 5]
    
    cout << "Before: ";
    printVector(numbers);

    reverseArray(numbers);

    cout << "After : ";
    printVector(numbers);
    
    return 0;
}
