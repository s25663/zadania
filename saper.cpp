#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <string.h>

//cst to losowosc, string h to sprawdzanie stringa, algorithm, wypełnianie tablicy ale nie uzywam

using namespace std;

auto wyswietlanie_testy(int tabela[32][32]) -> void{
	
//wyswietlanie tabeli do testowania

	std::cout << "  |         ";
	
	for(int i=1; i<=10;i++){
		std::cout << "1"; 
		}
	for(int i=1; i<=10;i++){
		std::cout << "2"; 
		}
		
	std::cout << "3\n";
	
	std::cout << "  |";
	
	for(int i=1; i<=9;i++){
		std::cout << i << ""; 
		}
	for(int i=0; i<=9;i++){
		std::cout << i << ""; 
		}
	for(int i=0; i<=9;i++){
		std::cout << i << ""; 
		}
	std::cout << "0";
	
	std::cout << "\n";

	std::cout << "--|";
	
	for(int i=1; i<=30;i++){
		std::cout << "-"; 
		}
		std::cout << "\n";
	
	for(int i=1; i<=30;i++){
		
		if(i<10) std::cout << " " << i << "|";
		else std::cout << i << "|";
		
		for(int j=1; j<=30;j++){
			if(tabela[i][j]<0) std::cout << "m";
			else std::cout << tabela[i][j];
		}
		std::cout << "\n";
	}
	std::cout << "\n";

}

///////////////////////////////////////////////////////////////////////////////////////////

auto wyswietlanie(int tabela[32][32]) -> void{
	
//wyswietlanie tabeli

	std::cout << "  |         ";
	
	for(int i=1; i<=10;i++){
		std::cout << "1"; 
		}
	for(int i=1; i<=10;i++){
		std::cout << "2"; 
		}
		
	std::cout << "3\n";
	
	std::cout << "  |";
	
	for(int i=1; i<=9;i++){
		std::cout << i << ""; 
		}
	for(int i=0; i<=9;i++){
		std::cout << i << ""; 
		}
	for(int i=0; i<=9;i++){
		std::cout << i << ""; 
		}
	std::cout << "0";
	
	std::cout << "\n";

	std::cout << "--|";
	
	for(int i=1; i<=30;i++){
		std::cout << "-"; 
		}
		std::cout << "\n";
	
	for(int i=1; i<=30;i++){
		
		if(i<10) std::cout << " " << i << "|";
		else std::cout << i << "|";
		
		for(int j=1; j<=30;j++){
			
			if(tabela[i][j]==9) std::cout << " ";
			else if(tabela[i][j]==0) std::cout << ".";
			else if(tabela[i][j]>=1 && tabela[i][j]<=8) std::cout << tabela[i][j];
			else if(tabela[i][j]==12 || tabela[i][j]==13) std::cout << "X";
		}
		std::cout << "\n";
	}
	std::cout << "\n";

}


//////////////////////////////////////////////////////////////////////////////

auto wyswietlanie_odp(int tabela[32][32]) -> void{
	
//wyswietlanie tabeli

	std::cout << "  |         ";
	
	for(int i=1; i<=10;i++){
		std::cout << "1"; 
		}
	for(int i=1; i<=10;i++){
		std::cout << "2"; 
		}
		
	std::cout << "3\n";
	
	std::cout << "  |";
	
	for(int i=1; i<=9;i++){
		std::cout << i << ""; 
		}
	for(int i=0; i<=9;i++){
		std::cout << i << ""; 
		}
	for(int i=0; i<=9;i++){
		std::cout << i << ""; 
		}
	std::cout << "0";
	
	std::cout << "\n";

	std::cout << "--|";
	
	for(int i=1; i<=30;i++){
		std::cout << "-"; 
		}
		std::cout << "\n";
	
	for(int i=1; i<=30;i++){
		
		if(i<10) std::cout << " " << i << "|";
		else std::cout << i << "|";
		
		for(int j=1; j<=30;j++){
			
			if(tabela[i][j]==9) std::cout << " ";
			else if(tabela[i][j]==0) std::cout << ".";
			else if(tabela[i][j]>=1 && tabela[i][j]<=8) std::cout << tabela[i][j];
			else if(tabela[i][j]==13) std::cout << "X";
			else if(tabela[i][j]==12) std::cout << "+";
			else if(tabela[i][j]==10) std::cout << "*";

		}
		std::cout << "\n";
	}
	std::cout << "\n";

}

/////////////////////////////////////////////////////////////////////////////


auto main() -> int {

//system działania odp - 0=puste pole, 1-8=pole obok miny, -1=mina
//system działania dec - 9=pola nieodkryte, 0=pole odkryte, 1-8=pole obok miny, 12=pole trafione (wyśw jako zaznaczone, w odp jako trafione) 
//13=pole nietrafione (wyśw jako zaznaczone, w odp nietrafione)

//tablica "odpowiedzi" od 0 do 31 uzywam 1-30 a reszta jest do "absorwowania dodawania"


	int ilosc_min=15;

	int odp [32][32];
	int dec [32][32];
	int rand();
	auto l1=0;
	auto l2=0;
	int los_ilosc=0;
	int wiersz;
	int kolumna;
	char operacja='a';
	int koniec_gry;
	int ods_p;
	int wejscie_test=0;

//wypełnianie tablic
	
	for(int i=0; i<=31;i++){
		for(int j=0; j<=31;j++){
			odp[i][j]=0;
			dec[i][j]=9;
		}
	}
	
//by zegar losowal nowe wartosci
	srand(time(NULL));
//losowanie min
	while(los_ilosc<ilosc_min){
		l1 = rand()% 30 +1;
		l2 = rand()% 30 +1;
		
		if(odp[l1][l2]>=0){
			odp[l1][l2]=-1;
			
			for(int i=-1;i<=1;i++){
				for(int j=-1;j<=1;j++){
					if(odp[l1+i][l2+j]>=0){
							odp[l1+i][l2+j]+=1;
					}
				}
			}
			
			los_ilosc+=1;
		}
	}
//koniec losowania
//intro do gry

	std::cout << "Witaj w saperze! Twoim zadaniem jest znalezienie wszystkich min ukrytych na planszy.\n";
	std::cout << "Podaj numer wiersza, numer kolumny i operację którą chcesz wykonać: \n";
	std::cout << "z - oznaczenie pola na którym myślisz że jest mina \np - odsłonięcie pola \nf - zdjęcie oznaczenia miny \n";
	std::cout << "Przykładowa komenda wygląda tak: 21 13 z \nBaw się dobrze! \n";

	wyswietlanie(dec);
	
//"SILNIK" GRY

	while(koniec_gry==0){

		std::cin >> wiersz >> kolumna >> operacja;
		std::cout << "\n";
		
		wejscie_test=0;
		
		if(wiersz<1 || wiersz>30) {
			wejscie_test+=1;
			std::cout << "błąd wiersza\n";
			}
			
		if(kolumna<1 || kolumna>30) {
			wejscie_test+=1;
			std::cout << "błąd kolumny\n";
			}
		
		if(operacja!='z' && operacja!='p' && operacja!='f') {
			wejscie_test+=1;
			std::cout << "błąd operacji\n";
			}
		
		if(wejscie_test==0){
		//decyzja 
			if(operacja == 'z'){
				
				
				if(dec[wiersz][kolumna]==12 || dec[wiersz][kolumna]==13){
					std::cout << "Nie możesz oznaczyć jako zaminowane już oznaczonego pola!\n";
				}
				else if(dec[wiersz][kolumna]>=0 && dec[wiersz][kolumna]<=8){
					std::cout << "Nie możesz oznaczyć jako zaminowane już odsłoniętego pola!\n";
				}
				
				else if(odp[wiersz][kolumna]<0){
					dec[wiersz][kolumna]=12;
				}
				
				else if(odp[wiersz][kolumna]>=0){
					dec[wiersz][kolumna]=13;
				}
				
			
			}
			else if(operacja == 'p'){
				
				if(odp[wiersz][kolumna]<0){
					koniec_gry+=1;
				}
				else if(dec[wiersz][kolumna]>=0 && dec[wiersz][kolumna]<=8){
					std::cout << "Nie możesz odsłonić odsłoniętego pola -.-\n";
				}
				else if(dec[wiersz][kolumna]==12 || dec[wiersz][kolumna]==13){
					std::cout << "Nie możesz odsłonić pola, które oznaczyłeś jako zaminowane!\n";
				}
				
				else{
					dec[wiersz][kolumna]=odp[wiersz][kolumna];
					}
			
			}
			else if(operacja == 'f'){
				if(dec[wiersz][kolumna]==12 || dec[wiersz][kolumna]==13){
					dec[wiersz][kolumna]=9;
				}
				else std::cout << "Pole które próbowałeś wybrać nie zostało oznakowane jako zaminowane\n";
			}
	
		


		std::cout << wiersz << " " << kolumna << " " << operacja << " <--Podana komenda\n";
		
		}
		else std::cout << "Wpisałeś niepoprawne dane\n";

//sprawdzanie wygranej

	ods_p=0;

	if(koniec_gry!=1){
		for(int i=1; i<=30;i++){
			for(int j=1; j<=30;j++){
				if(dec[i][j]>=0 && dec[i][j]<=8)ods_p+=1;
			}
		}
		if(ods_p==(900-ilosc_min)) koniec_gry+=2;
	}

	//cout<<ods_p<<"\n";

//sprawdzenie czy gra sie skonczyla do wysw

		if(koniec_gry==0) wyswietlanie(dec);
	}
	
//potem 0=. 1-8=1-8  9=" " 12=X  13=X
//wgranie min z odp do dec tak ze jezeli nie 12lub13 to 10-> wynik 0=. 1-8=1-8  9=" " 12=+  13=X 10=*
	
//zakończenie gry
	if(koniec_gry==1){
		for(int i=1; i<=30;i++){
			for(int j=1; j<=30;j++){
				if(odp[i][j]<0){
					if(dec[i][j]!=12){
						dec[i][j]=10;
					}
				}
			}
		}
		
		wyswietlanie_odp(dec);
		std::cout<<"Niestety graczu przegrałeś, + to dobrze trafione miny a * to miny których nie wytypowałeś (na jedną musiałeś się nadziać hah)\n";
	}
	
	else if(koniec_gry==2){
		wyswietlanie_odp(dec);
		std::cout<<"Brawo wygrałeś! (+ to twoje trafione miny)\n";
	}
	else std::cout << "Zrobiłeś coś dziwnego lol. Gra skończona, papa\n";
	
return 0;	
}
