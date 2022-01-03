#include <iostream>
#include <string>
#include <cstdlib>


auto main() -> int
{
	int rand();
	auto wyn=0;
	
	auto pifpaf = std::string{};
	
	srand(time(NULL));
	auto losik = rand()% 100 +1;
	
	do{
		
	std::cout<<"guess: ";
	std::getline(std::cin, pifpaf);
	auto a = std::stoi(pifpaf);	
	
	
	if(a>losik){
		std::cout<<"number too big!\n";
		}
	else if(a<losik){
		std::cout<<"number too small!\n";
		}
	else if(a==losik){
		std::cout << "just right!\n";
		wyn+=1;
		}
	
	
	
	
	
	}
	while(wyn==0);
	return 0;
}
