 #define _CRT_SECURE_NO_WARNINGS  1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	
//	return 0;
//}
//可执行程序
//debug版本的可执行程序  //可以调试的
//release版本的可执行程序  //文件中包含了调试信息
//文件大小较大
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("yeee\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//
//	return 0;
//}
//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp = %d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	
//
//	return 0;
//}
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 0; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			
//			ret *= j;
//
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//
//	system("pause");
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	
//	return 0;
//}
// 第二版
//#include<string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//int main()
//{
//	//strcopy
//	//字符串拷贝
//	char arr1[] = "###################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//第三版
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	
//}
//int main()
//{
//	char arr1[] = "###################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);
//}
//#include<assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	
//}
//
//int main()
//{
//	char arr1[] = "###";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//}
//int main()
//{
//	const int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include<math.h>
//
//int main()
//{
//    char str[50];
//    char str2[50];
//    int i, len;
//    scanf("%c", &str[50]);
//    len = strlen(str);
//    for (i = 0; i < len; i++)
//    {
//        if (str[i] >= 'a' && str[i] <= 'z')
//        {
//            if (str[i] + 3 <= 'z')
//            {
//                str2[i] = str[i] + 3;
//            }
//            else
//                str2[i] = ((str[i] + 3) - 'z') + 96;
//        }
//        else if (str[i] >= 'A' && str[i] <= 'Z')
//        {
//            if (str[i] + 3 <= 'Z')
//            {
//                str2[i] = str[i] + 3;
//            }
//            else
//                str2[i] = ((str[i] + 3) - 'Z') + 64;
//        }
//        else {
//            str2[i] = str[i];
//        }
//    }
//    for (i = 0; i < len; i++) {
//        printf("%c", str[i]);
//    }
//
//    printf("\n");
//    for (i = 0; i < len; i++) {
//        printf("%c", str2[i]);
//    }
//}
#include<stdio.h>
int main()
{
	char ch1, ch2, ch3, ch4, ch5;
	scanf("%c", &ch1);
	scanf("%c", &ch2); 
	scanf("%c", &ch3); 
	scanf("%c", &ch4); 
	scanf("%c", &ch5);
	printf("加密后：%c%c%c%c%c", ch1 + 4, ch2 + 4, ch3 + 4, ch4 + 4, ch5 + 4);
	return 0;

}