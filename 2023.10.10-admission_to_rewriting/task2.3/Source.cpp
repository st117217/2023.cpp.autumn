#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if((i + j + 1) % n ==0)
			{
				std::cout << 5;
			}
			else
			{
				std::cout << (i + j + 1) % n;
			}
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}
