#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
  float a, b, c;
  cout << "a, b, c: ";
  cin >> a >> b >> c;

  if (a == b && b == c)
    cout << "Equilateral triangle";
  else
  {
    if (a != b && b != c && a != c)
      cout << "Scalene triangle";
    else
      cout << "Isosceles triangle";
  }
}