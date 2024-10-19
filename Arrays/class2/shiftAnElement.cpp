#include <iostream>
using namespace std;

void rotateAnArray(int arr[], int n, int shift)
{

  int finalShift = shift % n;

  if (finalShift == 0)
  {
    return;
  }

  // store in temp;

  int temp[15];
  int k = 0;

  for (int i = n - finalShift; i < n; i++)
  {

    temp[k] = arr[i];

    k++;
  }

  // shift an array

  for (int i = n - 1; i >= 0; i--)
  {
    if (i - finalShift >= 0)
    {
      arr[i] = arr[i - finalShift];
    }
  }

  // push temp

  for (int i = 0; i < finalShift; i++)
  {
    arr[i] = temp[i];
  }
}

void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int arr[] = {10, 20, 30, 40, 50, 60};
  int n = 6;

  int shift = 7;
  print(arr, n);

  rotateAnArray(arr, n, shift);

  print(arr, n);

  return 0;
}