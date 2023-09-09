#include <iostream>
int main ()
{
	short V, T, a,b;
	std::cin >> V >> T;
	a = V * T % 109;
	b = (a + 109) % 109 + 1;
	std::cout << b;
	return 0;
}
