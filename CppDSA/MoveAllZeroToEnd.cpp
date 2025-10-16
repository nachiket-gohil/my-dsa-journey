// Push all Zeroes to end of Array
// GFG Problem Link : https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/reverse-an-array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(const vector<int> &arr) {
    for (int x : arr) cout << x << " ";
    cout << "\n";
}

int countZero(const vector<int> &arr) {
    int cnt = 0;
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == 0) ++cnt;
    }
    return cnt;
}

void pushZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return;
    // Fast path: no zeros or all zeros.
    int zeros = countZero(arr);
    if (zeros == 0 || zeros == n) {
        // nothing to do (or all zeros — already at end)
        return;
    }
    // writePos points to where we'll write the next non-zero element
    int writePos = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != 0) {
            arr[writePos++] = arr[i];
        }
    }
    // fill the remaining positions with zeros
    for (int i = writePos; i < n; ++i) {
        arr[i] = 0;
    }
}

int main() {
    std::vector<int> numbers = {1, 2, 0, 4, 3, 0, 5, 0};
    
    cout << "Before: ";
    printVector(numbers);

    pushZerosToEnd(numbers);

    cout << "After : ";
    printVector(numbers);
    
    return 0;
}
