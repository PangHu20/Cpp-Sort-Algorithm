
#include <iostream>

using namespace std;

template<class T>
void ShellSort(T arr[], int n)
{
	int h = 1;
	while (h < n / 3)
	{
		h = 3 * h + 1;
	}
	while (h >= 1)
	{
		for (int i = h; i < n; i++)
		{
			T e = arr[i];
			int j;
			for ( j = i; j >= h && arr[j - h] > e; j -= h)
			{
				arr[j] = arr[j - h];
			}
			arr[j] = e;
		}
		h /= 3;
	}
}
