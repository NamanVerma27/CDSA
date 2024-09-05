#include <iostream>
#include <vector>
#include <algorithm> // for std::reverse
using namespace std;

int main() {
    vector<int> v;  //solving problem without using extra memory with the help of vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int k = 2;
    k = k % v.size();  // because k can be larger than size

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());

    for (int ele : v) {
        cout << ele << " ";
    }
    cout << endl;

    return 0;
}
