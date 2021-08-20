//#define ON_MAIN 
#ifdef ON_MAIN

#include <stdio.h> 
#include <iostream> 

using namespace std;

class CTest
{
	int m_nData;
public:
	CTest()
	{
		cout << "CTest()의 생성자" << endl;
		m_nData = 10;
	}
	~CTest()
	{
		cout << "~CTest()의 소멸자" << endl;
	}
	int m_nData;
	void PrintData(void)
	{
		cout << m_nData << endl;
	}
};

int main()
{
	//멤버변수의 초기화
	if (1)
	{
		cout << "메인시작" << endl;
		int a;		// 4B 메모리 할당
		CTest b;	// 20B 메모리 할당 -> b의 생성자 호출됨
		//...
		b.PrintData(); // 10이 출력
		printf("hi");

		cout << "메인끝" << endl;
	}// ->  1) a의 메모리 해지
	 //		2) b의 소멸자 호출
	 //     3) b의 메모리 해지

	//static 멤버
	if (1)
	{
		class CTest
		{
		public:
			int m_nData;
			CTest(int a)
			{
				m_nCount = a;
				m_nCount++; //생성자가 불린 횟수
			}
			int m_nData; //객체마다 따로 생성됨

			//정적 멤버 변수 선언(정의는 아니다)
			static int m_nCount; // 지금까지 CTest 객체가 생성된 횟수

			int GetCount()
			{
				return m_nCount;
			}
		};
		int CTest::m_nCount = 0;

		CTest a(5);
		CTest b(10);
		CTest c(100);

		cout << << endl;
	}
	return 0;
}

#endif