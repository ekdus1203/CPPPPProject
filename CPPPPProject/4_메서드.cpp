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
		cout << "CTest()�� ������" << endl;
		//m_nData = 10;
		//m_nData2 = 20;
	}
	~CTest()
	{
		cout << "~CTest()�� �Ҹ���" << endl;
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
	//��������� �ʱ�ȭ
	cout << "���ν���" << endl;
		
	int a;		// 4B �޸� �Ҵ�
	CTest b;	//10B �޸� �Ҵ� --> b�� ������ ȣ���

	b.PrintData();//10�� ��µ�
	printf("b�� �� : %d, %d\n\n", b.m_nData, b.m_nData2);
		
	cout << "���γ�" << endl;
	
	//-->	1) a�� �޸� ����
	//		2) b�� �Ҹ��� ȣ���
	//		3) b�� �޸� ����	
	return 0;
}


#endif
