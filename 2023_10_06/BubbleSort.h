#include <iostream>
using namespace std;


template<class T>
void BubbleSort(T arr[],int n)
{
	bool swaped;
	do
	{
		swaped = false;
		for (int i = 1; i < n; i++)
		{
			if (arr[i] < arr[i - 1])
			{
				swap(arr[i], arr[i - 1]);
				swaped = true;
			}
		}
		n--;
	}while (swaped);
}

template<class T>
void BubbleSortUpper(T arr[], int n)
{
	int newn;
	do
	{
		newn = 0;
		for (int i = 1; i < n; i++)
		{
			if (arr[i] < arr[i - 1])
			{
				swap(arr[i], arr[i - 1]);
				newn = i;
			}
		}
		n = newn;
	}while (newn > 0);
}


