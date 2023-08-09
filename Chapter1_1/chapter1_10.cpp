// 선언과 정의의 분리
#include <iostream>

using namespace std;
namespace Chapter1_10
{
	int add(int a, int b);
	int multiply(int a, int b);
	int subtract(int a, int b);
}

int mainChapter1_10()
{
	cout << Chapter1_10::add(1, 2) << endl;
	cout << Chapter1_10::multiply(2, 4) << endl;
	cout << Chapter1_10::subtract(4, 2) << endl;
	return 0;
}
namespace Chapter1_10
{
	int subtract(int a, int b)
	{
		return a - b;
	}

	int add(int a, int b)
	{
		return a + b;
	}

	int multiply(int a, int b)
	{
		return a * b;
	}
}