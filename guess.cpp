#include <iostream>
using namespace std;
int binarySearch(const int a[], int);
int main()
{
    int index;
    string ans;
    const int a[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    cout << "Think of a number in the range of 1-50 and I’ll guess it. " << endl;
    binarySearch(a, 50);
    cout << "Yay! I have succeeded!" << endl;
    return 0;
     
}
int binarySearch(const int arr[], int size)
{
  int first = 0;
  int last = size;
  int middle, index = -1;


  bool found = false;
  while((!found) && first <= last)
  {
    middle =(first + last)/2;
    string ans = "no";
    cout << "Is your number " << middle << "? ";
    cin >> ans;
    if(ans.compare("yes") == 0)
    {
      found = true;
      index = middle;
    }
    else if (ans.compare("no") == 0) //if(ans == "no")// that is target is in the lower half
    {   cout << "Is your number less than " << middle << "? ";
        cin >> ans;
        if (ans == "yes")
            last = middle-1;
        else
            first = middle + 1;
    }
  }
  return 0;
}
