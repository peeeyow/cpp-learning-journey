#include <stdio.h>

int main()
{
    int string[] = {1, 2, 3, 4};
    int num[] = {5, 6, 7, 8};
    printf("%u\n", sizeof(string));
    printf("%i\n", *(num - 4));
    for (int i = 0; i < sizeof(string) / sizeof(string[0]); ++i)
    {
        printf("%i\n", (&string[0])[i]);
        printf("%i\n", (&num[1])[i]);
    }
}