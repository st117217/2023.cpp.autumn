#include <iostream>
int main()
{
	
	short a,b = 0;
	std::cin >> a;
	b = a * 10 + 9;
	b = b * 10 + (9 - a);
	std::cout << b;
	return 0;
}