#include <iostream>
#include <string>

using namespace std;
int Odpowiedz;
int Suma;

class Pytanie
{
	private:
		string Tresc_pytania;
		string Odpowiedz_1;
		string Odpowiedz_2;
		string Odpowiedz_3;
		
		int Poprawna_odpowiedz;
		int Punkty;
		
	public:
		void set_Values (string, string, string, string, int, int);
		void zadaj_pytanie ( );
};
 int main()
 {
 	setlocale( LC_ALL, "" );
 	cout << " Witaj w QUIZZ! " << endl;
	cout << endl;

cout << " Aby rozpocz�� zabaw� wci�nij enter..." << endl;
cin.get();
string Imie;
int Wiek;
cout<< " Jak masz na imi� ? " << endl;
cin >> Imie;
cout << endl;
cout << " Ile masz lat ? " << endl;
cin >> Wiek;
cout << endl;
cout << " Zaczynamy QUIZZ " << Imie << " ? " << endl;


 
 
 Pytanie p1;
 Pytanie p2;
 Pytanie p3;
 
 p1.set_Values(" W kt�rym mie�cie powinna si� znajdowa� stolica Polski ? ",
 				" Krak�w ",
				" Warszawa ",
				" Gda�sk ",
				1,
				10);
 p2.set_Values( " Czy programowanie jest wspania�e ?",
 				" Nie ",
				" Tak ",
				" Tylko troch�...",
				2,
				10);
 p3.set_Values( " Kt�ry nap�j jest zdecydowanie najlepszy ?",
 				" Woda ",
				" Mleko ",
				" Piwo :) ",
				3,
				10);
				
		p1.zadaj_pytanie();
		p2.zadaj_pytanie();
		p3.zadaj_pytanie();
		
	cout << " Uzyska�e� " << Suma << " z 30 mo�liwych punkt�w " << endl;
	cout << endl;
	
if (Suma == 30)
{
	cout << " Gratulacje ! Jeste� moim mistrzem ! " << endl;
	cout << endl;
	
}
else
{
	cout << " Przykro mi, ale zdecydowanie sta� Ci� na lepszy wynik! " << endl;
	cout << endl;
	
}
return 0;}

void Pytanie::set_Values(string p, string O1, string O2, string O3, int Po, int Pkt)
{
	Tresc_pytania = p;
	Odpowiedz_1 = O1;
	Odpowiedz_2 = O2;
	Odpowiedz_3 = O3;
	Poprawna_odpowiedz = Po;
	Punkty = Pkt;
}
void Pytanie::zadaj_pytanie()
{
	cout << endl;
	cout << Tresc_pytania << endl;
	cout << " 1. " << Odpowiedz_1 << endl;
	cout << " 2. " << Odpowiedz_2 << endl;
	cout << " 3. " << Odpowiedz_3 << endl;
	cout << endl;
	
	cout << " Jaka jest Twoja odpowied� ? " << endl;
	cin>> Odpowiedz;
		if (Odpowiedz == Poprawna_odpowiedz)
		{
			cout << endl;
			cout << " �wietnie ! Masz racj� !" << endl;
			Suma = Suma + Punkty;
			cout << " Punkty :" << Punkty << endl;
			cout << endl;
			
		}
		else
		{
			cout << endl;
			cout << " Niestety Twoja odpowied� jest b��dna !" << endl;
			cout << " Otrzymujesz: 0 " << " z " << Punkty << " ! " <<endl;
			cout << " Poprawna odpowied� to : " << Poprawna_odpowiedz << " ! " <<endl;
			cout << endl;
		}
};
