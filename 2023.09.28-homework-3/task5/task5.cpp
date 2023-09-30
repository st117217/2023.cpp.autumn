#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	int b = 0;
	for (int i = 1; i <= a; i++)
	{
		int c = i;
		int d = 0;
		while (c > 0)
		{
			d = d * 10 + c % 10;
			c = c / 10;
		}
		if (d == i)
		{
			b++;
		}
	}
	std::cout << b;

	return 0;
}