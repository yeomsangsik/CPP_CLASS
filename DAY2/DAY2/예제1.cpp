#include <iostream>
#include <stdlib.h>

int main()
{

	// 사용자가 입력한 크기(count) 만큼 점수를 입력 받으려고 한다.
	int count;
	std::cin >> count;

//	int score[count]; // error.

	// 실행시 결정된 크기로 배열을 만들려면 동적 메모리 할당 사용,

	int* score = new int[count];

	score[0] = 10;  // 사용후에

	delete[] score; // 메모리 제거

}