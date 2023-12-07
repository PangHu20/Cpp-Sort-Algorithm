
#pragma once
#include <iostream>

using namespace std;

int sum(int, int);

template<typename T>
void selectSort(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[index])
				index = j;
		}
		swap(arr[index], arr[i]);
	}
}
