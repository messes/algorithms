#include "mergesort.h"
#include <cassert>

using namespace std;

int main()
{
	int size = 8;
	int a1[] = {4, 8, 2, 1, 3, 5, 6, 7};
	MergeSort m;
	m.sort(a1, size);
	for (int i = 1; i <= size; i++)
	{
		assert(a1[i - 1] == i);
	}

	size = 5;
	int a2[] = {5, 4, 3, 2, 1};
	m.sort(a2, size);
	for (int i = 1; i <= size; i++)
	{
		assert(a2[i - 1] == i);
	}

	size = 10;
	int a3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	m.sort(a3, size);
	for (int i = 1; i <= size; i++)
	{
		assert(a3[i - 1] == i);
	}

	size = 1;
	int a5[] = { 1 };
	m.sort(a5, size);
	for (int i = 1; i <= size; i++)
	{
		assert(a5[i - 1] == i);
	}

	size = 2;
	int a6[] = {2, 1};
	m.sort(a6, size);
	for (int i = 1; i <= size; i++)
	{
		assert(a6[i - 1] == i);
	}

	return 0;
}
