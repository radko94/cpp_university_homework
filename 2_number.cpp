#include <iostream>

using namespace std;

int main()
{
  int number;

  cout << "Enter a three-digit number: ";
  cin >> number;

  int hundreds = number / 100;
  int tens = (number / 10) % 10;
  int ones = number % 10;

  int product = hundreds * tens * ones;

  if (number % product == 0)
  {
    cout << "Product = " << product << endl;
    cout << "The number is divisible by its digits." << endl;
  }
  else
  {
    cout << "Product = " << product << endl;
    cout << "The number is not divisible by its digits." << endl;
  }

  return 0;
}