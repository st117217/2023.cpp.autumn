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

	int j = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) > 0)
		{
			j++;
		}
	}
	free(a);
	std::cout << j;

	return EXIT_SUCCESS;
}
