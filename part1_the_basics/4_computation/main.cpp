#include "std_lib_facilities.h"

void double_compare();
void running_max_min();

int main()
{
  running_max_min();
  return 0;
}

void double_comapre()
{
  double num1, num2;
  while (cin >> num1 >> num2)
  {
    if (abs(num1 - num2) < 1.0 / 100)
    {
      cout << "The numbers are almost equal." << endl;
    }
    else if (num1 > num2)
    {
      cout << "The smaller value is " << num2 << endl;
      cout << "The larger value is " << num1 << endl;
    }
    else
    {
      cout << "The smaller value is " << num1 << endl;
      cout << "The larger value is " << num2 << endl;
    }
  }
}

void running_max_min()
{
  double max, min;
  max = min = 0;
  double temp;
  while (cin >> temp)
  {
    if (temp > max)
      max = temp;
    if (temp < min)
      min = temp;
    cout << "The largest so far is " << max << endl;
    cout << "The smallest so far is " << min << endl;
  }
}