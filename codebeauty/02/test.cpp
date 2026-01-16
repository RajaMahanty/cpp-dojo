#include <iostream>
#include <typeinfo>

using namespace std;

void sum(float a, float b)
{
  cout << a + b << endl;
  cout << typeid(a).name() << endl;
  cout << typeid(b).name() << endl;
}

void sum(double a, double b)
{
  cout << a + b << endl;
  cout << typeid(a).name() << endl;
  cout << typeid(b).name() << endl;
}

double sum(double a, float b)
{
  cout << a + b << endl;
  cout << typeid(a).name() << endl;
  cout << typeid(b).name() << endl;
  return a + b;
}

int main(int argc, char const *argv[])
{
  // sum(1.2f, 1.2f);
  // sum(1.2f, 1.2);
  // sum(1.2, 1.2f);
  sum(1.2, 1.2);
  double result = sum(1.2, 1.2f);
  cout << result << endl;
  cout << typeid(result).name() << endl;
  return 0;
}