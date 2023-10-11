#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;
	
	int sum = 0;
	for (int i = 0; i < 32; ++i)
	{
		sum += (a >> i) & 1;
	}
	std::cout << sum;

	return EXIT_SUCCESS;
}
