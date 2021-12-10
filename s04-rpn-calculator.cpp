#include <iostream>
#include <string>
#include <math.h>

auto main(int argc, char * argv[]) -> int{
	
	int a = stoi(argv[1]);
	int b = stoi(argv[2]);
	char znak = argv[3];
	
	switch (znak){
	
	case '+':
		std::cout << a << " + " << b << " = " << a+b;
		break;
	
	case '-':
		std::cout << a << " - " << b << " = " << a-b;
		break;
	case '*':
		std::cout << a << " * " << b << " = " << a*b;
		break;
	case '/':
		double a1 = a*1.0;
		double b1 = b*1.0;
		std::cout << a1 << " / " << b1 << " = " << a1/b1;
		break;
	case '//':
		std::cout << a << " / " << b << " = " << a/b;
		break;
	case '**':
		std::cout << a << " do potęgi " << b << " = " << pow(a, b);
		break;
	case 'sqrt':
		std::cout << " pierwiastek kwadratowy z "<< a << "i " << b << " wynosi " << sqrt(a) << " " << sqrt(b);
		break;
	
	
	}
	
}

