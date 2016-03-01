/*
ƽ�����������⣬���εݹ� O (n lg n)
��������2014013432���廪��ѧ���ѧԺ
VS2012
2016-03-01
*/
#pragma once
#include "ClosestPair.h"
#include <algorithm>

struct Boundary{
	id_t l, r; //including left, excluding right
};
class DivideAndConquer
{
public:
	DivideAndConquer(void);
	~DivideAndConquer(void);
	Result solve(Points& p);
	Result recursive(Points&, Boundary);
};

