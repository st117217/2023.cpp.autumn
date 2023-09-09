#include <iostream>
int main()
{
	short a, b, c;
	bool d;
	std::cin >> a >> b;
	d = a > b;
	a = a * d;
	d = a < b;
	b = b * d;
	c = a + b;
	std::cout << c;
	return 0;
}