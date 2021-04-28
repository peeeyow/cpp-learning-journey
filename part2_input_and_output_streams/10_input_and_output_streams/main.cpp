#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::cout << "Input String name: " << std::endl;
    std::string file_name{};
    std::cin >> file_name;
    // defining an input file stream
    std::ifstream ist{file_name};
    // no input file stream was opened
    if (!ist)
        throw std::runtime_error("hahaha");
    while (true)
    {
    }
}