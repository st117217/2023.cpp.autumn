#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;

	if (a > 0)
	{
		for (int i = 0; i <= a; ++i)
		{
			std::cout << i << " ";
		}
	}
	else
	{
		a = -a;
		for (int i = 0; i <= a; ++i)
		{
			std::cout << -i << " ";
		}
	}

	return EXIT_SUCCESS;
}
