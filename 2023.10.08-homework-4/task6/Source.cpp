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

	int max = *a;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) > max)
		{
			max = *(a + i);
		}
	}

	int min = *a;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) < min)
		{
			min = *(a + i);
		}
	}

	int p_min = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) == min)
		{
			p_min = i;
			break;
		}
	}

	int p_max = 0;
	for (int i = n - 1; i >= 0; --i)
	{
		if (*(a + i) == max)
		{
			p_max = i;
			break;
		}
	}

	*(a + p_min) = max;
	*(a + p_max) = min;

	for (int i = 0; i < n; ++i)
	{
		std::cout << *(a + i) << " ";
	}
	free(a);

	return EXIT_SUCCESS;
}
