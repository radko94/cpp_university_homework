#include <iostream>
#include <string>

using namespace std;

int main()
{
  int N;
  cin >> N;

  while (N != 153)
  {
    string num = to_string(N);
    int sum = 0;
    for (char c : num)
    {
      sum += (c - '0') * (c - '0') * (c - '0');
    }
    N = sum;
  }

  cout << N << endl;

  return 0;
}