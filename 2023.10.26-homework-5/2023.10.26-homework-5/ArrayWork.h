#pragma once
void printMenu();
void printArray(int* a, int len);
void expandArray(int*& a, int& len);
void addElement(int*& a, int& len, int element);
int extractElement(int*& a, int& len, int index);
bool indexValid(int index, int len);
void contractArray(int*& a, int& len);
void swapMaxAndMin(int*& a, int len);
void sortArray(int*& a, int len);
void reversArray(int*& a, int len);
void addRandomNum(int*& a, int& len, int n, int start, int end);
int maxElement(int* a, int len);
void changeDub(int*& a, int len);
void deleteDub(int*& a, int& len);
