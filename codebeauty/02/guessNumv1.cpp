#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int a, b;
  cout << "Host: ";
  cin >> a;
  cout << "Guest: ";
  cin >> b;

  a == b ? cout << "Correct" : cout << "Wrong";

  // if (a == b)
  //   cout << "Correct";
  // else
  //   cout << "Wrong";

  return 0;
}