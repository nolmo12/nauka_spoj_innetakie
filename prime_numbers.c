#include <iostream>
#include <cmath>
bool czyPierwsza(int liczba)
{
	if (liczba == 0 || liczba == 1)
	{
		return false;
	}
	if (liczba == 2)
	{
		return true;
	}
	for (int i = 2; i < liczba; i++)
	{
		if (liczba % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int a;
	int b;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		std::cin >> b;
		if (czyPierwsza(b))
			std::cout << "TAK\n";
		else
			std::cout << "NIE\n";
	}
}
