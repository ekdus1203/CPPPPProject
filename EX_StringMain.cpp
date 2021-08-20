#define ON_MAIN 
#ifdef ON_MAIN

#include <stdio.h> 
#include <iostream> 

using namespace std;

#include "Ex_String.h"

int main()
{
	//C의문자열 처리
	if (0)
	{
		char a = 'a';			// 1글자	  --> 문자
		// char b = "a"; 안됨	// 2글자(a/n) --> 문자열(문자의 배열)

		int kor[10];
		int math[] = { 100, 90, 80, 88, }; //배열 : 동형의 자료를 한 변수이름으로 모아서 관리
		//int eng[]; // error

		//문자열 배열
		char name[10] = "손세정";

		//문자열 함수(C Lib)
		//name = "유재석"; //새 값 할당
		//strcpy(name, "유재석"

		//if (name == "유재석")
		//if (strcpy(name, "유재석") == 0); //비교
	}
	//C++ 의 문자열 처리
	if (0)
	{
		string a; //초기값 없슴
		cout << a << endl;

		a = "유재석"; //새 값 할등
		cout << a << endl;

		string b(a); //초기값 있슴
		cout << b << endl;

		string c("김수한무"); //초기값 있슴
		cout << c << endl;
	}
	//내가 만든 MyStirng 객체 사용
	if (0)
	{
		int i;
		int j = 10;

		string x; //-----------------기본 생성자
		x.assign("홍길동");
		x.append("바보");
		x.clear();
		cout << x << endl;

		string y("유재석"); //-------변환 생성자
		cout << y << endl;

		string z(y);//---------------복사 생성자
		cout << z << endl;

		z = x; //대입연산자 + 오버로딩 완료
		cout << z << endl;

		z = x + y; //산술연산자 + 오버로딩 완료
		cout << z << endl;

		////////////////////////////////////////

		MyString a; //---------------기본 생성자
		a.SetString("손세정");
		//cout << a << endl; //error
		cout << a.GetString() << endl;

		MyString b("박명수"); //-----변환 생성자
		b.SetString("하하");
		cout << b.GetString() << endl;		

		MyString c(b); //--------------복사 생성자
		cout << c.GetString() << endl;

		c = a; //대입연산자 오버로딩
		cout << c.GetString() << endl;

		//c = a+b; //산술연산자 + 오버로딩
		//cout << c.GetString() << endl;
	}
	//정적멤버(변수, 함수)
	if (1)
	{
		cout << MyString::m_nCount << endl;

		MyString a;
		MyString b;
		cout << a.m_nCount << endl;
		{
			MyString c;
			cout << "안" << c.m_nCount << endl;
		}
		cout << b.m_nCount << endl;
	}
	return 0;
}

#endif