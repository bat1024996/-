#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

//将一句话的单词进行逆序，标点不逆序。
//例如：输入I like beijing.
//输出：beijing. like I

//char *reverse(char *p)
//{
//
//}
//
//int main()
//{
//	char arr[20];
//	gets(arr);
//	int len = strlen(arr);
//
//	reverse(arr,);
//	return 0;
//}

//#define  MAX   50;
//int *calc_number(int n)
//{
//	int arr[MAX] = { 0 };
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	calc_number(n);
//
//	return 0;
//}


//#include<string.h>
//#include<errno.h>
//int main()
//{
//	printf("haha\n");
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//	printf("%s\n", strerror(6));*/
//	printf("%s\n", strerror(errno));
//	printf("%s\n", strerror(0));
//	return 0;
//}
//
//#include<ctype.h>
//
//int main()
//{
//	int i = 0;
//	char arr[] = "Hello World";
//	while (arr[i])
//	{
//		if (islower(arr[i]))
//			arr[i] = toupper(arr[i]);
//		printf("%c", arr[i++]);
//	}
//	return 0;
//}
#include<assert.h>

char* my_memcpy(void* dest, void*src, size_t count)
{
	assert(dest&&src);
	char* ret = (char*)dest;
	/*char *ptr = (char*)dest;
	char *str = (char*)src;
	while (count--)
	{
		*ptr++ = *str++;
	}*/
	while (count--)
	{
		*((char*)dest)++ = *((char*)src)++;
	}
	return ret;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr, 5*sizeof(arr[0]));

	//my_memcpy(arr2, arr, 16);
	int arr3[10] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	memmove(arr3 + 2, arr3, 16);
	return 0;
}
