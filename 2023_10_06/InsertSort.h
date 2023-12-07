#pragma once
#include <iostream>
#include <algorithm>

using namespace std;

template<class T>
void insertSortLower(T arr[], int n)
{
	for (int i = 1; i < n; ++i)
	{
		for (int j = i; j > 0; --j)
		{
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
			else
				break;
		}
	}
}

template<class T>
void insertSort(T arr[], int n)
{
	
	for (int i = 1; i < n; ++i)
	{
		for (int j = i; j > 0 && arr[j] < arr[j - 1]; --j)
		{
			swap(arr[j], arr[j - 1]);
		}
	}
}
template<class T>
void insertSortUpper(T arr[], int n)
{
	for (int i = 1; i < n; ++i)
	{
		T element = arr[i];
		int j;
		for (j = i; j > 0 && arr[j - 1] > element; --j)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = element;
	}
	cout << endl;
}