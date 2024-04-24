#include <iostream>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  if (N > M)
    swap(N, M);

  int start = M - M % 50;

  for (int i = start; i >= N; i -= 50)
  {
    if (i % 50 == 0)
    {
      cout << i << " ";
    }
  }

  return 0;
}