#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	//int a = 10;//C++��ע�ͷ��
	/*
	int b = 20;
	*/
	//C���Ե�ע�ͷ��
	return 0;
}


/*
int main()
{
	printf("%d\n", strlen("c:\test\328\test.c"));//14
	printf("%c\n", '\130');//64+24
	printf("%c\n", '\070');//8  56��ASCIIֵΪ8 
	printf("%c\n", '\x050');
	//123
	//070 -- 0*8^0+7*8^1+0*8^2=56
	//@!w$%
	//a-97
	//A-65
	//ASCII ����
	system("pause");
	return 0;
}
*/



/*
int main()
{
	printf("\a\a\a\a\a\a\a");//'\a'�����ַ�������
	system("pause");
	return 0;
}
*/



/*
int main()
 {
	printf("c:\\test\\test.c"); //c:\test\test.c
 	printf("hehe\n");
    printf("%c\n", '\'');//'
 	printf("%s\n", "\"");//"
 	system("pause");
 	return 0;
 }
*/



/*
int main()
{
	int len = strlen("abcd");
	printf("%d\n", len);//string length  ���Ϊ4    �����ַ������ȵ�ʱ�� \0 �ǽ�����־���������ַ�������

	char arr1[] = "hehe";    //�ַ����Ľ�����־��һ�� \0 ��ת���ַ�
	char arr2[] = {'h', 'e', 'h', 'e'};
	char arr3[] = { 'h', 'e', 'h', 'e','\0'};
	printf("%s\n", "hehe");//hehe
	printf("%s\n", arr1);//hehe
	printf("%s\n", arr2);//hehe��������hehe   û�С�\0�������Դ�ӡ�ꡮhehe����û��ֹͣ
	printf("%s\n", arr3);//hehe

	system("pause");
	return 0;
}
*/



/*
struct Stu
{
	char name[10];
	int age;
};

//#define MALE 0
//#define FEMALE 1
//#define SECRET 2

//ö�ٳ���
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	//enum Sex s = MALE;
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE);//1
	printf("%d\n", SECRET);//2  ֵ���ܸģ�Ĭ��ֵ��
	system("pause");
	return 0;
}
*/



/*
//#define ����ı�ʶ������  
#define MAX 1000
int main()
{
	int a =	MAX;
	printf("a = %d\n", a);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	//3;  3.14;  ���泣��
    int num = 10;
	num = 20;
	printf("%d\n", num);//20
	//const int num = 10;//���������г����ԣ����ܱ��ģ������������Ǳ�����   ���д���
	//num = 20;
	//printf("%d\n", num);

	const int n = 10;
	int arr[n] = {0};

	system("pause");
	return 0;
}
*/



/*
int main()
{
	{
		int a = 10;//�ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ���
	}
	return 0;
}
*/



/*
//����
extern int g_val;
 
int main() //һ������ֻ����һ��main����
{
	printf("%d\n", g_val);
	system("pause");
	return 0;
}
*/



/*
int a = 100;//ȫ�ֱ���������������������
int main()
{
	printf("a = %d\n", a);//100
	{
		printf("a = %d\n", a);	//100
	}
	printf("a = %d\n", a);//100
	system("pause");
	return 0;
}

*/



/*
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("%d\n", sum);
	system("pause");
	return 0;
}
*/



/*
int a = 20;//ȫ�ֱ���   ��������     ������� -{}
int main()
{
	int a = 10;//�ֲ�����   ��������   ������� -{}
	printf("a = %d\n", a);//10   ���ֲ�������ȫ�ֱ���ͬ����ʱ�򣬾ֲ���������ʹ��
	system("pause");
	return 0;
}
*/



/*
 int main()
 {
 	float weight = 0.0;
 	char ch = 'w';
 	return 0;
 }
*/



/*
//ÿ�����͵Ĵ�С
int main()
{
	//char short int long ....    
	printf("%d\n", sizeof(char));//1  �ֽ�         1byte=8bit
	printf("%d\n", sizeof(short));//2     short<=int<=long
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4 
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int age = 0;
	scanf("%d", &age);//error'scanf': This function or variable may be unsafe.
	                  //Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. 
	                  //See online help for details.
	printf("age = %d\n", age);//Fn+F10   ����
	return 0;
	system("pause");
}
*/



/*
//������-��������
 int main()
 {
 	//�������
 	printf("hehe\n");
 	printf("hehe\n");
 	printf("hehe\n");
 	printf("hehe\n");
 	printf("hehe\n");
    
	//��ͣ
 	system("pause");//system��һ���⺯��
 	return 0;
 }
*/
 