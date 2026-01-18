#include <iostream>

using namespace std;

template <typename Type> void mySwap(Type &a, Type &b) {
  Type temp = a;
  a = b;
  b = temp;
}

int main(int argc, char *argv[]) {
  int a = 5, b = 7;
  cout << "A: " << a << " B: " << b << endl;
  mySwap<int>(a, b);
  cout << "A: " << a << " B: " << b << endl;

  char c1 = 'A', c2 = 'B';

  cout << "C1: " << c1 << " C1: " << c2 << endl;
  mySwap<char>(c1, c2);
  cout << "C1: " << c1 << " C1: " << c2 << endl;

  return 0;
}
