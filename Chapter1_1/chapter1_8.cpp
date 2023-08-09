// 연산자와의 첫 만남
#include <iostream>

// Literal
// Operand

using namespace std;

int mainChapter1_8()
{
	int x = 2; // x is a variable, 2 is a Literal
	cout << "My Home" << endl; // String is Literal
	
	cout << 1 + 2 << endl;

	// Ternary Operator
	int y = (x > 0) ? 1 : 2;
	cout << y << endl; // 1
	return 0;
}