#define _CRT_SECURE_NO_WARNINGS 1

////使用逗号表达式改写
//while (a = getval(a), count_val(a), a > 0) {
//	//业务处理
//}
//创建了一个结构体类型-struct stu
#include<stdio.h>
struct stu
{
	char name[20];
	int age;
	char id[20];
};
int main() {
	int a = 10;
	//使用struct stu 这个类型创建了一个学生对象s1 并初始化
	struct stu s1 = { "Anduin",20,"20210109" };
	printf("%s\n", s1.name);
	printf("%s\n", s1.age); 
	printf("%s\n", s1.id);
	return 0;
}