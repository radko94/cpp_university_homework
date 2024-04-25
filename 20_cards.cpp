#include <iostream>
#include <string>

using namespace std;

int main()
{
  string cards[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
  string suits[] = {"Spades", "Diamonds", "Cups", "Spades"};

  int N;
  cin >> N;

  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 13; j++)
    {
      int card_number = i * 13 + j + 1;
      if (card_number >= N)
      {
        cout << cards[j] << " of " << suits[i] << endl;
      }
    }
  }

  return 0;
}