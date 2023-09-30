#include<iostream>

int main()
{
	int a = 0;
	int b = 1;
	int c = 0;
	std::cin >> a;
	if (a >= 2) 
	{
		for (int i = 0; i < (a / 2 + 1); i++)
		{
			c++;
			b *= 2;
			if (b >= a)break;
		}
	std::cout << c;
	}
	else
	{
		std::cout << 0;
	}
	return 0;
}