#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sayi, sayac, toplam=0, N;
	cout << "N degerini giriniz";
	cin >> N;
	
	for(sayac=1; sayac<=N; sayac++) {
		cout<<"sayi giriniz";
		cin>> sayi;
		toplam = toplam + sayi;
		// sonsuz döngü için bu satýra sayac--; ekleriz 2. secenek ise 13. satýrdaki sayac++ yazmamalýyýz
	}
	
	cout << "toplam: "<< toplam;
	

	
	
	
	
	
	getch();
	return 0;
}
