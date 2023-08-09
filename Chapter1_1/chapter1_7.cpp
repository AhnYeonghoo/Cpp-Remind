// 지역 범위
#include <iostream>

int mainChapter1_7()
{
	int x(0); // x = 0
	std::cout << x << std::endl;
	std::cout << &x << std::endl;

	{
		int x(1);
		std::cout << x << std::endl;
		std::cout << &x << std::endl;

		{
			int x(2);
			std::cout << x << std::endl;
			std::cout << &x << std::endl;

		}
	}

	return 0;
}