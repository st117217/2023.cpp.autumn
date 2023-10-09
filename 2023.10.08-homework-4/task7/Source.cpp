#include<iostream>

int main(int argc, char**)
{
	int n = 0;
	std::cin >> n;

	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		int k = 0;
		std::cin >> k;
		*(a + i) = k;
	}

	int b = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) <= 0)
		{
			b++;
		}
	}

	int* k = (int*)malloc((n - b + 1) * sizeof(int));
	int l = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) >= 0)
		{
			*(k + l) = *(a + i);
			l++;
		}
	}
	free(a);

	if (n == b)
	{
		k = 0;
	}
	else
	{
		for (int i = 0; i < n - b + 1; ++i)
		{
			std::cout << *(k + i) << " ";
		}
	}
	free(k);

	return EXIT_SUCCESS;
}
