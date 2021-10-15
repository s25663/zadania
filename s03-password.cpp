#include <iostream>
#include <string>
auto do_while_loop(std::string init) -> void
{
    auto i = init;
    std::string a;
    do {
		
        std::cout << "password: ";
        std::cin >> a;
       
    } while (a != i);
	
	std::cout << "ok!" << '\n';
	
}
auto main(int argc, char* argv[]) -> int
{
	
    do_while_loop(argv[1]);



    return 0;
}
