#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  float num1, num2, res;
  char op;
  cout << "Calculator" << endl;
  cout << "Enter two numbers and an operator" << endl;
  cout << "format: 10 + 20" << endl;
  cin >> num1 >> op >> num2;

  switch (op)
  {
  case '+':
    res = num1 + num2;
    break;
  case '-':
    res = num1 - num2;
    break;
  case '*':
    res = num1 * num2;
    break;
  case '/':
    res = num1 / num2;
    break;
  case '%':
    bool isNumInt1, isNumInt2;
    isNumInt1 = (int)num1 == num1;
    isNumInt2 = (int)num2 == num2;
    if (isNumInt1 && isNumInt2)
    {
      res = (int)num1 % (int)num2;
      break;
    }
    else
    {
      cout << "Invalid input";
      return 0;
    }
    break;
  default:
    cout << "Invalid operator";
    return 0;
  }

  cout << "The result of: " << num1 << " " << op << " " << num2 << " is: " << res;

  return 0;
}