#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 0;//a���ڴ��д洢��00000000000000000000000000000000
//	int b = ~a;//~ָ��a��Ӧ�Ķ���������λȡ������11111111111111111111111111111111����λ��1�����������ڴ������Բ������ʽ�洢
//	           //ԭ�뵽���룺����λ���䣬����λȡ�������뵽���룺�����1
//	printf("%d", ~b);
//}
//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++��a=11,b=10
//	//int b = ++a;//ǰ��++����++����ʹ�ã�a=11,b=11
//	int b = a--;//����--����ʹ�ã���--��a=9,b=10
//	printf("a=%d\nb=%d",a,b);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a ,& b);
//	max = MAX(a, b);
//	printf("%d", max);
//	/*if (a > b)
		//printf("max=%d", a);
//	else
//		printf("max=%d", b);*/
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = a > b ? a : b;//exp1��exp2��exp3����˼��������ʽ1Ϊ�棬��������ʽ2����֮����������ʽ3.�����a>b�����������a����֮�����
//	printf("max=%d", max);
//	return 0;
//}
//int main()
//{
//	register int a = 0;//���齫a��ֵ����Ĵ�����ȥ��ע���ǽ��飬���շŲ��Ż����ɱ���������������Ϊ�Ĵ����ڴ����ޣ������ڴ治��ʱ���ţ�
//	return 0;
//}
//
//int main()
//{
//	//int float = 0;//err,����ı��������ܺ͹ؼ�����ͬ
//	unsigned int num1 = 10;
//	typedef unsigned int u_int;//typedef(�����ض��壬num1��num2����ı�������ͬ�ģ���unsigned int=u_int��ע��ʹ��ʱֱ��д����ı������ɣ�����д�Ⱥ�
//	u_int num2 = 10;
//	return 0;
//}

//void test()
//{
//	static int a = 0;//statac���ξֲ�����ʱ��Ϊ��̬�ֲ��������ڲ���ʱ�����н����5��1������static������1��5
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	extern int g_val;//���������ⲿ����
//	printf("%d", g_val);
//	return 0;
//}

//int main()
//{
//	extern ADD(int, int);
//	int a = 10;
//	int b = 65;
//	int sum = ADD(a, b);
//	printf("%d", sum);
//	return 0;
//}

//#define c 100//define����ı�ʶ��������c�������ǳ�����ע���ʽ������c(100)
//#define MAX(x,y)(x>y?x:y)//һ�����󣺺��x��y���ؼ�����
//int main()
//{
//	int a = 51;
//	int b = 25;
//	int max = MAX(a, b);
//	printf("c=%d", c);
//	printf("max=%d", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//%p�����Ե�ַ����ʽ��ӡ
//	int* p= &a;//pΪһ������ָ�������ע�ⶨ�巽ʽ��int*)��p�зŵ���a�ĵ�ַ
//	printf("%p\n", p);
//	*p = 20;//*--�����ò�������*p=20�൱��a=20
//	printf("a=%d", a);
//	return 0;
//}

//int main()
//{
//	char a = 'x';
//	printf("%c\n", a);
//	printf("%p\n", &a);
//	char* p = &a;
//	printf("%p\n", p);
//	printf("%c\n", (*p));
//	*p = 'y';
//	printf("%c\n", a);
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*p));
//	return 0;
//}
//
//int main()
//{
//	printf("    ***     \n     *     \n*************\n    ***     \n    ***     \n     *     ");
//	return 0;
//}

//int main()
//{
//	int M = 0;
//	scanf("%d", &M);
//	int a = M % 5;
//	if (a == 0)//ע������Ҫ��==
//		printf("yes");
//	else
//		printf("NO");
//	return 0;
//}

struct Book
{
	char name[20];
	int price;
	int page;
};
int main()
{
	struct Book b1={"c���Գ������",55,528 };//ע����ʽ��ֱ��д�ṹ�壬���أ�name=��c���Գ�����ơ���err��
	/*struct Book* pb = &b1;*/
	//printf("����Ϊ��%s\n", pb->name); //ע��.��->������.:�ṹ�����.��Ա   ->:�ṹ��ָ��->��Ա
	//printf("�۸�Ϊ��%d\n", pb->price);
	//printf("ҳ��Ϊ��%d\n", pb->page);
	//printf("����Ϊ��%s\n", (*pb).name);//ע�⣬*pb�൱��b1�����ڴ�ӡʱҪ������
	//printf("�۸�Ϊ��%d\n", (*pb).price);
	//printf("ҳ��Ϊ��%d\n", (*pb).page);
	printf("����Ϊ��%s\n", b1.name);
	printf("�۸�Ϊ��%d\n", b1.price);
	printf("ҳ��Ϊ��%d\n", b1.page);
	b1.price = 15;
	printf("�޸ĺ�ļ۸�Ϊ��%d\n", b1.price);
	b1.name = "c���Գ�����ƻ���";
	return 0;
}

//struct People
//{
//	char Name[20];
//	int Age;
//	char Sex[20];
//	char interest[20];
//	char power[20];
//	char evaluate[20];
//};
//int main()
//{
//	struct People b1={ "����", 26, "��", "�����ֻ�", "װ����ɵ", "�Ǹ�����" };
//	printf("������%s\n", b1.Name);
//	printf("���䣺%d\n", b1.Age);
//	printf("�Ա�%s\n", b1.Sex);
//	printf("��Ȥ��%s\n", b1.interest);
//	printf("������%s\n", b1.power);
//	printf("���ۣ�%s\n", b1.evaluate);
//	return 0;
//}