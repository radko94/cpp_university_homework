#include <iostream>

using namespace std;

int main()
{
  unsigned short int distance, boatSpeed, flowSpeed;

  cout << "Enter the distance, speed of the ship, and the speed of the current: " << endl;
  cout << "Distance: ";
  cin >> distance;
  cout << "Speed of the ship: ";
  cin >> boatSpeed;
  cout << "Speed of the current: ";
  cin >> flowSpeed;

  unsigned long int effectiveSpeed = boatSpeed + flowSpeed;

  if (flowSpeed < 0)
  {
    cout << "The ship is against the current" << endl;
  }
  else
  {
    cout << "The ship is with the current\n";
  }

  float time = distance / effectiveSpeed;
  cout << "Time = " << time << endl;

  return 0;
}