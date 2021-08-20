//#define ON_MAIN

#ifdef ON_MAIN

#include<stdio.h> // C header�� inclue
#include<iostream> // C++ header�� include

using namespace std;

typedef struct USERDATA
{
	int nAge;
	char szName[32];

	void PrintData()
	{
		printf("%d, %s\n", nAge, szName);
	}
} USERDATA; //int,char '����'�� �����͸� USEEDATA�� ������

void PrintData(USERDATA* p)
{
	printf("%d, %s\n", p->nAge, p->szName);
}
int main()
{
	// ����ü(=��������� ������Ÿ��)
	if (0)
	{
		/*typedef int NUMBER;
		int a;
		NUMBER b;

		typedef struct USERDATA
		{
			int nAge;
			char szName[32];
		} USERDATA;*/

		USERDATA kim = {20, "��ö��"};
		PrintData(&kim);
		//printf("%d, %s\n", kim.nAge, kim.szName);
	}

	//��ü
	if (1)
	{
		class Human
		{
		public:
			//Human() {:} ����Ʈ ������(by Compiler)
			//~Human() { : } ����Ʈ �Ҹ���(by Compiler)

			int nAge;
			char szName[32];

			void PrintData()
			{
				printf("%d, %s\n", nAge, szName);
			}
		};

		Human lee = { 33, "�̱浿"};
		lee.PrintData();
	}

	return 0;
}

#endif