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
	for (int i = n - 1; i >= 0; --i)
	{
		std::cout << *(a + i) << " ";
	}
	free(a);

	return EXIT_SUCCESS;
}
