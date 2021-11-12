#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int{
	
	
	if(argv[1]==NULL){
		
		for(int i=99;i>0;i--){
			std::cout << i << " bottles of beer on the wall, \n" << i << " bottles of beer. Take one down, pass it around, ";

			}
	
		std::cout << "\nNo more bottles of beer on the wall, no more bottles of beer. \n";
		std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall... \n";
	}
	else{
		
		int a = std::stoi(argv[1]);
		
		for(int i=a;i>0;i--){
			std::cout << i << " bottles of beer on the wall, \n" << i << " bottles of beer. Take one down, pass it around, ";

			}
	
		std::cout << "\nNo more bottles of beer on the wall, no more bottles of beer. \n";
		std::cout << "Go to the store and buy some more, "<< a <<" bottles of beer on the wall... \n";
		}
	
	
	
		
	
	
	return 0;
}
