#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <WinBase.h>
#include <ctime>

#include "time.h"
#include<boost/timer.hpp> 
using namespace std;


void f_tese1()
{		
	long t1 = GetTickCount();					//开始时间			
	for (int i = 0; i < 1000000; i++)
	{
		int s = 0;
	}
	long t2 = GetTickCount();					 //结束时间 	
	cout << "程序执行时间：" << t2 - t1 << endl;  //程序运行的时间得到的时间单位为毫秒 /1000为秒
}

void f_test2()
{
	clock_t start, finish;
	start = clock();
	for (int i = 0; i < 1000000; i++)
	{
		int s = 0;
	}
	finish = clock();
	cout << "程序执行时间：" << (double)(finish - start) << endl;
}

void f_test3()
{
	double time = 0;
	double counts = 0;
	LARGE_INTEGER nFreq;
	LARGE_INTEGER nBeginTime;
	LARGE_INTEGER nEndTime;
	QueryPerformanceFrequency(&nFreq);
	QueryPerformanceCounter(&nBeginTime);//开始计时  

	for (int i = 0; i < 1000000; i++)
	{
		int s = 0;
	}

	QueryPerformanceCounter(&nEndTime);//停止计时  
	time = (double)(nEndTime.QuadPart - nBeginTime.QuadPart) / (double)nFreq.QuadPart;//计算程序执行时间单位为s  
	cout << "运行时间：" << time * 1000 << "ms" << endl;
}

void f_test4()
{
	
}

int main()
{
	f_tese1();
	f_test2();
	f_test3();
	system("pause");
	return 0;
}

