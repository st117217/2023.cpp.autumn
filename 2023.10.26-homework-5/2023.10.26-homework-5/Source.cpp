#include<iostream>
#include"ArrayWork.h"

int main(int argc, char* argv[])
{
	int* a = nullptr;
	int b = 0;
	bool exit = false;
	while (!exit)
	{
		system("cls");
		int choise = 0;
		printMenu();
		std::cin >> choise;
		switch (choise)
		{
		case 0:
		{
			exit = true;
			break;
		}
		case 1:
		{
			printArray(a, b);
			break;
		}
		case 2:
		{
			std::cout << "your element:";
			int k = 0;
			std::cin >> k;

			addElement(a, b, k);
			break;
		}
		case 3:
		{
			int index = 0;
			std::cout << "Input index to extract : ";
			std::cin >> index;
			extractElement(a, b, index);
			break;
		}
		case 4:
		{
			sortArray(a, b);
			break;
		}
		case 5:
		{
			reversArray(a, b);
			break;
		}
		case 6:
		{
			swapMaxAndMin(a, b);
			break;
		}
		case 7:
		{
			deleteDub(a, b);
			break;
		}
		case 8:
		{
			int count = 0;
			std::cout << "input count of random numbers:" << std::endl;
			std::cin >> count;

			int start = 0;
			std::cout << "enter a range" << std::endl;
			std::cout << "from:";
			std::cin >> start;

			int end = 0;
			std::cout << "to:";
			std::cin >> end;

			addRandomNum(a, b, count, start, end);
			break;
		}
		default:
		{
			std::cout << "Unknown command" << std::endl;
			break;
		}
		}
	}
	delete[] a;

	return EXIT_SUCCESS;
}
