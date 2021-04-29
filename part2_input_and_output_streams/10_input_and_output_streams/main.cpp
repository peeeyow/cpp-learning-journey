#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>

int main()
{
    // std::cout << "Input String name: " << std::endl;
    // std::string file_name{};
    // std::cin >> file_name;
    // // defining an input file stream
    // std::ifstream ist{file_name};
    // // no input file stream was opened
    // if (!ist)
    //     throw std::runtime_error("hahaha");
    // while (true)
    // {
    // }
    // int n{};
    // std::cin >> n;
    // std::exception();
    // if (std::cin.fail())
    // {
    //     std::cin.clear();
    //     char c;
    //     std::cin >> c;
    //     std::cout << "The value inserted is " << c << std::endl;
    // }
    // std::cout << "The value of n is " << n << std::endl;
    // enum day
    // {
    //     araw,
    //     gabi
    // };
    // enum class ano
    // {
    //     gaga,
    //     gago
    // };
    // std::cout << static_cast<bool>(day::gabi == ano::gago) << std::endl;
    char array[3];
    printf("%p", array);
    std::cout << std::endl;
    printf("%p", &array);
}