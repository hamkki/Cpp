//주석
// 프로그래밍 언어 종류: python, C, java, c#, C++
//python: 교육 목적, 문법이 쉬움. 인공지능에 많이 쓰임. (사소한 작업: 컴퓨터가 다 해줌. 그만큼 제어도가 낮다)
//java: 객체지향적. 데이터 위주 () () () 컴퓨터 본체 부품: cpu, gpu, ram
//C: 근본. 절차지향적. 순서대로 처리. 컴퓨터 자체. 코드를 수정할 일이 생기거나 유지 보수를 할 때 불편함. 데니스 리치. 1972년.
//C#: c언어 + 기능. 객체지향적. 게임 제작에 많이 사용 (유니티) -> 빠르다 (중소기업에서는 이거 씀. 쉽다!)
//CPP: C언어 + 기능. 객체지향적. 게임 제작에 많이 사용 (언리얼) -> 빠르다 (대기업에서는 이거 씀. 어려운 만큼 퀄리티가 좋다.)

#include <stdio.h> //헤더파일

int main()
{
	// 자료형: data type. 여러 종류의 데이터들을 분류, 저장
	// 데이터를 담을 수 있는 최대 크기에 따라 나뉨
	// 정수형: char, short, int, long. longlong
	// 실수형: float(4), double(8)

	// () : byte
	// 컴퓨터는 0,1 두 가지만으로 구성된 2진수 : 1bit
	// 8bit = 1byte 0,1
	// 2 x 2 x 2 x 2 x 2 x 2 x 2 x 2 = 1byte = 256 = 0 ~ 256 = -128 ~ 128 오버플로우
	// 0000 0000 most significant bit == msb
	// 맨앞 숫자가 0이면 양수, 1이면 음수
	// 0000 0000 = 0, 0000 0001 = 1, 0000 0010 = 2, 0000 0011 = 3, 1111 1111 = -1
	// 0111
	// 00 = 0, 01 = 1, 10 = 2, 11 = 3, 101 = 4

	// 대입 연산자
	int Hello; // int 자료형의 크기를 가진 Hello 변수가 선언
	Hello = 30;

	int Bye = 7; // 선언과 대입을 동시에 한 것

	printf("%d\n", Hello);
	printf("%d\n", Bye);

	int result;

	// result = Hello % Bye; // 더하기: +, 빼기: -, 곱하기: *, 나누기: /, 나머지: %
	// printf("%d", result);


	if (Bye == 6)
	{
		printf("Bye는 6입니다");
	}
	else if (Bye == 8)
	{
		printf("Bye 7입니다!!!");
	}
	else
	{
		printf("Bye는 먼가요?\n");
	}

	int value1;
	value1 = 20;
	int value2;
	value2 = 30;
	int result1 = value1 + value2;

	if (result1 == 50)
	{
		printf("50입니다~~");
	}
}

// int 자료형을 가진 두 가지 변수 20, 30을 선언하고 두 변수를 더하여, 더한 값에 if문을 통하여 50인지 확인하자.
// value1, value2, result