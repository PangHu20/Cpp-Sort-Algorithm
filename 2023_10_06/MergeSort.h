#pragma once
#include<iostream>

using namespace std;

template<class T>
void _Merge(T arr[], int L, int mid, int R)
{
	T* aux = new T[R - L + 1];
	for (int i = L; i <= R; i++)
	{
		aux[i - L] = arr[i];
	}
	int i = L,j = mid+1;
	for (int k = L; k < R + 1; k++)
	{
		if (i > mid)
		{
			arr[k] = aux[j - L];
			j++;
		}
		else if (j > R)
		{
			arr[k] = aux[i - L];
			i++;
		}
		else if (aux[i-L] < aux[j-L])
		{
			arr[k] = aux[i-L];
			i++;
		}
		else
		{
			arr[k] = aux[j-L];
			j++;
		}
	}
	delete[] aux;
}

template<class T>
void _MergeSort(T arr[], int L, int R)
{
	if (L >= R)
		return;
	int mid = L + int((R - L) / 2);
	_MergeSort(arr, L, mid);
	_MergeSort(arr, mid + 1, R);
	_Merge(arr, L, mid, R);
}


template<class T>
void MergeSort(T arr[], int n)
{
	_MergeSort(arr, 0, n - 1);
}