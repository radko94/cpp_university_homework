#include <iostream>

using namespace std;

int main()
{
  unsigned int volume;

  unsigned int bucketOneFillCount = 0;
  unsigned int bucketTwoFillCount = 0;

  unsigned short bucketOneVolume = 2;
  unsigned short bucketTwoVolume = 3;

  cout << "Enter the volume of your tank in liters: ";
  cin >> volume;

  while (volume >= 0)
  {
    bool volumeIsGreaterThanBucketOne = volume > bucketOneVolume;
    bool volumeIsEqualToBucketOne = volume <= bucketOneVolume;
    bool volumeIsGreaterThanBucketTwo = volume > bucketTwoVolume;
    bool volumeIsEqualToBucketTwo = volume == bucketTwoVolume;

    if (volumeIsEqualToBucketTwo)
    {
      cout << "We can fill both the buckets " << bucketTwoFillCount << " times." << endl;
      cout << "Its remaining " << volume << " liters which we can fill in the bucket of 3 liters." << endl;

      volume -= bucketTwoVolume;
      bucketOneFillCount++;

      break;
    }

    if (volumeIsEqualToBucketOne)
    {
      cout << "We can fill both the buckets " << bucketOneFillCount << " times." << endl;
      cout << "Its remaining " << volume << " liters which we can fill in the bucket of 2 liters." << endl;

      volume -= volume;
      bucketTwoFillCount++;

      break;
    }

    if (volumeIsGreaterThanBucketTwo)
    {
      volume -= bucketTwoVolume;
      bucketTwoFillCount++;
    }

    if (volumeIsGreaterThanBucketOne)
    {
      volume -= bucketOneVolume;
      bucketOneFillCount++;
    }
  }

  return 0;
}