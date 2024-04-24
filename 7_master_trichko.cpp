#include <iostream>

using namespace std;

int main()
{
  int numberOfRectangles;
  cout << "Enter the number of rectangles: ";
  cin >> numberOfRectangles;

  int total_length = 0, max_height = 0;
  for (int i = 0; i < numberOfRectangles; i++)
  {
    int base, height;
    cout << "Enter the base of the rectangle " << i + 1 << ": ";
    cin >> base;
    cout << "Enter the height of the rectangle " << i + 1 << ": ";
    cin >> height;

    total_length += base;
    max_height = max(max_height, height);
  }

  cout << "length = " << total_length << endl;
  cout << "width = " << max_height << endl;

  return 0;
}