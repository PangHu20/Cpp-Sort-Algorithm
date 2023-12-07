
#include <iostream>
#include<cassert>
using namespace std;

namespace SortTestHelper
{
	int* generatorRandomArray(int n, int RangeL, int RangeR)
	{
		assert(RangeL < RangeR);
		/*if (!(RangeL < RangeR))
		{
			return;
		}*/
		int* arr = new int[n];
		srand((unsigned)time(NULL));
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (RangeR - RangeL + 1) + RangeL;
			//rand()%n -> [0,n-1]
		}
		return arr;
	}

	int* generatorNearlyOrderedArray(int n,int randomSize)
	{
		int* arr = new int[n];
		
		for (int i = 0; i < n; i++)
		{
			arr[i] = i;
		}
		srand((unsigned)time(NULL));
		for (int i = 0; i < randomSize; i++)
		{
			int posx = rand() % n;
			int posy = rand() % n;
			swap(arr[posx], arr[posy]);
		}
		return arr;
	}

	template<class T>
	void printArray(T arr[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	template<class T>
	bool isSorted(T arr[], int n)
	{
		for (int i = 0; i < n - 1; ++i)
		{
			if (arr[i] > arr[i + 1])
			{
				return false;
			}
		}
		return true;
	}

	template<class T>
	void TestSort(string SortName, void(*sort)(T, int), T arr, int n)
	{
		clock_t startTime = clock();
		sort(arr, n);
		clock_t endTime = clock();

		assert(isSorted(arr, n));
		cout << SortName <<" : " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;
	}

	int* copyIntArr(int *a, int n)
	{
		int *arr = new int[n];
		copy(a, a + n,arr);
		return arr;
	}
	
}