#include<iostream>

void hanoi(int n, int from, int to)
{
	if (n <= 0)
	{
		return;
	}

	if (from + to == 4)
	{
		hanoi(n, from, 2);
		hanoi(n, 2, to);
	}
	else
	{
		hanoi(n - 1, from, 6 - to - from);
		printf("%d %d %d\n", n, from, to);
		hanoi(n - 1, 6 - from - to, to);
	}
}

int main(int argc, char* argv[])
{
	int from = 1;
	int to = 3;
	int n = 0;
	std::cin >> n;
	hanoi(n, from, to);
	return EXIT_SUCCESS;
}