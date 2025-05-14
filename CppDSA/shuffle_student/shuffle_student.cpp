#include <iostream>
#include <vector>
using namespace std;

// # approach 1: using vector
void prank(vector<int>& a, int n) {
    // Modify the array in-place to reflect the new arrangement
    for (int i = 0; i < n; i++) {
        // Store both old and new values in the same array using encoding
        a[i] = a[i] + (a[a[i]] % n) * n;
    }
    for (int i = 0; i < n; i++) {
        // Extract the new values
        a[i] = a[i] / n;
    }
}

// # approach 2: using array
void prankMe(long long a[], int n) {
    long shuffled[n];
    for (int i = 0; i < n; i++) {
        a[i] = a[a[i]];
    }
}

// # approach 3: using array
// Hint: Instead of using the current approach of modifying the array in two steps, 
// try to come up with a single-step approach that directly calculates the new positions 
// of the students based on the given array. Think about how you can leverage the properties 
// of the given permutation to achieve this in a more efficient manner.

int main() {
    // Example usage
    // vector<int> a = {0, 5, 1, 2, 4, 3};
    long long a[] = {0, 5, 1, 2, 4, 3};
    int n = 6;

    prankMe(a, 6);

    // Output the modified array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}