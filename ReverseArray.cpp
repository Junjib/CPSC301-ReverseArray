#include <iostream>

using namespace std;

void reverseArray(int arr[], int size);

int main()
{
  int size = 0;

  cout << "Input the size of the array: ";
  cin >> size;

  int arr[size];

  cout << "Enter the integer elements of the array: ";

  int elem = 0;

  for(int i = 0; i < size; i++)
  {
    cin >> elem;
    arr[i] = elem;
  }

  cout << "Before: ";
  for(int i = 0; i < size ; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl << endl;

  reverseArray(arr, size);

  cout << "After: ";
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}

void reverseArray(int arr[], int size)
{
  int last = (size - 1);
  int temp[size];

  for(int i = 0; i < size; i++)
  {
    temp[i] = arr[i];
  }

  for(int j = 0; j < size; j++)
  {
    arr[j] = temp[last];
    last = (last - 1);
  }
}
