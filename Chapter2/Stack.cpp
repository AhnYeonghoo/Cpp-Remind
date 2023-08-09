#include <iostream>
#include <cstdio>
using namespace std;
#define SIZE 100

class Stack
{
private:
	int arr[SIZE];
	int top;
	
public:
	Stack() { top = -1; }
	void Push();
	int Pop();
	bool IsFull();
	bool IsEmpty();
	void PrintError(const char* msg);
};

void Stack::Push()
{
	top += 1;
	if (IsFull())
	{
		top -= 1;
		PrintError("������ ��ȭ�����Դϴ�.");
	}
	else
	{
		int item;
		printf("����: ");
		cin >> item;
		arr[top] = item;
	}
}

int Stack::Pop()
{
	if (IsEmpty())
	{
		PrintError("������ ����ֽ��ϴ�.");
		return false;
	}
	else
	{
		return arr[top--];
	}
}

bool Stack::IsFull()
{
	return top >= SIZE ? true : false;
}

bool Stack::IsEmpty()
{
	return top == -1;
}

void Stack::PrintError(const char* msg)
{
	cout << "----" << msg << "----" << endl;
}

int mainStack()
{
	Stack st;
	
	while (1)
	{
		int input;
		cout << "[Push: 1, Pop: 2, Exit: 3]" << endl;
		cin >> input;
		
		if (input == 1)
		{
			st.Push();
		}
	}
}