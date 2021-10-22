// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	//definicja zmiennych
	//int a, intA = 23;
	//float a, b;
	//double a, b, c, d;
	char znak = 'c';
	string imie = "jan", nrAlbumu = "w1234";
	

	//cout << "nr Albumu: " << nrAlbumu << endl;

	// wczytywanie dancyh z klawiatury 
	//cout << "Podaj liczbe: ", cin >> a;

	// Instrukcja warunkowa

	//if (a%2==0) {
		// blok instrukcji
		//cout << "Liczba parzysta\n";
	//} else {
		//blok instrukcji
		//cout << "liczba nieparzysta\n";
		//cout << "kolejna instrukcja w bloku \n";
	//}


	// zad 3
	//cout << "podaj liczbe a: ", cin >> a;
	//cout << "podaj liczbe b: ", cin >> b;

	//if (a == b) {
		//cout << " Liczby sa rowne\n";
	//}
	//else if (a > b) {
	//cout << "liczba a jest wieksza\n";
	//}
	//else {
	//cout << "Liczba b jest wieksza\n";
	//}

	
	// zad 4 
	float a, b, c,d;
	int wybor;

	cout << "podaj liczbe a b c i d ", cin >> a >> b >> c >> d;
	cout << "\nDzialanie : \n1. Suma\n2. Róznica \n3. Iloczyn \n4. Iloraz \n5. Srednia Arytmetyczna 4 liczb\n";
	cout << "Wybierz opcje: ", cin >> wybor;

	

	switch (wybor)
	{
	case 1:
		cout << "Suma " << a << " + " << b << " = " << a + b << endl;
		break;
	case 2:
		cout << "Roznica " << a << " - " << b << " = " << a - b << endl;
		break;
	case 3:
		cout << "Iloczyn " << a << " * " << b << " = " << a * b << endl;
		break;
	case 4:
		if (b != 0 )
		cout << "Iloraz " << a << " / " << b << " = " << a / b << endl;
		else {
			cout << "Nie mo¿na dzielic przez 0\n";
		}
	case 5:
		cout << "Srednia arytmetyczna " << (a + b + c + d) / 4 << endl;
	default:
		cout << "nie ma takiej opcji\n";
		break;
	}
	// + - * / %-mod
	// > < >= != ==
	// AND - && , Or - ||, NOT  - !
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
