#include <iostream>
#include <stdio.h>
using namespace std;

const int &foo()
{
    return 2;
}

int main()
{
    // int a = foo();
    cout << foo() << endl;
    return EXIT_SUCCESS;
}