#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int* pi = &a;
//	char* pc = (char*)&a;
//	printf("%p\n", pi);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	printf("%p\n", pi+1);
//	return 0;
//}
//ָ��Ľ�����
//int main()
//{
//	int a = 0x11223344;
//	int* pi = &a;
//	char* pc = (char*)&a;
//	*pc = 0;
//	*pi = 0;
//	return 0;
//}
//Ұָ��
//int main()
//{
//    int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//    *p = 20;
//    return 0;
//}
//ָ��Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p++) = i;
//	}
//	return 0;
//}

//���Ұָ��
//int main()
//{
//	int* p = NULL;
//	int a = 10;
//	//*p = &a;//err,NULL�����ַ��0��ַ���ܷ���
//	if (p == NULL)
//	{
//		*p = 20;
//	}
//	return 0;
//}
//ָ��-ָ��
//#define a 5
//int arr[a];
//int* p;
//int main()
//{
//	for (p = &arr[0]; p < &arr[a];)
//	{
//		*p++ = 1;
//	}
//	return 0;
//}

//int My_strlen(char* s)
//{
//	char *p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - s;
//}
//int main()
//{
//	char arr[] = {"wlecome"};
//	int a = 0;
//	a = My_strlen(arr);
//	printf("%d\n", a);
//    return 0;
//}

//int main()
//{
//	for (p = &arr[a-1]; p >= &arr[0];)
//	{
//		*p-- = 1;
//	}
//}
//ָ�������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//����ָ��
//int main()
//{
//	int a = 0;
//	int *ppa = &a;
//	*ppa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//��������������������������һ����ά����
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6 };
//	int* arrp[] = { arr1, arr2, arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(arrp[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	**ppa = 20;
	printf("%d\n", a);
	return 0;
}