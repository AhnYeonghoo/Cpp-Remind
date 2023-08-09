#include <iostream>

using namespace std;

// 함수명은 가급적 자세히 해야할 일을 명시
int addTwoNumbers(int num_a, int num_b)
{
	int sum = num_a + num_b;
	return sum;
}

int multiplyTwoNumbers(int num_a, int num_b)
{
	return num_a * num_b;
}

double divideTwoNumbers(double num_a, double num_b)
{
	return num_a / num_b;
}


int main()
{
	// 같은 작업을 반복하게됨.
	cout << 1 + 2 << endl;
	cout << 3 + 4 << endl;
	cout << 8 + 13 << endl;

	// Using Function
	int a = 10;
	int b = 20;
	int result = addTwoNumbers(a, b);
	cout << result << endl;
	

	return 0;
}