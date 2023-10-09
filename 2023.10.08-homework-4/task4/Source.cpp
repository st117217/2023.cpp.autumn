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

	int max = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) > max)
		{
			max = *(a + i);
		}
	}
	free(a);
	std::cout << max;

	return EXIT_SUCCESS;
}
