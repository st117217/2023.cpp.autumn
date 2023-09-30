#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	int b = a;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 0; (j < i) && (b>0); j++, b--)
		{
			std::cout << i << " ";
		}
	}
	return 0;
}