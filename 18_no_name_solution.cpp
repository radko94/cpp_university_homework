#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  while (N != 1)
  {
    if (N % 2 == 0)
    {
      N /= 2;
      cout << N << " ";
    }
    else
    {
      N = 3 * N + 1;
      cout << N << " ";
    }
  }

  cout << endl;

  return 0;
}