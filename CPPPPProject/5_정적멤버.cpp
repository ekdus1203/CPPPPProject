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
		m_nCount++;//�����ڰ� �Ҹ� Ƚ��
	}

	int m_nData;//��ü���� ���� ������

	//���� ��� ���� ����(���Ǵ� �ƴϴ�)
	static int m_nCount;//���ݱ��� CTest��ü�� ������ Ƚ��
	static int GetCount()
	{
		return m_nCount;
	}	
};

//���� ��� ���� ����
int CTest::m_nCount = 0;

int main()
{
	//Static ���
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