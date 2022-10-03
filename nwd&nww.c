#include <iostream>

int nwd(int a, int b)
{
	if (b != 0)
		return nwd(b, a % b);

	return a;
}
int nww(int a, int b)
{
	return (a * b) / nwd(a, b);
}
int main()
{
	int a;
	int b;
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> a >>b;
		std::cout<<nww(a, b)<<std::endl;
	}
}
