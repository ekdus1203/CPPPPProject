//#define ON_MAIN

#ifdef ON_MAIN

#include<stdio.h> // C header�� inclue
#include<iostream> // C++ header�� include

using namespace std;

int main()
{
	int a = 10;
	int b = 20;

	printf("Hello World, ȫ��\n");
	std::cout << "Hello World, ȫ��\n";

	//a = 10, b = 20
	printf("a=%d, b=%d\n", a, b);	// 1��° ������ ù��° % �ڿ� ����
	std::cout << "a=" << a << ", b=" << b << "\n";

	cout << "Bye" << "\n";

	return 0; //��������
}

#endif