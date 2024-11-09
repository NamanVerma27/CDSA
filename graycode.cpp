#include <iostream>
using namespace std;

int binary_to_gray(int n, int i = 0) {
   // Base case when no digits left
   if (n == 0) return 0;
   
   // Get last and second last digits
   int curr = n % 10;
   int next = (n / 10) % 10;
   
   // Calculate power of 10
   int power = 1;
   for(int j = 0; j < i; j++) {
       power *= 10;
   }
   
   // XOR current and next digit
   int gray_digit = curr ^ next;
   
   // Recursive call for remaining digits and combine results
   return binary_to_gray(n / 10, i + 1) + gray_digit * power;
}

int main() {
   int n;
   cout << "Enter the binary number : ";
   cin >> n;
   cout << binary_to_gray(n) << endl;
   return 0;
}