#include <iostream>
#include <limits>
#include <cmath>

int main()
{
    std::cout << "select a mode: \n(1) hypotenuse calc\nmore coming soon...\n";
    std::string mode{};
    std::cin >> mode;
    if (mode == "1")
    {
        double a, b;
        std::cout << "base: \n";
        std::cin >> a;
        std::cout << "height: \n";
        std::cin >> b;
        std::cout << "hypotenuse: " << hypot(a, b) << '\n';
    }
    else
    {
        std::cout << "enter the number in the parentheses of the mode you want\n";
    }

    std::cout << "press enter until exit";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}