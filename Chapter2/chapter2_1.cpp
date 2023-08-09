// 기본 자료형 소개
// Fundamental Data Types

#include <iostream>
using namespace std;

int mainChapter2_1()
{
	char char_a = 'H'; // 1byte
	short short_a = 1; // 2byte
	int int_a = 1; // 4byte
	long long_long = 1; // 4byte
	long long long_longlong = 1; // 8byte
	
	
	cout << char_a << endl;
	cout << short_a << endl;
	cout << int_a << endl;
	cout << long_long << endl;
	cout << long_longlong << endl;
	
	int j = 3;
	int i = -1;
	int k = 123;
	char a = 'H';
	
	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;
	return 0;
}