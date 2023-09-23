#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int t_1 = 15;
	int t_5 = 70;
	int t_10 = 125;
	int t_20 = 230;
	int t_60 = 440;
	int n_1 = 0;
	int n_5 = 0;
	int n_10 = 0;
	int n_20 = 0;
	int n_60 = 0;
	int d = 0;
	int c = 0;
	int c_1 = 0;
	int c_5 = 0;
	int c_10 = 0;
	int c_20 = 0;
	if (a / 60 != 0)
	{
		n_60 = a / 60;
		a = a % 60;
	}

	if (a <= 5)
	{
		if (t_1 * a < t_5)
		{
			n_1 = a;
		}
		else
		{
			n_5 = 1;
		}
	}
	else if (a <= 10) 
	{
		c = a / 5;
		d = a % 5;
		if (t_5 * c + d * t_1 < t_10) 
		{
			n_5 += 1;
			n_1 += d;
		}
		else 
		{
			n_10 += 1;
		}
	}
	else if (a <= 20) 
	{
		c_10 = a / 10;
		c_5 = (a - c_10 * 10) / 5;
		c_1 = a % 5;
		if (t_10 * c_10 + t_5 * c_5 + t_1 * c_1 < t_20) 
		{
			n_10 = c_10;
			n_5 = c_5;
			n_1 = c_1;
		}
		else 
		{
			n_20 += 1;
		}
	}
	else 
	{
		c_20 = a / 20;
		c_10 = (a - c_20 * 20) / 10;
		c_5 = (a - c_20 * 20 - c_10 * 10) / 5;
		c_1 = a % 5;
		if (c_20 * t_20 + c_10 * t_10 + c_5 * t_5 + c_1 * t_1 < t_60) 
		{
			n_20 = c_20;
			if (t_10 * c_10 + t_5 * c_5 + t_1 * c_1 < t_20) 
			{
				n_10 = c_10;
				if (t_5 * c_5 + t_1 * c_1 < t_10) 
				{
					n_5 = c_5;
					n_1 = c_1;
				}
				else 
				{
					n_10 += 1;
				}
			}
			else 
			{
				n_20 += 1;
			}
		}
		else 
		{
			n_60 += 1;
		}
	}
	std::cout << n_1 << " " << n_5 << " " << n_10 << " " << n_20 << " " << n_60;

	return 0;
}