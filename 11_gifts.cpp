#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double S;
  int N, M;
  cin >> S >> N >> M;

  double max_price = 0;
  for (int i = 0; i < M; i++)
  {
    double price;
    cin >> price;

    if (price <= S / N && price > max_price)
    {
      max_price = price;
    }
  }

  cout << fixed << setprecision(2) << max_price << endl;

  return 0;
}