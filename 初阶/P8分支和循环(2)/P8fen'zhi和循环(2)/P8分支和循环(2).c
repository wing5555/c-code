#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char pw[20] = { 0 };
//	int a = 0;
//	printf("����������:<");
//	scanf("%s", &pw);//����123456
//	printf("��ȷ��(X/Y):<");
//	if((a=getchar())=='Y')
//		printf("���ͨ��");
//	else
//		printf("�������");//����ֱ������������,ԭ���Ǵ��ڻ�����,����123456��Ҫ��س���,�����������л����ַ�'\n',a=getchar()��ȡ\nֱ������������
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	char pw[20] = { 0 };
//	printf("����������:<");
//	scanf("%s", &pw);
//	printf("��ȷ��(Y/N):<");
//	while (getchar() != '\n')
//	{
//		;
//	}
//	if ((a = getchar()) == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȡ��ȷ��");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//i=5ʱ������ת���ж����,����������ѭ��
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//i=5��,����֮��Ĵ�ӡ���,ִ�е������i++,�ʽ������ӡ5
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)//0<=i<10,ǰ�պ�
//		printf("%d ", arr[i]);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int z = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			z++;
//			printf("hehe%d ", z);//��ӡ���Ϊ10��hehe,ԭ����:��i=0ʱ����jѭ��,j=10ʱ����jѭ��,i=1���ֽ���jѭ��,����jѭ��ȱ�ٳ�ʼ������,��j��=10,����jѭ��,֮���������
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; y = 0; x++, ++y)
//		y++;//ѭ��һ�ζ������У�ԭ���Ǿ�����ʼ���󣬽����ж�������y=0Ϊ�٣�������ѭ����
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; y++, x++)
//		printf("hehe ");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;//������i=5ʱ������ѭ����ԭ����i=5ʱ������ѭ��֮�����䣬ֱ����ת���ж�����i=5���ж�Ϊ�棬����ѭ����i�Ե���5��������ѭ��
//		printf("%d ", i);
//		i++;
//	}
//	while (i<11);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret1 = 1;
//	int ret2 = 0;
//	printf("������n=");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret1 = ret1 * i;
//		ret2 = ret2 + ret1;
//	}
//	printf("n!=%d\n", ret1);
//	printf("n!+(n-1)!+...+1!=%d", ret2);
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int i = 1;
//	int ret = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		n = i * n;
//		ret = n + ret;
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int ret = 1;
//	int sum = 0;
//	int i = 1;
//	int n = 0;
//	for (sum = 0; i <= 10; i++)
//	{
//		for (n = 1; n <= i; n++)
//		{
//			ret = n * ret;
//		}
//		sum = sum + ret;
//		ret = 1;//ע��Ҫ����ret=1��ʹÿ���ڲ�ѭ���꽫ret��ʼ���������ڲ�ѭ��������Ч����n��*n������ÿ���ڲ�ѭ����ret���õ���������ô�´�ѭ��n*ret����n��*n��
//	}
//	printf("sum=%d", sum);
//	return 0;
//}

//int main()
//{
//
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
//	int n = 0;
//	int a = sizeof(arr)/4;
//	int i = 0;
//	int j = 0;
//	printf("n=");
//	scanf("%d", &n);
//	for (i = 0; i <= a; i++)
//	{
//		if (n == arr[i])
//		{
//			break;
//		}
//	}
//	printf("arr��%d�ĸ�����;%d", n, j);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int a = sz / 2;
//	int b = sz / 2;
//	int n = 0;
//	int i = 0;
//	printf("n=");
//	scanf("%d", &n);
//	for (i = 0; i < sz; i ++)
//	{
//		if (arr[a] < n)
//		{
//			b = b / 2;
//			a = a + b;
//		}
//		else if (arr[a] > n)
//		{
//			b = b / 2;
//			a = a - b;
//		}
//		else
//		{
//			printf("��arr���ҵ�n��λ���±�%d", a);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,7,8,9 };//��������
//	int l = 0;//���±�
//	int r = sizeof(arr)/sizeof(arr[0])-1;//���±�
//	int n = 0;//Ҫ���ҵ�����
//	printf("n=");
//	scanf("%d", &n);
//	while (l < r)//ֻ�е����±�С�����±�ʱ�ſ��ܲ��ҵ�n
//	{
//		if (n < arr[(l + r) / 2])//nС�������±�ƽ��ֵ��Ӧ�����֣���ȡ���±�Ϊ�����±�ƽ��ֵ��һ
//		{
//			r = (l + r) / 2 - 1;
//		}
//		else if (n > arr[(l + r) / 2])//����ͬ��
//		{
//			l = (1 + r) / 2 + 1;
//		}
//		else
//		{
//			printf("arr�д���%d��λ���±�%d", n, (l + r) / 2);
//		}
//	}
//	if (l >= r)
//		printf("arr�в�����%d", n);
//	return 0;
//}

//int main()
//{
//	char ch1[] = {"welcome to doming province"};//����˼������ch1������ch2����ʵ�ֶ���ַ��������ƶ������м�㼯
//	int sz = sizeof(ch1) / sizeof(ch1[0])-2;//�����ch1�н�β��\n,�ڼ���sizeofʱ����Ҳ�������У������2
//	//int sz = strlen(ch1)-1;//ʵ�ֵ�Ч������һ�δ���һ�£�strlen����ʱ������\n��������
//	char ch2[] = {"##########################"};
//	int r = 0;//���±�
//	int l = 0;//���±�
//	for (r = 0, l = sz; r<=l; r++, l--)
//	{
//		ch2[r] = ch1[r];
//		ch2[l] = ch1[l];
//		printf("%s", ch2);
//		Sleep(1000);//��ͣ1s��1000ms����ע��S��д
//		system("cls");//����
//	}
//	printf("%s", ch2);
//	return 0;
//}

//int main()
//{
//	char password[20] = {"abc123456"};//��������
//   	char ch[20] = "0";
//	int i = 0;
//	printf("����������:");
//	scanf("%s", &ch);//��������
//	if ( strcmp (ch,password) != 0)//�Ƚ������ַ����Ĵ�СҪ��strcmp����������ַ���ȣ��򷵻�0
//	{
//		for (i = 0; i < 2; i++)
//		{
//			printf("�������\n");
//			printf("���������룺");
//			scanf("%s", &ch);
//			if (strcmp(ch, password) == 0)
//			{
//				printf("��¼�ɹ�");
//				break;
//			}
//		}
//	}
//	else
//		printf("��¼�ɹ�\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = "abc123456";//ԭ����
//	char psme[20] = "0";//���������
//	for (i = 0; i < 3; i++)//ʵ������3�γ����˳�����������ȷ���Ƴ�����
//	{
//		printf("����������:");
//		scanf("%s", &psme);//��������
//		if (strcmp(password, psme) == 0)//����������ȷʱ
//		{
//			printf("������ȷ");
//			break;
//		}
//		else//�������ʱ
//		{
//			if (i == 2)
//				break;
//			printf("�������\n");
//		}
//	}
//	return 0;
//}


int main()
{
	enum Sex   //ö�ٹؼ���enum
	{
		MALE,   //0
		FEMALE,//1
		SECARE//2  MALE,FEMALE,SECURE����ö�ٳ���
	};
	printf("%d\n", FEMALE);
	return 0;
}