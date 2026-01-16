#include <iostream>

using namespace std;

int main()
{
  float weight, height, bmi;

  cout << "Enter Weight (kg): ";
  cin >> weight;
  cout << "Enter Height (cm): ";
  cin >> height;

  height = height / 100;
  bmi = weight / (height * height);

  if (bmi < 18.5)
    cout << "You are underweight";
  else if (bmi < 25)
    cout << "You are normal";
  else if (bmi < 30)
    cout << "You are overweight";
  else
    cout << "you fat";

  cout << " and your BMI is: " << bmi;

  return 0;
}