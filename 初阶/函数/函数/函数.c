#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);
//	return 0;
//}

//#include <stdlib.h>
//#include <time.h>
//void num()
//{
//	printf("***********��������Ϸ***********\n");
//	printf("****��ѡ��0��start 1��exit****\n");
//}
//void game()
//{
//	int a = -1;
//	int ret = rand()%100+1;//rand������������������������srand��ʼ���Ļ�ÿ�����ж�������һ�����������srand��ʼ��һ�μ��ɣ���������������������
//	printf("�������:");
//	while(a!=ret)
//	{
//		scanf("%d", &a);
//		if (a > ret)
//		{
//			printf("�´��ˣ�����²�����:");
//		}
//		else if(a<ret)
//		{
//			printf("��С�ˣ������²�����:");
//		}
//	}
//	printf("�¶���\n");
//}
//int main()
//{
//	int input = 0;
//	int r = 0;
//	srand(time(NULL));//NULL:��ָ�롣
//	do
//	{
//		num();
//		printf("������:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			{
//				game();
//				break;
//			}
//		case 1:
//			{
//				printf("�˳���Ϸ\n");
//				break;
//			}
//		default:
//			{
//				printf("�����������������\n");
//				break;
//			}
//		}
//	} 
//	while (input != 1);
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr1[] = { "welcome to Hezhe" };
//	memset(arr1, '-' , 7);
//	printf("%s", arr1);
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x < y)
//		return y;
//	if (x >= y)
//		return x;
//}
//int main()
//{
//	int a = 20;
//	int b = 5;
//	int c = 0;
//	c = Max(a, b);
//	printf("%d", c);
//	return 0;
//}

//void Exc(int x, int y)
//{
//	int z = 0;
//	z = y;
//	y = x;
//	x = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Exc(a, b);//Ϊʲô���ܽ�����
//	printf("a=%d b=%d", a,b);
//	return 0;
//}

//void Exc(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pb;
//	*pb = *pa;
//	*pa = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Exc(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

#include <math.h>
//void Jpn(int x)//judge prime number(�ж�������
//{
//	int y = 2;
//	for (y = 2; y <= sqrt(x); y++)
//	{
//		if (x % y == 0)
//			break;
//	}
//	if (y > sqrt(x))
//		printf("aΪ����\n");
//	else
//		printf("a��������\n");
//}
//int main()
//{
//	int a = 0;
//	while(a!=10)
//	{
//		printf("a=");
//		scanf("%d", &a);
//		if (a == 10)
//		{
//			break;
//		}
//		Jpn(a);
//	}
//	return 0;
//}

//int Jpn(int x)
//{
//	int y = 0;
//	for (y = 2; y <= sqrt(x); y++)
//	{
//		if (x % y == 0)
//			return 0;//�����return 0��������������������break����ǿ��
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		if (Jpn(a) == 1)
//			printf("%d ", a);
//	}
//	return 0;
//}

//int Leap_year(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//		return 1;
//	else//ע�⣬�����else���������ȥ���������ӡ���������࣬ԭ������Ǻ���Ҫ����һ�����Σ�����ָ����if���֮��������������һ�����Σ�������Ҳ���ܷ���1
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	for (a = 1000; a <= 2000; a++)
//	{
//		if (Leap_year(a) == 1)
//			printf("%d ", a);
//	}
//	return 0;
//}

//int Binary_search(int x[], int y,int z)
//{
//	int l = 0;
//	int r = z - 1;//����sizeof��һ�����󣬵��������ǡ������ַ���ʱ��˫���Ż��Զ���ĩβ���\0,sizeof�����\0,����������������ֵĻ�û��\0
//	while(l<=r)//���ַ���һ�����������������l<=r��=����������Ϊl=rʱ����ͬʱָ��ͬһ��Ԫ�أ�������һ��δ���ҵ�Ԫ��
//	{
//		int mid = (l + r) / 2;
//		if (y < x[mid])
//			r = mid - 1;
//		else if (y > x[mid])
//			l = mid + 1;
//		else
//			return mid;
//	}
//		return -1;
//}
//int main()
//{
//	int a = 12;
//	int ret = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ret = Binary_search(arr, a);//�����һ�����󣬰�����arr���뺯����ʵ���ϴ������arr��λ����
//	ret = Binary_search(arr, a, sz);
//	if (ret != -1)
//		printf("a��arr[%d]", ret);
//	if (ret == -1)
//		printf("arr�в�����a");
//	return 0;
//}

//void Add_1(int* num)
//{
//	/**num=*num+1;*/
//	(*num)++;//һ��С֪ʶ�㣺��Ϊ++�����ȼ�Ҫ��*�ߣ���*num++�ȼ������num++������취�ǽ�*num�����Ź���һ������
//}
//int main()
//{
//	int num = 0;
//	while(num<=50)
//	{
//		Add_1(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//#include "text.h"//ע���Զ��庯����ͷ�ļ���˫����
//int Add(int x, int y);//����������ע�����ķֺ�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d", Add(a, b));
//	return 0;
//}

//double Mean_deviation(double arr1[], int arr2[],int sz1,int sz2)//ţ�ٲ�ֵ��
//{
//	int i = 0;
//	int j = 0;
//	double MUL = 1;
//	double SUB = 0;
//	double Mean_deviation = 0;
//	for (j = 0; j <= sz2 - 1; j++)
//	{
//			for (i = 0; i <= sz1 - 1; i++)
//			{
//				if (j != i)
//				{
//					SUB = arr1[j] - arr1[i];
//					MUL = MUL * SUB;
//				}
//			}
//		Mean_deviation = Mean_deviation + arr2[j] / MUL;
//	}
//	return Mean_deviation;
//}
//
//int main()
//{
//	double arr1[] = { 1,2,3,4 };
//	int arr2[] = { 0,2,2,5 };
//	double arr3[10] = { arr1[0] };
//	int arr4[10] = { arr2[0] };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int i = 0;
//	double x = 2.5;
//	int function = arr2[0];
//	int ret = 0;
//	int tmp = 1;
//	for (i = 1; i <= sz2 - 1; i++)
//	{
//		arr3[i] = arr1[i];
//		arr4[i] = arr2[i];
//		ret = Mean_deviation(arr3, arr4,sz1,sz2);
//		tmp = tmp * (x - arr1[i - 1]);
//		function = function + ret * tmp;
//	}
//	printf("%d", function);
//	return 0;
//}

float Lagrange_interpolation(float arr1[], float arr2[], float x, int sz)
{
	int i = 0;
	int j = 0;
	float num = 1;//����������
	float den = 1;//��������ĸ
	float tmp1 = 0;
	float tmp2 = 0;
	float Basic_fun = 0;//������
	float L = 0;
	for (i = 0; i <= sz - 1; i++)
	{
		for(j=0;j<=sz-1;j++)
		{
			if(j!=i)
			{
				tmp1 = x - arr1[j];
				num = num * tmp1;
				tmp2 = arr1[i] - arr1[j];
				den = den * tmp2;
			}
		}
		Basic_fun = num / den;
		L = L + Basic_fun * arr2[i];
		num = 1;
		den = 1;
	}
	return L;
}
int main()
{
	float arr1[] = { 29.6,28.8,27.9,27,25,24.2,22.9,21.6,20.2,18.8 };//�Ա���
	float arr2[] = { 35  ,34  ,33  ,32,31,  29,  28,  27,  26, 25 };//����ֵ
	float D = 24;
	int sz = sizeof(arr1) / sizeof(arr2[0]);
	float ret = 0;
	int i = 0;
	ret = Lagrange_interpolation(arr1, arr2, D ,sz);
	printf("�Ա�����");
	for (i = 0; i <= sz - 1; i++)
		printf("%-8.1f ", arr1[i]);
	printf("\n����ֵ��");
	for (i = 0; i <= sz - 1; i++)
		printf("%-8.0f ", arr2[i]);
	printf("\n\n��D=%.0fʱ����Ƕȣ�%f\n\n", D, ret);
	return 0;
}