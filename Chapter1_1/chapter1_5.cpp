#include <iostream>

using namespace std;

// �Լ����� ������ �ڼ��� �ؾ��� ���� ���
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
	// ���� �۾��� �ݺ��ϰԵ�.
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