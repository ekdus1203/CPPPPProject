#define ON_MAIN 
#ifdef ON_MAIN

#include <stdio.h> 
#include <iostream> 

using namespace std;

class CTest
{
public:
	int m_nData;
	int m_nData2;

	CTest() : m_nData(10), m_nData2(20)
	{
		cout << "CTest()의 생성자" << endl;
		//m_nData = 10;
		//m_nData2 = 20;
	}
	~CTest()
	{
		cout << "~CTest()의 소멸자" << endl;
	}
	void PrintData(void)
	{
		cout << "m_nData : " << m_nData << endl;
		cout << "m_nData2 : " << m_nData2 << endl;
		cout << endl;
	}
};

int main()
{
	//멤버변수의 초기화
	cout << "메인시작" << endl;
		
	int a;		// 4B 메모리 할당
	CTest b;	//10B 메모리 할당 --> b의 생성자 호출됨

	b.PrintData();//10이 출력됨
	printf("b의 값 : %d, %d\n\n", b.m_nData, b.m_nData2);
		
	cout << "메인끝" << endl;
	
	//-->	1) a의 메모리 해지
	//		2) b의 소멸자 호출됨
	//		3) b의 메모리 해지	
	return 0;
}


#endif
