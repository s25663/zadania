#include <iostream>
#include <string>
#include <math.h>
#include <string.h>

auto main(int argc, char* argv[]) -> int{
	
	int a = std::stoi(argv[1]);
	int b = std::stoi(argv[2]);
	auto znak = argv[3];
	double a1 = 0;
	double b1 = 0;
	
	if (strcmp( znak, "+") == 0){
		std::cout << a << " + " << b << " = " << a+b;
	}
	
	else if (strcmp( znak, "-") == 0){
		std::cout << a << " - " << b << " = " << a-b;
	}
	else if (strcmp( znak, "*") == 0){
		std::cout << a << " * " << b << " = " << a*b;
	}
	else if (strcmp( znak, "/") == 0){
		a1 = a*1.0;
		b1 = b*1.0;
		std::cout << a1 << " / " << b1 << " = " << a1/b1;
	}
		
	else if (strcmp( znak, "//") == 0){
		std::cout << a << " / " << b << " = " << a/b;
	}
	else if (strcmp( znak, "**") == 0){
		std::cout << a << " do potęgi " << b << " = " << pow(a, b);
	}
	else if (strcmp( znak, "sqrt") == 0){
		std::cout << " pierwiastek kwadratowy z "<< a << " i " << b << " wynosi " << sqrt(a) << " " << sqrt(b);
	}
	else{
		std::cout << "Coś namieszałeś/namieszałaś, spróbuj ponownie i wpisz poprawnie - cyfrę cyfrę działanie";
		}
	
		return 0;
	
	
}

