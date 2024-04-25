#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int N, S;
  cin >> N >> S;

  while (N > 0)
  {
    int power = pow(S, (int)log2(N));
    cout << power << endl;
    N -= power;
  }

  return 0;
}