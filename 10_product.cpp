#include <iostream>

using namespace std;

int main()
{
  int n, m, k;
  cin >> n >> m >> k;

  int product = 1;
  for (int i = 1; i <= k; i++)
  {
    product *= (n + i * m);
  }

  cout << product << endl;

  return 0;
}