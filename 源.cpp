#define _CRT_SECURE_NO_WARNINGS 1

////ʹ�ö��ű��ʽ��д
//while (a = getval(a), count_val(a), a > 0) {
//	//ҵ����
//}
//������һ���ṹ������-struct stu
#include<stdio.h>
struct stu
{
	char name[20];
	int age;
	char id[20];
};
int main() {
	int a = 10;
	//ʹ��struct stu ������ʹ�����һ��ѧ������s1 ����ʼ��
	struct stu s1 = { "Anduin",20,"20210109" };
	printf("%s\n", s1.name);
	printf("%s\n", s1.age); 
	printf("%s\n", s1.id);
	return 0;
}