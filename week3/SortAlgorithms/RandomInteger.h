/*

�����������������ָ�� bit ��

֧�ֲ�ͬ����������ͬ�� RAND_MAX �� sizeof(unsigned)

By Zhaoyang, March 2016
*/

#pragma once

#include <cstdlib>
#include <ctime>
#include <cassert>

class RandomInteger{
public:
	int _size;
	int _randSize;
	RandomInteger(int); //number of bits
	unsigned get();
};
