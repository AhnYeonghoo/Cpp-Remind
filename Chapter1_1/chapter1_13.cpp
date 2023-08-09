// Namespace
#include <iostream>
using namespace std;

namespace A
{
	int doSomething(int a, int b)
	{
		return a + b;
	}
}
namespace B
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

namespace MySpace1
{
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

int mainChapter1_13()
{
	int result = A::doSomething(1, 2);
	int result2 = B::doSomething(1, 2);
	cout << result << endl;
	cout << result2 << endl;

	
	return 0;
}