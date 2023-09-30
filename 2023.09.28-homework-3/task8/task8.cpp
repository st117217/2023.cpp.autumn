#include<iostream>

int main()
{
	int a = 0;
	int b = 0;
	int n = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> n;
	if ((a % 2 == 0 && b % 2 == 0 && n % 2 != 0) || n > a || n > b) 
	{
		std::cout << "impossible";
	}
	
	return 0;
}