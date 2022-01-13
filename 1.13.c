#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,4,5,6,6 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr);         //sizeof 和& arr此时的arr代表整个数组
//	printf("%p\n", &arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	return 0;
//}
                //arr首元素地址，*arr为第一个元素内容：printf("%d\n",*arr)
//void d_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,4,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	d_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3,},{4,5} };//二维数组列下标不可省略
//	int i = 0;
//	for (i = 0; i <= 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 3; j++)
//		{
//			printf("arr[%d][%d]:%p ",i,j ,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = "aassss\0sss";
//	printf("%d\n", strlen(arr)); //strlen只能求字符串长度，/0结束
//	return 0;
//}
//int fab(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fab(n - 2) + fab(n - 1);
//}
/*i*//*nt fab(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fab(n);
	printf("%d\n", ret);
	return 0;
}*/
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int fac(n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	return 0;
//}
//int main()
//{
//	char arr[] = {"ddddd"};
//	int k = my_strlen(arr);
//	printf("%d\n", k);
//}
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//int main()
//{
//	printf("hh\n");
//	main();
//	return 0;
//}