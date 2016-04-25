// HelloMultithreading.cpp : Defines the entry point for the console application.
//

/*
�ļ���:
�衡��: ���߳�ʵ�飺�������򡢹鲢����

������: ������, �廪��ѧ���ѧԺ, lizy14@yeah.net
������: 2016-04-14

������: Visual Studio 2015 (MSVC++ 14.0), C++ 11 feature heavily used
*/

#include "stdafx.h"

#define OMP

#ifndef OMP
#define CPP11
#endif

const int NUMBER_OF_NUMBERS = 1e6;

#include "timing.h"
#include "Merge.h"
#include "Quick.h"


void correctness() {
	vector<int> v = { 2,5,3,4,1,6 };
	{
		auto _ = v;
		quick_sort(_);
		cout << _;
	}
	{
		auto _ = v;
		p_quick_sort(_);
		cout << _;
	}
	{
		auto _ = v;
		merge_sort(v, 0, v.size()-1, _, 0);
		cout << _;
	}
	{
		auto _ = v;
		p_merge_sort(v, 0, v.size() - 1, _, 0);
		cout << _;
	}
	{
		auto _ = v;
		p_merge_sort_naive(v, 0, v.size() - 1, _, 0);
		cout << _;
	}
}

int main()
{
	//return correctness(), 0;

	vector<int> vec;
	for (int i = 0; i < NUMBER_OF_NUMBERS; i++) {
		vec.push_back(rand());
	}




	cout << "quick sort, single threading" << endl;
	TIMING_INIT
		auto _vec = vec;
	TIMING_BEGIN
		quick_sort(_vec);
	TIMING_END

	cout << "quick sort, naive multi threading" << endl;
	TIMING_INIT
		auto _vec = vec;
	TIMING_BEGIN
		p_quick_sort(_vec);
	TIMING_END


	cout << "merge sort, single threading" << endl;
	TIMING_INIT
		vector<int> _result(vec.size());
		auto _vec = vec;
	TIMING_BEGIN
		merge_sort(_vec, 0, _vec.size() - 1, _result, 0);
	TIMING_END



	cout << "merge sort, naive multi threading" << endl;
	TIMING_INIT
		vector<int> _result(vec.size());
		auto _vec = vec;
	TIMING_BEGIN
		p_merge_sort_naive(_vec, 0, _vec.size() - 1, _result, 0);
	TIMING_END


	cout << "merge sort, multi threading" << endl;
	TIMING_INIT
		vector<int> _result(vec.size());
		auto _vec = vec;
	TIMING_BEGIN
		p_merge_sort(_vec, 0, _vec.size() - 1, _result, 0);
	TIMING_END




	return 0;
}