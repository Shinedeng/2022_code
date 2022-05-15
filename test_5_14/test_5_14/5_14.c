#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//void Print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	(*p)("world");
//}
//int main()
//{
//	test(Print);
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr+1));
//	printf("%d\n", strlen(&arr[0]+1));
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%p\n", &a[0][0]);
//	printf("%p\n", a[0]+1);
//	printf("%p\n",a+1);
//	printf("%p\n", &a[0]+1);
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x\n", ptr1[-1], *ptr2);
//	return 0;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 7);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	char* str = strerror(errno);
//	printf("%s\n", str);
//	return 0;
//}
#include<ctype.h>
//int main()
//{
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	struct Stu arr3[] = { {"张三",20},{"李四",30} };
//	struct Stu arr4[3] = { 0 };
//	memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}
#include<assert.h>
//void my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)dest)++;
//			((char*)src)++;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 2, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 10);
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);
//	return 0;
//}
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
#include<stddef.h>
//struct S
//{
//	char c;
//	int a;
//	double d;
//};
////int main()
////{
////	printf("%d\n", OFFSETOF(struct S, c));
////	printf("%d\n", OFFSETOF(struct S, a));
////	printf("%d\n", OFFSETOF(struct S, d));
////	return 0;
////}
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}
//union Un
//{
//	int a;
//	char arr[5];
//};
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}
#include<stddef.h>
#include<stdlib.h>
//int main()
//{
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p == NULL;
//	return 0;
//}
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	int* ptr = (int*)realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		/*strcpy(str, "world");*/
//		strcat(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
//struct S
//{
//	int n;
//	int arr[0];
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//
//	ps->n = 100;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n");
//	printf("%d\n", ps->n);
//	free(ps);
//	ps = NULL;
//	return 0;
//}
#include<errno.h>
#include<string.h>
//int main()
//{
//	FILE* pf = fopen("5_15.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	int fcloss(pf);
//	pf = NULL;
//	return 0;
//}
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
////int main()
////{
////	struct S s = { 100,3.14f,"Shinedeng" };
////	FILE* pf = fopen("5_15.txt", "w");
////	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
////	int fcloss(pf);
////	pf = NULL;
////	return 0;
////}
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("5_15.txt", "r");
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s", s.n, s.score, s.arr);
//	int fcloss(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("5_15.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, 2, SEEK_CUR);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	int fcloss(pf);
//	pf = NULL;
//	return 0;
//}
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//int main()
//{
//	int a = 10;
//	PRINT(a);
//	return 0;
//}
//#define CAT(X,Y) X##Y
//int main()
//{
//	int Class84 = 2019;
//	printf("%d\n", CAT(Class, 84));
//	return 0;
//}
#define DEBUG 0
int main()
{
#ifdef DEBUG
	printf("hehe\n");
#endif
	return 0;
}