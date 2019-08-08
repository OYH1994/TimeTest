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
	long t1 = GetTickCount();					//��ʼʱ��			
	for (int i = 0; i < 1000000; i++)
	{
		int s = 0;
	}
	long t2 = GetTickCount();					 //����ʱ�� 	
	cout << "����ִ��ʱ�䣺" << t2 - t1 << endl;  //�������е�ʱ��õ���ʱ�䵥λΪ���� /1000Ϊ��
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
	cout << "����ִ��ʱ�䣺" << (double)(finish - start) << endl;
}

void f_test3()
{
	double time = 0;
	double counts = 0;
	LARGE_INTEGER nFreq;
	LARGE_INTEGER nBeginTime;
	LARGE_INTEGER nEndTime;
	QueryPerformanceFrequency(&nFreq);
	QueryPerformanceCounter(&nBeginTime);//��ʼ��ʱ  

	for (int i = 0; i < 1000000; i++)
	{
		int s = 0;
	}

	QueryPerformanceCounter(&nEndTime);//ֹͣ��ʱ  
	time = (double)(nEndTime.QuadPart - nBeginTime.QuadPart) / (double)nFreq.QuadPart;//�������ִ��ʱ�䵥λΪs  
	cout << "����ʱ�䣺" << time * 1000 << "ms" << endl;
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

