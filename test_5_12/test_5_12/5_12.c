#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*printf("%d\n", arr[4]);*/
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	/*int a = 3;*/
//	/*int b = 5;
//	int c = a ^ b;*/
//	/*int c = !a;*/
//	/*int c = ~a;*/
//	//00000000 00000000 00000000 00000011  3
//	//11111111 11111111 11111111 11111100
//	//11111111 11111111 11111111 11111011
//	//10000000 00000000 00000000 00000100  -4
//	//int a = 1;
//	///*int c = a++;*/
//	//int c = ++a;
//	//printf("%d\n", c);
//	//printf("%d\n", a);
//	int arr[10] = {0};
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//	return 0;
//}
//int Max(int x, int y)
//{
//	/*if (x > y)
//		return x;
//	else
//		return y;*/
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//printf("%p\n", &a);
//	//int* p = &a;
//	//printf("%p\n", p);
//	//*p = 20;
//	//printf("%d\n", a);
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(&d));
//	printf("%d\n", sizeof(pd));
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while(i<=10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//九九乘法表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char str1[] = "sample string";
//	char str2[40] = { 0 };
//	char str3[40] = { 0 };
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1:%s\nstr2:%s\nstr3:%s\n", str1, str2, str3);
//
//	return 0;
//}
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//二分查找
//int Binary_Search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Binary_Search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num=%d\n", num);
	Add(&num);
	printf("num=%d\n", num);
	Add(&num);
	printf("num=%d\n", num);
	return 0;
}