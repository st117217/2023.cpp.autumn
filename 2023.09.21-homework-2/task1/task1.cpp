#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;
	if((a % 4 !=0 || a % 100 == 0) && a % 400 !=0)
	{
		std::cout << "NO";
	} 
	else 
	{
		std::cout << "YES";
	}
	return 0;
}