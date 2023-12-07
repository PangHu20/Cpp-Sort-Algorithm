// 2023_10_06.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "SortTestHelper.h"
#include"BubbleSort.h"
#include"InsertSort.h"
#include"SelectSort.h"
#include"ShellSort.h"
#include"MergeSort.h"
#include <cassert>
using namespace std;
struct Student
{
    string name;
    int score;
    bool operator<(const Student& other)
    {
        return score != other.score ? score < other.score : name < other.name;
    }
    friend ostream& operator<< (ostream & os, const Student & stu)
    {
        os << "Student: " << stu.name << " " << stu.score << endl;
        return os;
    }
};



int main() {

    int n = 10;

    cout << sum(2, 8)<<endl;
    // 测试1 一般测试
    cout << "Test for random array, size = " << n << ", randome range [0, " << n << "]" << endl;

    int* arr1 = SortTestHelper::generatorRandomArray(n, 0, n);
    int* arr2 = SortTestHelper::copyIntArr(arr1, n);
    int* arr3 = SortTestHelper::copyIntArr(arr1, n);
    int* arr4 = SortTestHelper::copyIntArr(arr1, n);
    int* arr5 = SortTestHelper::copyIntArr(arr1, n);

    SortTestHelper::TestSort("Selection Sort", insertSortLower, arr1, n);
    SortTestHelper::TestSort("Insertion Sort", insertSortUpper, arr2, n);
    //SortTestHelper::TestSort("Bubble Sort", BubbleSort, arr3, n);
    SortTestHelper::TestSort("Merge Sort 2", MergeSort, arr4, n);
    SortTestHelper::TestSort("Shell Sort", ShellSort, arr5, n);


    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    delete[] arr4;
    delete[] arr5;

    cout << endl;


    // 测试2 测试近乎有序的数组
    //int swapTimes = 100;

    //cout << "Test for nNearly ordered array, size = " << n << ", swap time = " << swapTimes << endl;

    //arr1 = SortTestHelper::generatorNearlyOrderedArray(n, swapTimes);
    //arr2 = SortTestHelper::copyIntArr(arr1, n);
    //arr3 = SortTestHelper::copyIntArr(arr1, n);
    //arr4 = SortTestHelper::copyIntArr(arr1, n);
    //arr5 = SortTestHelper::copyIntArr(arr1, n);

    //SortTestHelper::TestSort("Selection Sort", selectSort, arr1, n);
    //SortTestHelper::TestSort("Insertion Sort", insertSort, arr2, n);
    ////SortTestHelper::TestSort("Bubble Sort", BubbleSort, arr3, n);
    //SortTestHelper::TestSort("Bubble Sort 2", BubbleSortUpper, arr4, n);
    //SortTestHelper::TestSort("Shell Sort", ShellSort, arr5, n);

    //delete[] arr1;
    //delete[] arr2;
    //delete[] arr3;
    //delete[] arr4;
    //delete[] arr5;

    //cout << endl;


    //// 测试3 测试完全有序的数组
    //// 对于完全有序的数组，冒泡排序法也将成为O(n)级别的算法
    //swapTimes = 0;
    //n = 10000000;    // 由于插入排序法和冒泡排序法在完全有序的情况下都将成为O(n)算法
    //// 所以我们的测试数据规模变大，为1000,0000
    //cout << "Test for ordered array, size = " << n << endl;

    //arr1 = SortTestHelper::generatorNearlyOrderedArray(n, swapTimes);
    //arr2 = SortTestHelper::copyIntArr(arr1, n);
    //arr3 = SortTestHelper::copyIntArr(arr1, n);
    //arr4 = SortTestHelper::copyIntArr(arr1, n);
    //arr5 = SortTestHelper::copyIntArr(arr1, n);

    //// 在这种情况下，不再测试选择排序算法
    ////SortTestHelper::TestSort("Selection Sort", selectSort, arr1, n);
    //SortTestHelper::TestSort("Insertion Sort", insertSort, arr2, n);
    ////SortTestHelper::TestSort("Bubble Sort", BubbleSort, arr3, n);
    //SortTestHelper::TestSort("Bubble Sort 2", BubbleSortUpper, arr4, n);
    //SortTestHelper::TestSort("Shell Sort", ShellSort, arr5, n);

    //delete[] arr1;
    //delete[] arr2;
    //delete[] arr3;
    //delete[] arr4;
    //delete[] arr5;


    return 0;
}


