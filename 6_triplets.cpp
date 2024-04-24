#include <iostream>

using namespace std;

int main()
{
  int sum;

  cout << "Please enter the sum of the digits: " << endl;

  cin >> sum;

  if (sum < 2 || sum > 27)
  {
    cout << "The sum is out of the allowed range." << endl;
    return 1; // Exit if input is not in the interval [2, 27]
  }

  for (int i = 100; i < 1000; ++i)
  {
    int hundreds = i / 100;
    int tens = (i / 10) % 10;
    int ones = i % 10;
    if (hundreds + tens + ones == sum)
    {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}