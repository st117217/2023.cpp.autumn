#include <iostream>
#include <math.h>

int main()
{
	short int a, x;
	std::cin >> a;
	bool l = a <= 0, h = a > 0;
	int S1 = 0, S2 = 0;
	x = abs(a);
	S1 = (a + 1) * x / 2;
	S1 *= h;
	S2 = (a + 1) * (x + 2) / 2;
	S2 *= l;
	S1 = S1 + S2;
	std::cout << S1;
	return 0;
}