#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//static修饰局部变量
//void test()
//{
//	static int x = 1;
//	x++;
//	printf("%d ", x);
//}
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		test();
//		a++;		
//	}
//	return 0;
//}


//extern声明外部符号
//extern int g_val;
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}

extern Add(int x, int y);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d ", sum);
	return 0;
}