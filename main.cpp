#include <iostream>
#include <limits>

int main()
{
    std::cout << "placeholder";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}