#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("δ����");
//	else
//	{
//		if (age >= 18 && age < 30)
//			printf("����");
//		else if (age >= 30 && age < 50)
//			printf("׳��");
//		else if (age >= 50 && age < 80)
//			printf("����");
//		else
//			printf("�õ�����");
//	}
	/*else if (age >= 18 && age < 30)
		printf("����");
	else if (age >= 30 && age < 50)
		printf("׳��");
	else if (age >= 50 && age < 80)
		printf("����");
	else
		printf("�õ�����");
	return 0;*/
//}

//int main()
//{
//	int height = 0;
//	scanf("%d", &height);
//	if (height >= 0 && height < 150)
//	{
//		printf("δ����");
//		printf("С�͸�");
//	}
//	else
//		printf("��߸�");
//	return 0;
//}

//int main()   //Ӧ��ʲô��û�������ԭ����else������������if�����Եģ���else����һ��if���Ϊһ������飬ͬ����һ��if���֮�£���a=1Ϊ�٣��ʸ�if��䲻ִ��,���������
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe");
//		else
//			printf("haha");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//		printf("NO");
//	else
//		printf("YES");
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int i = 0;
//	while (i < 100)
//	{
//		if (a % 2 == 1)
//			printf("%d\n", a);
//		a++;
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int grade = 0;
//	scanf("%d", &grade);
//	switch (grade)//()����Ϊ���α��ʽ
//	{
//	case 1://case����Ϊ���γ������ʽ 
//		printf("һ�꼶");
//		break;
//	case 2:
//		printf("���꼶");
//		break;
//	case 3:
//		printf("���꼶");
//		break;
//	case 4:
//		printf("���꼶");
//		break;
//	case 5:
//		printf("���꼶");
//		break;
//	case 6:
//		printf("���꼶");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int grade = 0;
//	scanf("%d", &grade);
//	switch (grade)
//	{
//	case 1:
//	case 2:
//	case 3://����1\2\3����ʾ���꼶
//		printf("���꼶");
//		break;
//	case 4:
//	case 5:
//	case 6:
//		printf("���꼶");
//		break;
//	default://����1-6֮����������ֻ���ʾ�������
//		printf("�������");
//	}
//	return 0;
//}

//int main()
//{
//	int m = 2;
//	int n = 1;
//	switch (n)
//	{
//	case 1:
//	case 2:
//		m++;
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;//�˴�break�������ǵڶ���switch,��case4�Ի�ִ��,��ֱ�Ӱ�������default��
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d\nn=%d",m, n);
//	return 0;
//}

//int main()
//{
//	int a= 1;
//	while (a <= 10)
//	{
//		printf("%d", a);
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	while ((a =getchar())!= EOF)//ע��,�����a=getchar()Ҫ������������,���߱�̳���,��ctrl+z������EOF
//	{
//		putchar (a);
//	}
//	return 0;
//}