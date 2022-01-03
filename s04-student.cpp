#include <string>
#include <iostream>
#include <iomanip>

struct studenci {
	std::string imie;
	std::string nazwisko;
	int indexnr;
	int semestr;
	double srednia;
	
	studenci(){
		std::cout << "dodano osobę do bazy studentów \n";
		}
	auto to_string() -> std::string{
		
		std::string indexnrstring = std::to_string(indexnr);
		std::string semestrstring = std::to_string(semestr);
		std::string sredniastring = std::to_string(srednia);
		
		std::string wynik = imie + " " + nazwisko + " (s" + indexnrstring + "), semestr " + semestrstring + ": " + sredniastring + "\n";
		return wynik;	

		}
		

	};


auto main() -> int{
	
	
	
	auto student = studenci();
	student.imie = "Filip";
	student.nazwisko = "Kliczewski";
	student.indexnr = 12345;
	student.semestr = 1;
	student.srednia = 4.268;
	
	std::cout << std::setprecision(3) << student.to_string();
	
	return 0;
	}
