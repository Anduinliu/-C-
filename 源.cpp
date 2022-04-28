 #define _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
//创建一个结构体类型-struct stu
//struct stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//
//};
//int main() {
//	int a = 10;
//	//使用struct stu 这个类型创建了一个学生对象s1 ，并初始化
//	struct stu s1 = { "zhangsan",20,"20191011" };
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//	//左边是结构体指针->成员名
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);*/
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age); 
//	printf("%s\n", s1.id);*/
//	//结构体变量,成员名
//	return  0;
//}
//int main() {
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	//00000000000000000000000001111111
//	//01111111 - b
//	//a 和 b怎么相加
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//10000010 - c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码 - -126
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
//int main() {
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
//int main() {
//	int a = 19;
//	int* p = &a;
//	printf("%d\n", a);
//	return 0;
//}
//int main() {
//	int a = 10;
//	int* p = &a;
//	return 0;
//}
//int main() {
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*)); 
//	printf("%d\n", sizeof(int*)); 
//	printf("%d\n", sizeof(double*)); */
//	int a = 0x11223344;
//	char* pa = &a;
//	*pc = 0;
//	/*char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);*/
//	return 0;
//
////}
//int main() {
//	int arr[10] = { 0 };
//	int*p = arr;//数组名 - 首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//
//	}
//	return 0;
//int main() {
//	int a;//局部变量不初始化，默认随机值
//	int* p;//局部的指针变量，就被初始化随机值
//	*p = 20;
//	return 0;
//}
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++) {
//		*(p++) = i;
//	}
//	return 0;
//}
//int* test() {
//	int a = 10;
//	return &a;
//}
//int main() {
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//int main() {
//	int a[10] = { 0 };
//
//
//}
//int main() {
//	int a = 10;
//	int* pa = &a;
//	int* p = NULL;//可类比于int a = 0
//	//NULL - 用来初始化指针
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//}
//int main() {
//
//	int arr[10] = { 1,2,3,4,5,6,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *p);
//		p = p + 1;
//	}
//	return 0;
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d ", &arr[9] - &arr[0]);//指针 - 指针的得到的是中间元素的个数
////	return 0;
////}
//int main()
//{
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen - 计数器的方式1 ， 递归的方式 2
//	//
//	char arr[] = "bit";
//
//	my_strlen(arr
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end!= '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen - 求字符串长度
//	//递归 - 模拟实现了strlen - 计数器的方式 1  ， 递归的方式 2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//地址 - 首元素的地址
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);//虽然地址一样，但是
//	printf("%p\n", &arr+1);
//	//1.&arr - &数组名 不是首元素的地址 - 数组名表示整个数组 - &数组名取出的是整个数组的地址
//	//sizeof(arr) - sizeof(数组名) - 数组名表示的是整个数组 - sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//
//	}
//	for (i = 0;i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//
//	}
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%p ======== %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//					//int*** pppa = &ppa;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main() 
// {
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	 return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);
//	return 0;
//
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count = %d\n", count);
//	return 0;
////}
//void print(int m)
//{
//	int i = 0;
//	printf("奇数位\n");
//	for (i = 30; i > 0; i -= 2)
//	{
//		printf("%d ",(m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位\n");
//	for (i = 31; i > 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ",i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}
//#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//
//}
//int main()
//{
//	char arr[] = "avidshishkak";
//	reverse_string(arr );
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 2000; i <= 2500; i++)
//	{
//		
//		if (i % 4 == 0 && i % 100 !=0 || i % 400 == 0)
//		{
//			count++;
//			printf("%d是闰年\n", i);
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}
//int digitsum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return digitsum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = digitsum(num);
//	printf("ret = %d\n",ret);
//	return 0;
//}
//double pow(int n, int k)
//{
//	if (k < 0)
//		return 1.0 / pow(n, -k);
//	else if (k == 0)
//		return 1.0;
//	else
//		return n * pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = pow(n,k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}stu结构体标签  struct stu - 结构体类型
//struct stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//};
//int main()
//{
//	struct stu s;//chuang
//
//	return 0;
//}
/*struct stu
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1, s2, s3;*///是三个全局的结构体变量
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//stu是类型
//int main()
//{
//    stu s1 = {"Anduin",19,"13606113114","男"};//局部的结构体变量
//	struct stu s2 = {"小比",30,"12324353","nv"};
//	return 0;
//}
//struct s
//{
//	int a;
//	char c;
//    char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct s S;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello ANDUIN\n";
//	struct T  t = { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.S.arr);//hello world
//	printf("%lf\n", t.S.d);//3,14
//	printf("%s\n", t.pc);//hello ANDUIN
//	return 0;
//}
//typedef struct stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}stu;//stu是类型
//void print1(stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//void print2(stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele); 
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	stu s = { "里斯",40,"1558888888","male" };
//	print1(s);
//	print2(&s);
//	return 0;
//}
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int ret = 0;
	ret = add(a, b);
	return 0;
}