#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

int main()
{
    // std::cout << std::showbase << std::hex << 255;
    // int n;
    // std::cin >> std::hex >> n;
    // std::cout << std::dec << n;
    float x = 123456.0;
    std::cout << std::fixed << std::setprecision(5) << x;
    std::cin.get();
    std::string temp;
    std::getline(std::cin, temp);
}