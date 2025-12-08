// Majority Element [> n/3]
// GFG Problem Link : https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/majority-vote

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(const vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << "\n";
}

vector<int> findMajority(vector<int>& arr) {    
    // Get Array Size
    int n = arr.size();
    cout << "Array size:- " << n << " --> ";
    if (n == 0) return {};
    if (n == 1) return arr;  // optional early-return
  
    int nby3 = n/3;
    cout << "n/3:- " << nby3 << endl;

    int m1 = 0, m2 = 0;    // potential candidates
    int c1 = 0, c2 = 0;    // counts of candidates

    // Phase 1: Find two possible candidates
    for (int x : arr) {
        if (x == m1) {
            c1++;
        } else if (x == m2) {
            c2++;
        } else if (c1 == 0) {
            m1 = x;
            c1 = 1;
        } else if (c2 == 0) {
            m2 = x;
            c2 = 1;
        } else {
            c1--;
            c2--;
        }
    }

    // Phase 2: Verify counts
    c1 = c2 = 0;
    for (int x : arr) {
        if (x == m1) c1++;
        else if (x == m2) c2++;
    }

    vector<int> res;

    if (c1 > nby3) res.push_back(m1);
    if (c2 > nby3) res.push_back(m2);

    sort(res.begin(), res.end());
    return res;
}

int main() {
    std::vector<int> numbers = {2, 2, 3, 1, 3, 2, 1, 1};
    // [2, 2, 3, 1, 3, 2, 1, 1]
    // [-5, 3, -5]
    // [3, 2, 2, 4, 1, 4]
    
    cout << "Before: ";
    printVector(numbers);

    std::vector<int> final = findMajority(numbers);

    cout << "After : ";
    printVector(final);
    
    return 0;
}
