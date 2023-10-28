#include<iostream>
#include<ctime>

void printMenu()
{
	std::cout << "0 - Exit" << std::endl;
	std::cout << "1 - Print array" << std::endl;
	std::cout << "2 - Append element to array" << std::endl;
	std::cout << "3 - Extract element from array" << std::endl;
	std::cout << "4 - sort array" << std::endl;
	std::cout << "5 - revers array" << std::endl;
	std::cout << "6 - Swap the maximum and minimum elements of the array" << std::endl;
	std::cout << "7 - Remove all duplicates from the array" << std::endl;
	std::cout << "8 - Append n random elements" << std::endl;
}

void printArray(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		std::cout << a[i] << " ";
	}
	system("pause");
}

void expandArray(int*& a, int& len)
{
	int* newA = new int[len + 1] { 0 };
	if (a != nullptr)
	{
		for (int i = 0; i < len; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
	}
	a = newA;
	++len;
}

void addElement(int*& a, int& len, int element)
{
	expandArray(a, len);
	a[len - 1] = element;
}

bool indexValid(int index, int len)
{
	return (index >= 0 && index < len);

}

void contractArray(int*& a, int& len)
{
	if (a != nullptr)
	{
		int* newA = new int[len - 1];
		for (int i = 0; i < len - 1; ++i)
		{
			newA[i] = a[i];
		}
		delete[] a;
		a = newA;
		--len;
	}
}

int extractElement(int*& a, int& len, int index)
{
	int res = -1;
	if (indexValid(index, len))
	{
		res = a[index];
		for (int i = index; i < len - 1; ++i)
		{
			a[i] = a[i + 1];
		}
		contractArray(a, len);
	}
	return res;
}

void swapMaxAndMin(int*& a, int len)
{
	if (a != nullptr) 
	{
		int max = a[0];
		for (int i = 0; i < len; ++i)
		{
			if (a[i] > max)
			{
				max = a[i];
			}
		}

		int min = a[0];
		for (int i = 0; i < len; ++i)
		{
			if (a[i] < min)
			{
				min = a[i];
			}
		}

		int p_min = 0;
		for (int i = 0; i < len; ++i)
		{
			if (a[i] == min)
			{
				p_min = i;
				break;
			}
		}

		int p_max = 0;
		for (int i = len - 1; i >= 0; --i)
		{
			if (a[i] == max)
			{
				p_max = i;
				break;
			}
		}

		a[p_min] = max;
		a[p_max] = min;
	}
}

void sortArray(int*& a, int len)
{
	if (a != nullptr)
	{
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < len; j++)
			{
				if (a[j] > a[j + 1] && j + 1 < len)
				{
					int k = 0;
					k = a[j];
					a[j] = a[j + 1];
					a[j + 1] = k;
				}
			}
		}
	}
}

void reversArray(int*& a, int len)
{
	for (int i = 0; i < (len / 2); ++i)
	{
		int r = 0;
		r = a[i];
		a[i] = a[len - i - 1];
		a[len - i - 1] = r;
	}
}

void addRandomNum(int*& a, int& len, int n, int start, int end)
{
	int f = 0;
	srand(time(0));
	for (int i = 0; i < n; ++i)
	{
		f = rand() % (end - start + 1) + start;
		addElement(a, len, f);
	}
}

int maxElement(int* a, int len)
{
	int max = 0;
	max = a[0];
	for (int i = 0; i < len; ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	return max;
}

void changeDub(int*& a, int len)
{
	int k = 0;
	k = maxElement(a, len) + 1;
	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len; ++j)
		{
			if ((a[j] == a[i]) && (j != i))
			{
				a[j] = k;
			}
		}
	}
}

void deleteDub(int*& a, int& len)
{
	if (a != nullptr)
	{
		int c = 0;
		c = maxElement(a, len) + 1;
		changeDub(a, len);
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < len; j++)
			{
				if ((a[j] == c) && (j + 1) < len)
				{
					a[j] = a[j + 1];
					a[j + 1] = c;
				}
			}
		}
		int ind = 0;
		for (int i = 0; i < len; ++i)
		{
			if (a[i] != c)
			{
				++ind;
			}
		}
		for (int i = len; i > ind; --i)
		{
			extractElement(a, len, ind);
		}
	}
}
