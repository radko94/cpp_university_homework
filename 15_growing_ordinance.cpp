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
    bool is_increasing = true;
    for (int j = 0; j < num.size() - 1; j++)
    {
      if (num[j] >= num[j + 1])
      {
        is_increasing = false;
        break;
      }
    }
    if (is_increasing)
    {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}