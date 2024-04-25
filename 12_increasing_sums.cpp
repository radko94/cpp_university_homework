#include <iostream>

using namespace std;

int main()
{
  int n, m, k;
  cin >> n >> m >> k;

  int sum = 0;
  for (int i = 1; i <= k; i++)
  {
    sum += (n + i * m);
  }

  cout << sum << endl;

  return 0;
}