#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }

    auto const name = std::string{argv[1]};
    std::cout << "Hello, " << name << "!\n";

    return 0;
}


//zadanie wykonane, bez Kasi wyskakuje error bo nie podalismy argumentu
