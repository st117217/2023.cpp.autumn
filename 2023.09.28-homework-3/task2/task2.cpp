#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	while (a % 10 == 0)
	{
		a /= 10;
	}
	while (a > 0)
	{
		std::cout << a % 10;
		a /= 10;
	}
	return 0;
}