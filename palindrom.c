#include <iostream>
#include <string>
#include <cmath>

bool czyPalindrom(int a)
{
	std::string liczba = std::to_string(a);
	for (int i = 0; i < std::size(liczba) / 2; i++)
	{
		if (liczba[i] != liczba[(std::size(liczba)-1) - i])
		{
			return false;
		}
	}
	return true;
}
int odwrocenie(int a)
{
	char pomoc;
	int licznik = 0;
	std::string liczba = std::to_string(a);
	for (int i = std::size(liczba)-1; i >= std::size(liczba)/2; i--)
	{
		pomoc = liczba[licznik];
		liczba[licznik] = liczba[i];
		liczba[i] = pomoc;
		licznik++;
	}
	int wynik = std::stoi(liczba);
	return wynik;
}
int main()
{
	int n, k=0, x;
	std::cin>> n;
	for (int i = 0; i < n; i++)
	{
		k = 0;
		std::cin >> x;
		while (!czyPalindrom(x))
		{
			k++;
			x = x + odwrocenie(x);
		}
		std::cout << x << " " << k<<"\n";
	}
}
