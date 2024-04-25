#include <iostream>
#include <string>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  if (N > M)
    swap(N, M);

  for (int i = N; i <= M; i++)
  {
    string num = to_string(i);
    if (num[2] != '0')
    {
      int divisor = (num[0] - '0') * 10 + (num[2] - '0');
      if (i % divisor == 0)
      {
        cout << i << "/" << divisor << endl;
      }
    }
  }

  return 0;
}