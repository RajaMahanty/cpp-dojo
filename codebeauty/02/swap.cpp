#include <iostream>
using namespace std;

int main()
{
     int a = 5, b = 10;

     // Method 1: Using temporary variable
     cout << "Method 1 - Using temp variable:" << endl;
     cout << "Before: a = " << a << ", b = " << b << endl;
     int temp = a;
     a = b;
     b = temp;
     cout << "After: a = " << a << ", b = " << b << endl
          << endl;

     a = 5;
     b = 10; // Reset

     // Method 2: Using arithmetic operations
     cout << "Method 2 - Using addition/subtraction:" << endl;
     cout << "Before: a = " << a << ", b = " << b << endl;
     a = a + b;
     b = a - b;
     a = a - b;
     cout << "After: a = " << a << ", b = " << b << endl
          << endl;

     a = 5;
     b = 10; // Reset

     // Method 3: Using XOR
     cout << "Method 3 - Using XOR:" << endl;
     cout << "Before: a = " << a << ", b = " << b << endl;
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
     cout << "After: a = " << a << ", b = " << b << endl
          << endl;

     a = 5;
     b = 10; // Reset

     // Method 4: Using multiplication/division
     cout << "Method 4 - Using multiplication/division:" << endl;
     cout << "Before: a = " << a << ", b = " << b << endl;
     a = a * b;
     b = a / b;
     a = a / b;
     cout << "After: a = " << a << ", b = " << b << endl;

     return 0;
}