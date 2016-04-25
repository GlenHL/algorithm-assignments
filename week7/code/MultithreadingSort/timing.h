/*
��д�ߣ�������

�������ڣ�2015-03-27

���ԣ�C++

��д�����Ի�����Microsoft Visual Studio 2012 (Visual C++ 11.0)
*/


//��ʱ����
/*

*/


#ifndef TIMING_H
#define TIMING_H
#include <ctime>

#define TIMING_INIT \
	{\
		double time = 0;\
		int times = 0;\
		while (time < 1e6) {\
			Timing timer;

#define TIMING_BEGIN \
			timer.start();

#define TIMING_END \
			timer.end();\
			times++;\
			time += timer.getCPUtime();\
		}\
		time /= times;\
		cout << time << " us\n";\
	}
/*
usage of macros:

	vector<int> vec;
	for (int i = 0; i <1e6; i++) {
		vec.push_back(rand());
	}

	TIMING_INIT
		vector<int> vec_ = vec;
	TIMING_BEGIN
		quickSort(vec_);
	TIMING_END

*/
class Timing
{
private:
	clock_t clockStart, clockEnd;
	int divisor; 

public:
	Timing();
	~Timing() {}

public:
	void start();
	void end();
	void reportCPUtime(); 
	double getCPUtime(); 
	void setDivisor(int t) {divisor=t;}
}; //end of class

#endif
