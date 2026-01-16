#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int num, counter;
  cout << "Number: ";
  cin >> num;
  if (num == 0)
    cout << "You entered zero";
  else
  {
    (num < 0) ? (num *= -1) : num;
    counter = 0;
    while (num > 0)
    {
      num /= 10;
      counter++;
    }
    cout << "Number of digits: " << counter;
  }
  return 0;
}
