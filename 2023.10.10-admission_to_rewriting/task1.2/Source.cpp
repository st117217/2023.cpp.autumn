#include<iostream>

int main(int argc, char* argv[])
{
	int a = 0;
	std::cin >> a;
	for (int i = 31; i > 0; --i)
	{
		a |= (1 << i);
		if ((1 & (a >> (i - 1))) == 1)
		{
			a &= ~(1 << (i - 1));
			break;
		}
	}

	if ((1 & (a >> 0)) != 1)
	{
		for (int i = 0; i < 32; ++i)
		{
			a |= (1 << i);
			if ((1 & (a >> (i + 1))) == 1)
			{
				a &= ~(1 << (i + 1));
				break;
			}
		}
	}
	else
	{
		a &= ~(1 << 0);
	}

	for (int i = 31; i >= 0; --i)
	{
		a ^= (1 << i);
	}

	for (int i = 31; i >= 0; --i)
	{
		std::cout << (1 & (a >> i));
	}

	return EXIT_SUCCESS;
}
