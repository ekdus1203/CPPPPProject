//#define ON_MAIN

#ifdef ON_MAIN

#include<stdio.h> // C header를 inclue
#include<iostream> // C++ header를 include

using namespace std;

int main()
{
	int a = 10;
	int b = 20;

	printf("Hello World, 홍다\n");
	std::cout << "Hello World, 홍다\n";

	//a = 10, b = 20
	printf("a=%d, b=%d\n", a, b);	// 1번째 변수를 첫번째 % 뒤에 대입
	std::cout << "a=" << a << ", b=" << b << "\n";

	cout << "Bye" << "\n";

	return 0; //정상종료
}

#endif