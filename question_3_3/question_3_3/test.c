#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<ctype.h>


//1,����һ���ַ�����Ҫ��ͳ������Сд��ĸ���ֵĴ����������ճ��ִ����Ķ����������
//��������ͬ��������ĸʱ��������ĸ���Ⱥ�˳��������������磺���룺��mike.lee@ChinaBeijing"
//�����aghjklm : 1
//		n : 2
//     ei : 4

//������һ�ֱ�����ɸѡ��Сд��ĸ
//
//

//void calc_charnum(char* p)
//{
//	int count[26] = { 0 };
//	int i, j,max=0;
//	assert(p);
//	for (i = 0; *p != '\0'; i++)
//	{
//		if (islower(*p))
//		{
//			max = ++count[(int)*p - 97] > max ? count[(int)*p - 97] : max;   //���������ʽ�洢�ַ�
//			//p++;                  //�������淢�����󣬵�'.'ʱ��Ϊ��ѭ��
//		}
//		p++;
//	}
//	int flag = 0;
//	for (i = 1; i <= max; i++)
//	{
//		for (j = 0; j < 26; j++)
//		{
//			if (i == count[j])      //���ݳ��ִ����ҳ���Ӧ����ĸ
//			{
//				printf("%c", j+97);//��ӡ�ַ�
//				flag = 1;
//			}
//		}
//		if (flag)
//			printf("  :%d\n", i);
//		flag = 0;
//	}
//}
//int main()
//{
//	char arr[] = "I love programming@C with class and java";
//	calc_charnum(arr);
//	return 0;
//}


//2.��������ΪN�Ľ׳ˣ�Ҫ�����Ľ����ɴ�50λ��ʮ���ƣ���������
//ps:��32λϵͳ�У�double�����20λ

#define N 50
int arr[N];
void Sum_print(int max)
{
	int i,j;
	int sum = 0;
	for (i = 1; i <= max; i++)
	{
		for (j = 0; j < max; j++)
		{
			arr[j] *= j;
		}
	}

}

int main()
{
	Sum_print(N);

	return 0;
}




//3.�ַ���ת��Ҫ��������������M,N������һ��M*N�ľ���

//��д�ݹ麯��������һ���ַ�����������������磺��abcdef���������fedcba����
//void reverse_print(char* p)
//{
//	if (*p )
//	{
//	    return reverse_print(p + 1);//ʹ��return����
//		printf("%c", *p);
//	}
//		
//}

//void reverse_print(char* p)
//{
//	if (*p)
//		reverse_print(p+1);
//	printf("%c", *p);
//}

//void reverse_print(char* p)
//{
//	if (*p)
//	{
//		reverse_print(p + 1);          //
//		printf("%c", *p);
//	}
//}

//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_print(arr);
//
//	return 0;
//}

