#include <iostream>

int main()
{
	short a = 0;
	char b = 0;
	std::cin >> a;
	b = a % 10;
	switch (b)
	{
	case 0:std::cout << a << " " << "bochek"; break;
	case 1:
		if (a % 100 == 11)
		{
			std::cout << a << " " << "bochek";
		}
		else
		{
			std::cout << a << " " << "bochka";
		}break;
	case 2:
		if (a % 100 == 12)
		{
			std::cout << a << " " << "bochek";
		}
		else
		{
			std::cout << a << " " << "bochki";
		}break;
	case 3:
		if (a % 100 == 13)
		{
			std::cout << a << " " << "bochek";
		}
		else
		{
			std::cout << a << " " << "bochki";
		}break;
	case 4:
		if (a % 100 == 14)
		{
			std::cout << a << " " << "bochek";
		}
		else
		{
			std::cout << a << " " << "bochki";
		}break;
	case 5:std::cout << a << " " << "bochek"; break;
	case 6:std::cout << a << " " << "bochek"; break;
	case 7:std::cout << a << " " << "bochek"; break;
	case 8:std::cout << a << " " << "bochek"; break;
	case 9:std::cout << a << " " << "bochek"; break;
	}

	return 0;
}