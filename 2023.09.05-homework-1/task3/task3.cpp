#include<iostream>
int main() 
{
	int long long b;
	int a;
	std::cin >> a;
    b = a / 10;
	b = b * (b + 1) * 100 + 25;
	std:: cout << b;
	return 0;
}