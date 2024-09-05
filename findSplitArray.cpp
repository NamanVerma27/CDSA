#include <iostream>
#include <vector>
using namespace std;

bool checkTheSplit(vector<int> &v) {
    int totalSum = 0;
    int prefixSum = 0;
    int suffixSum;

    // Calculate total sum of the array
    for (int i = 0; i < v.size(); i++) {
        totalSum += v[i];
    }

    // Check if there is a point where prefix sum equals suffix sum
    for (int i = 0; i < v.size(); i++) {
        prefixSum += v[i];
        suffixSum = totalSum - prefixSum;

        if (prefixSum == suffixSum) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout<<checkTheSplit(v)<<endl;

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
