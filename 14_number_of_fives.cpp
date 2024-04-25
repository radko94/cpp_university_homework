#include <iostream>
#include <string>

using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  if (N > M)
    swap(N, M);

  int count = 0;
  for (int i = N; i <= M; i++)
  {
    string num = to_string(i);
    for (char c : num)
    {
      if (c == '5')
      {
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}