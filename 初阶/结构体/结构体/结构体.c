#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6,c=6
//	b = ++c, c++, ++a, a++;//c=8,a=8,b=7
//	b += a++ + c;//a=9,b=23,c=8
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[10];
//	int score;
//};
//struct Stu1
//{
//	struct Stu s1;
//	char id[20];
//	struct Stu1* p;//�����ڽṹ���ڲ�����ýṹ�����͵�ָ��
//};
//int main()
//{
//	struct Stu stu = { "С��",18,"����",60 };
//	struct Stu1 S1 = { {"С��",25,"��",60},"308148",NULL };
//	printf("%d\n", S1.s1.age);
//	//strcpy(stu.name, "С��");
//	//struct Stu* p1 = &stu;
//	//*(p1 + 1) = 10;//err
//	//(*p1).age = 10;
//	//printf("%s\n", p1->name);
//	//printf("%d\n", stu.age);
//	//printf("%s\n", p1->sex);
//	//printf("%s", S1.id);
//	return 0;
//}

//struct Stu
//{
//	char name[10];
//	int age;
//	char sex[10];
//	int score;
//};
//
//void print(struct Stu* p)
//{
//	printf("%s\n%d\n%s\n%d\n", p->name, p->age, (*p).sex, (*p).score);
//}
//
//int main()
//{
//	struct Stu s1= { "С��",18,"����",60 };
//	print(&s1);
//	return 0;
//}

//�����������1�ĸ���
int Judge_1_num (int a)
{
		int count = 0;
		while (a != 0)
		{
			a = a & a - 1;//ÿ��һ�Σ�a�м���һ��1
			count++;
		}
		return count;

}

//int main()
//{
//	unsigned int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//�ж�һ�����ǲ���2��n�η�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (Judge_1_num(n) == 1)
//	{
//		printf("yes");
//	}
//	else
//		printf( "no" );
//	return 0;
//}
//���������Ķ�����Ϊ�ж���λ��ͬ
int main()
{
	int m = 3;
	int n = 5;
	//scanf("%d%d", &m, &n);
	int count = Judge_1_num(m ^ n);
	printf("%d\n", count);
	return 0;
}

//011
//101
//int main()
//{
//	char PS[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", PS);
//	printf("��ȷ��");
//	getchar();
//	int ch = getchar();
//	return 0;
//}
