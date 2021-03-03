#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<ctype.h>


//1,输入一串字符串，要求统计其中小写字母出现的次数，并按照出现次数的多少依次输出
//当出现相同次数的字母时，按照字母的先后顺序依次输出。例如：输入：“mike.lee@ChinaBeijing"
//输出：aghjklm : 1
//		n : 2
//     ei : 4

//分析：一轮遍历，筛选出小写字母
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
//			max = ++count[(int)*p - 97] > max ? count[(int)*p - 97] : max;   //以数组的形式存储字符
//			//p++;                  //放在里面发生错误，到'.'时变为死循环
//		}
//		p++;
//	}
//	int flag = 0;
//	for (i = 1; i <= max; i++)
//	{
//		for (j = 0; j < 26; j++)
//		{
//			if (i == count[j])      //根据出现次数找出对应的字母
//			{
//				printf("%c", j+97);//打印字符
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


//2.计算整数为N的阶乘，要求计算的结果最长可达50位（十进制）的整数。
//ps:在32位系统中，double最长储存20位

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




//3.字符旋转。要求输入两个整数M,N，生成一个M*N的矩阵，

//编写递归函数，输入一个字符串，逆序输出。例如：“abcdef”，输出“fedcba”；
//void reverse_print(char* p)
//{
//	if (*p )
//	{
//	    return reverse_print(p + 1);//使用return错误
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

