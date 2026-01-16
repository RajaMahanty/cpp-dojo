#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  // All the numbes between 100 and 500 that are divisible by 3 & 5
  int counter = 100;
  while (counter <= 500)
  {
    if (counter % 3 == 0 && counter % 5 == 0)
      cout << counter << " ";
    counter++;
  }
  return 0;
}