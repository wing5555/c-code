#define _CRT_SECURE_NO_WARNINGS

//#define max 10//#define����ı�ʶ���������������ǳ���
#include <stdio.h>

//enum Sex   //ö�ٹؼ���enum
//{
//	MALE,   //0
//	FEMALE,//1
//	SECARE//2
//};
//int main()
//{
//	printf("%d\n", FEMALE);
	/*printf("��ʤ����ɵ��\n");*/
	/*printf("%d\n", max);*/
	/*return 0;*/
	/*int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = 0;
	sum = num1 + num2;
	printf("sum=%d\n",sum);*/
	/*const int num = 4;*/
	//const-������
	//num��const���εĳ�������num���������Ǳ�����ֻ�Ǿ��г����ԣ����ɸ���
	/*printf("%d\n", num);
	num = 8;
	printf("%d\n", num);*/
	/*return 0;*/
//}
//enum colour
//{
//	red,
//		yellow,
//		bluw
//};
//int main()
//{
//	printf("%d\n", bluw);
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";//arr�д����ֵ�ֱ���a��b��c��\0;���У�\0���ַ���������־��
//	char arr1[] = { 'a','b','c' };//arr1�д������a��b��c���ʶ�����������ġ������Ϊchar arr1{'a','b','c','0'}�����еĽ��һ��
//	printf("%s\n", arr);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//
//int main()
//{
//	//printf("c\test\32\test.c");//\t:ת���ַ�   \32:ת���ַ�����\ddd,ddd��ʾ1~3���˽��Ƶ����֡�32���˽��ƣ�-26��ʮ���ƣ�-Z��ASC11)
//	printf("%c\n",'\132');
//	return 0;
//int main()
//{
//	int input = 0;
//	printf("������һ��\n");
//	printf("��Ҫ�ú�ѧϰ��\n �������һ���������������<:");
//	scanf("%d", &input);
//	if (input == 0,6,2)
//		if (input == 2)
//			printf("���ɵ��");
//		if (input == 0)
//			printf("�ؼ��ֵ�");
//		if (input == 6)
//			printf("��������");
//	else
//		printf("�ڼ�ι��");
//	return 0;
//}
//int main()
//{
//	int rank = 90;
//	printf("��ɵ�ӳ��Կ�����\n");
//	while (rank < 2)
//	{
//		printf("ÿ�ο�����Ӻ�����̣�%d", rank);
//		rank--;
//	}
//	if (rank < 0)
//		printf("������ɽ��");
//	return 0;
//}
//int Add(int x, int y)    //ע��˴���β�޷ֺ�
//{                        //ע��Ҫ��������
//	int z = x + y;
//	return z;}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 2;
//	int sum = 0;
//	sum = Add(num1, num2);
//	printf("%d", sum);
//	return 0;
//}
//	int main()

//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", arr[7]);
//	int i = 0;
//	while (i <= 8)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);//����ʱ���߽Կ�
//	printf("%d\n", sizeof(int));//ע����ʱ����Ҫ������
//	return 0;
//}
int main()
{
	int input = 0;
	printf("���ϸ�����\n");
	printf("��Ҫ�ú�ѧϰ��\n �������һ���������������<:");
	scanf("%d", &input);
	if (input == 0, 6, 2)
		if (input == 2)
			printf("���ɵ��");
	if (input == 0)
		printf("�ؼ��ֵ�");
	if (input == 6)
		printf("��������");
	else
		printf("�ڼ�ι��");
	return 0;
}
