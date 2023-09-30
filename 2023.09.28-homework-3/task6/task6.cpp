#include<iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	int n = 0;
	int n1 = 1;
	int n2 = 1;
	if (a > 2)
	{
		for (int i = 2; i < a; i++)
		{
			n = n1 + n2;
			n1 = n2;
			n2 = n;
		}
	std::cout << n;
	} 
	else 
	{
		std::cout << 1;
	}
	return 0;
}