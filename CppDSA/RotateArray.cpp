// Rotate Array
// GFG Problem Link : https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/rotate-array-by-n-elements-1587115621

#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int> &arr) {
    for (int x : arr) cout << x << " ";
    cout << "\n";
}

void reverseRange(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate an array by d elements in counter-clockwise direction.
void rotateArr(vector<int>& arr, int d) {
    // code here
    int n = arr.size();
    cout << endl;
    cout << "Given d > " << d << endl;
    d = d % n;
    cout << "Final d > " << d << endl;
    
    if (n <= 1) return;
    
    // Step 1: Reverse first d elements
    cout << "Reversed first d elements   > ";
    reverseRange(arr, 0, d - 1);
    printVector(arr);

    // Step 2: Reverse remaining elements
    cout << "Reversed remaining elements > ";
    reverseRange(arr, d, n - 1);
    printVector(arr);

    // Step 3: Reverse the whole array
    cout << "Reversed the whole array    > ";
    reverseRange(arr, 0, n - 1);
    printVector(arr);
    cout << endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    // [1, 2, 3, 4, 5], d = 2
    // [2, 4, 6, 8, 10, 12, 14, 16, 18, 20], d = 3
    // [7, 3, 9, 1], d = 9
    
    
    cout << "Before: ";
    printVector(numbers);

    rotateArr(numbers, 2);

    cout << "After : ";
    printVector(numbers);
    
    return 0;
}
