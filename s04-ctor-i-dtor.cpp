#include <iostream>
#include <string>

struct struktura{
		std::string tekst;
	struktura(){
		std::cout << "Podaj co dodać do struktury \n";
		std::cin >> tekst;
		}
	~struktura(){
		std::cout << "DESTRUCTION! " << tekst << "\n";
		}
	
	};


auto main() -> int{
	
	
	{
	auto jeden = struktura();
	}
	
	
	
	return 0;
}
