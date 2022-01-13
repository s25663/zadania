#include <iostream>
#include <string>
#include <iomanip>

struct czas{
	int hour;
	int minute;
	int second;
	
	czas(){
		std::cout << "stworzona \n";
	}
	
	auto to_string() -> std::string{
		
		std::string hour_string = std::to_string(hour);
		std::string minute_string = std::to_string(minute);
		std::string second_string = std::to_string(second);
		
		std::string a = "";
		std::string b = ":";
		std::string c = ":";
		
		if(hour < 10) a = "0";
		if(minute < 10) b = ":0";	
		if(second < 10) c = ":0";	
				
		std::string wynik = a + hour_string + b + minute_string + c + second_string ;
		
		
		return wynik;
		}
		
	auto next_hour() -> void{
		
		if(hour == 23) hour=0;
		else hour+=1;
		
		}
	auto next_minute() -> void{
		
		if(minute == 59){
			minute = 0;
			if(hour == 23) hour=0;
			
			else hour+=1;
			} 
			
		else minute+=1;
		}
	auto next_second() -> void{
		
		if(second == 59){	
			second = 0;
			
			if(minute == 59){
			minute = 0;
			
			if(hour == 23) hour=0;
			
			else hour+=1;
			} 
			
		else second+=1;
			
			
			
			} 
		else second+=1;
		
		}
	
	
	};




auto main() -> int{
	
	auto godzina = czas();
	godzina.hour = 23;
	godzina.minute = 59;
	godzina.second = 59;
	
	std::cout << godzina.to_string() << "\n";
	
	godzina.next_hour();	
	
	std::cout << godzina.to_string() << "\n";
	
	godzina.next_second();	
	
	std::cout << godzina.to_string() << "\n";
	
	godzina.next_minute();	
	
	std::cout << godzina.to_string() << "\n";
	
return 0;
}

