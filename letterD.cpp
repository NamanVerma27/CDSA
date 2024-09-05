#include<iostream>
using namespace std;

int main() {
    int n;
    char letter;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        letter = 'A';
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << letter;
            if (j < i) {
                letter++;
            } else {
                letter--;
            }
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--) {
        letter = 'A';
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << letter;
            if (j < i) {
                letter++;
            } else {
                letter--;
            }
        }
        cout << endl;
    }

    return 0;
}
