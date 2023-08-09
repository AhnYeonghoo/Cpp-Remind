// 전처리기
#include <iostream>
#include <algorithm>
using namespace std;

#define MY_NUMBER 9
#define MY_STRING "Hello World"
#define MAX(a, b) ((a > b) ? a : b)
#define LIKE_APPLE


int mainChapter1_14()
{
	cout << MY_NUMBER << endl;
	cout << MY_STRING << endl;
	cout << MAX(3, 4) << endl;
	cout << std::max(1 + 3, 2) << endl;
	
	// if
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#endif
	// not if
#ifndef LIKE_APPLE
	cout << "Orage" << endl;
#endif

	return 0;
}
