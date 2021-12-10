#include <iostream>
#include <string>

auto inside(int wej) -> void{
	
		auto a = wej;
		
		std::cout << a << " ";
		
		if(a%3==0){
			std::cout << "fizz";
			}
		if(a%5==0){
			std::cout << "buzz";
			}
		
		std::cout << "\n";
	
	
	}

auto main(int argc, char* argv[]) -> int{
	
	int a = std::stoi(argv[1]);
	
	for(int i=1;i<=a;i++){
		
			inside(i);
		
		}

	
	
	return 0;
	}
