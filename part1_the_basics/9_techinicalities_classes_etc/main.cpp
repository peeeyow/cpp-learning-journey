#include "std_lib_facilities.h"
#include <typeinfo>

class MyDate
{
public:
    MyDate(int year, int month, int day);
    void add_day(int n = 1);
    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

private:
    int day;
    int month;
    int year;
};

enum
{
    araw,
    gabi
};

enum class Time
{
    araw,
    gabi
};

int main()
{
    // int i = 5.59;
    // int j(5.59);
    // int k = {5.59};
    // int z{5.59};
    // cout << i << j << endl;
    cout << araw << gabi << endl;
    if (araw == 0)
    {
        cout << "yeah" << endl;
    }
    if (Time::araw == Time::araw)
    {
        cout << "equal" << endl;
    }
    cout << typeid(araw).name() << "vs" << typeid(Time::araw).name() << endl;
    return 0;
}