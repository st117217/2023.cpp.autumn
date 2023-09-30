#include <iostream>

int main()
{
	unsigned int a = 0;
	std::cin >> a;
	int b = 1;
	for (int i = 2; i <= a; i++)
	{
		int c = 1;
		while (a % i == 0)
		{
			a /= i;
			c++;
		}
		b = b * c;
	}
	std::cout << b;


	return 0;
}