//#define ON_MAIN 
#ifdef ON_MAIN

#include <stdio.h> 
#include <iostream> 

using namespace std;

class CTest
{
public:

	CTest(int a)
	{
		m_nData = a;
		m_nCount++;//생성자가 불린 횟수
	}

	int m_nData;//객체마다 따로 생성됨

	//정적 멤버 변수 선언(정의는 아니다)
	static int m_nCount;//지금까지 CTest객체가 생성된 횟수
	static int GetCount()
	{
		return m_nCount;
	}	
};

//정적 멤버 변수 정의
int CTest::m_nCount = 0;

int main()
{
	//Static 멤버
	if (1)
	{
		cout << CTest::m_nCount << endl;//0
		cout << CTest::GetCount() << endl;//0
		cout << endl;

		CTest a(5);
		CTest b(10);
		CTest c(100);

		cout << a.m_nData << endl;
		cout << b.m_nData << endl;
		cout << c.m_nData << endl;
		cout << endl;

		cout << CTest::m_nCount << endl;//3
		cout << CTest::GetCount() << endl;//3
		cout << a.GetCount() << endl;//3
	}	
	return 0;
}

#endif