#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main()
//{
	/*int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}*/
//	else
//	{
//		int i = 0;
		/*for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}*/
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
//	
//	}
	/*else
	{
		int i = 0;
	
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}*/
//	free(p);
//	p = NULL;
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
//	int* ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//
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
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//
//	return 0;
//}
#include<errno.h>
#include<string.h>
//int main()
//{
//	FILE* pf = fopen("5_5.txt", "w");
//	//相对路径的写法
//	//FILE* pf = fopen("E:\\2021_code\\text_5_5\\text_5_5\\5_5.txt", "r");
//	//绝对路径的写法
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//fputc('b', pf);
//	//fputc('i', pf);
//	//fputc('t', pf);
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
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
//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//	return 0;
//}
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("5_5.txt", "w");
//
//	struct S s = { 0 };
//	FILE* pf = fopen("5_5.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), &(s.arr));
//	printf("%d %f %s", s.n, s.score, s.arr);
//	int fcloss(pf);
//	pf = NULL;
//	return 0;
//}
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s = { "张三",20,55.6 };
//	FILE* pf = fopen("5_5.txt", "wb");
//	struct S tmp = { 0 };
//	FILE* pf = fopen("5_5.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	int fcloss(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//
//	FILE* pf = fopen("5_5.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, 2, SEEK_CUR);
//	int ch = fgetc(pf);
//	printf("%s\n", ch);
//	int fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//
//	FILE* pf = fopen("5_5.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	/*fseek(pf, 2, SEEK_CUR);*/
//	/*int pos = ftell(pf);
//	printf("%d\n", pos);*/
//	int a=fgetc(pf);
//	printf("%c\n", a);
//	rewind(pf);
//	int b = fgetc(pf);
//	printf("%c\n", b);
//	int fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("5_5.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);
//	int fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	FILE* pf = fopen("5_5.txt", "w");
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__,i);
//		
//	}
//	int fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#define MAX 100
//#define STR "hehe"
//#define reg register
//int main()
//{
//	/*int max = MAX;
//	printf("%d\n", max);*/
//	printf("%s\n", STR);
//
//	return 0;
//}
//#define SQUARE(X) (X*X)
//int main()
//{
//	int ret = SQUARE(5);
//	printf("%d\n", ret);
//	return 0;
//}
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a+1, b+1);
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//#define SIZEOF(type) sizeof(type)
//int main()
//{
//	int ret = SIZEOF(int);
//	printf("%d\n", ret);
//	return 0;
//}
//#define DEBUG
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 0
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}
//#include<stddef.h>
#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
struct S
{
	char c1;
	int a;
	char c2;
};
int main()
{
	printf("%d\n", OFFSETOF(struct S, c1));
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, c2));
	return 0;
}