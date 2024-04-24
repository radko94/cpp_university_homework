#include <iostream>

using namespace std;

int main()
{
  int V, D1, D2, D3;

  cout << "Please enter the volume of the pool (V): " << endl;
  cin >> V;
  cout << "Please enter the flow rate of the first tap (D1): " << endl;
  cin >> D1;
  cout << "Please enter the flow rate of the second tap (D2): " << endl;
  cin >> D2;
  cout << "Please enter the flow rate of the third tap (D3): " << endl;
  cin >> D3;

  int totalFlowRate = D1 + D2 + D3;
  int time = V / totalFlowRate;

  cout << time << endl;

  if (D1 < 0 || D2 < 0 || D3 < 0)
  {
    cout << "One of the taps is draining the pool." << endl;
  }

  return 0;
}