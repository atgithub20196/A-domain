#include <stdio.h>
#include <stdlib.h>


struct bits
{
	unsigned char ch1 : 1;
	unsigned char ch2 : 1;
	unsigned char ch3 : 1;
	unsigned char ch4 : 1;
	unsigned char ch5 : 1;
	unsigned char ch6 : 1;
	unsigned char ch7 : 1;
	unsigned char ch8 : 1;
};
struct MyStruct
{
	int a : 5;
	int b : 4;
	int c : 16;
};
void main2()
{
	//printf("%d", sizeof(struct MyStruct));
	struct MyStruct my1;
	my1.a = 8;
	my1.b = 15;
	my1.c = 1999;
	printf("%d,%d,%d", my1.a, my1.b, my1.c);
	int a = 3;
	printf("%p", &a);
	system("pause");
}
void  main()
{
	//printf("%d", sizeof(struct bits));
	int data = -65;
	unsigned  int length = sizeof(int);
	struct bits* p = &data;
	while (length--)
	{
		printf("%d%d%d%d  %d%d%d%d  ",
			(p + length)->ch8,
			(p + length)->ch7,
			(p + length)->ch6,
			(p + length)->ch5,
			(p + length)->ch4,
			(p + length)->ch3,
			(p + length)->ch2,
			(p + length)->ch1
		);
	}
	system("pause");
}