#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int z = 0;
	int x = 0;
	int v = 0;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a >= b && a >= c)
	{
		z = a;
	}
	else if (b >= a && b >= c)
	{
		z = b;
	}
	else if (c >= a && c >= b)
	{
		z = c;
	}
	if (a <= b && a <= c)
	{
		v = a;
	}
	else if (b <= a && b <= c)
	{
		v = b;
	}
	else if (c <= a && c <= b)
	{
		v = c;
	}
	if (a == z && b == v)
	{
		x = c;
	}
	else if (a == z && c == v)
	{
		x = b;
	}
	else if (b == z && c == v)
	{
		x = a;
	}
	else if (b == z && a == v)
	{
		x = c;
	}
	else if (c == z && a == v)
	{
		x = b;
	}
	else if (c == z && b == v)
	{
		x = a;
	}
	std::cout << v <<" " << x << " " << z;
	return 0;
}