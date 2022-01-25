#include <iostream>
#include <vector> // 이미 C++ 표준에 vector(동적배열을 vector 라고 합니다.)

int main()
{
	std::vector<int> v(5);

	v[0] = 10;
	v.resize(7);

	std::cout << v[0] << std::endl;
	std::cout << v.size() << std::endl;


	std::vector<int> v2; // 크기가 0;

	v2.push_back(1);
	v2.push_back(5);

	std::cout << v2.size() << std::endl;


	int n = 0;
	while (1)
	{
		std::cin >> n;
		if (n == -1) break;
		v2.push_back(n); // 알아서 메모리가 증가해서 들어갑니다.
	}
}

// 파이썬의 list 가 vector 입니다.
// s = [1,2,3]
// s.append(5)

