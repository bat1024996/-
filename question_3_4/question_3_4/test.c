#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//��������1�ĸ���
//
//��һ �����Ʋ����������ȡ
//1&1=1;  0&1=0;
//int get_onebite(int n)
//{
//	int count = 0;
//	while(n)
//	{
//		if (n&1)
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	return count;
//}

//��2���㷨n&(n-1)
//int get_onebite(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//			count++;	
//	}
//	return count;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	get_onebite(n);
//	return 0;
//}


