#include <iostream>

using namespace std;

int main()
{
  int firstNumber, secondNumber, thirdNumber;

  cout << "Enter three numbers, one by one: " << endl;
  cout << "First number: ";
  cin >> firstNumber;
  cout << "Second number: ";
  cin >> secondNumber;
  cout << "Third number: ";
  cin >> thirdNumber;

  if (firstNumber == 0)
  {
    firstNumber = thirdNumber - secondNumber;
    cout << firstNumber << endl;
  }
  else if (secondNumber == 0)
  {
    secondNumber = thirdNumber - firstNumber;
    cout << secondNumber << endl;
  }
  else if (thirdNumber == 0)
  {
    thirdNumber = firstNumber + secondNumber;
    cout << thirdNumber << endl;
  }

  return 0;
}