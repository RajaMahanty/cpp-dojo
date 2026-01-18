#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int m = 2, n = 4, sum = 0;

  for (int i = m; i <= n; i++) {
    sum += i;
  }

  cout << "Sum: " << sum << endl;

  return 0;
}
