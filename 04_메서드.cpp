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
		cout << "CTest()�� ������" << endl;
		m_nData = 10;
	}
	~CTest()
	{
		cout << "~CTest()�� �Ҹ���" << endl;
	}
	int m_nData;
	void PrintData(void)
	{
		cout << m_nData << endl;
	}
};

int main()
{
	//��������� �ʱ�ȭ
	if (1)
	{
		cout << "���ν���" << endl;
		int a;		// 4B �޸� �Ҵ�
		CTest b;	// 20B �޸� �Ҵ� -> b�� ������ ȣ���
		//...
		b.PrintData(); // 10�� ���
		printf("hi");

		cout << "���γ�" << endl;
	}// ->  1) a�� �޸� ����
	 //		2) b�� �Ҹ��� ȣ��
	 //     3) b�� �޸� ����

	//static ���
	if (1)
	{
		class CTest
		{
		public:
			int m_nData;
			CTest(int a)
			{
				m_nCount = a;
				m_nCount++; //�����ڰ� �Ҹ� Ƚ��
			}
			int m_nData; //��ü���� ���� ������

			//���� ��� ���� ����(���Ǵ� �ƴϴ�)
			static int m_nCount; // ���ݱ��� CTest ��ü�� ������ Ƚ��

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