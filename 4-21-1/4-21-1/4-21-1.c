#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	//int a = 10;//C++的注释风格
	/*
	int b = 20;
	*/
	//C语言的注释风格
	return 0;
}


/*
int main()
{
	printf("%d\n", strlen("c:\test\328\test.c"));//14
	printf("%c\n", '\130');//64+24
	printf("%c\n", '\070');//8  56的ASCII值为8 
	printf("%c\n", '\x050');
	//123
	//070 -- 0*8^0+7*8^1+0*8^2=56
	//@!w$%
	//a-97
	//A-65
	//ASCII 编码
	system("pause");
	return 0;
}
*/



/*
int main()
{
	printf("\a\a\a\a\a\a\a");//'\a'警告字符，蜂鸣
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
	printf("%d\n", len);//string length  结果为4    计算字符串长度的时候 \0 是结束标志，不算作字符串内容

	char arr1[] = "hehe";    //字符串的结束标志是一个 \0 的转义字符
	char arr2[] = {'h', 'e', 'h', 'e'};
	char arr3[] = { 'h', 'e', 'h', 'e','\0'};
	printf("%s\n", "hehe");//hehe
	printf("%s\n", arr1);//hehe
	printf("%s\n", arr2);//hehe烫烫烫烫hehe   没有‘\0’，所以打印完‘hehe’后并没有停止
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

//枚举常量
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
	printf("%d\n", SECRET);//2  值不能改（默认值）
	system("pause");
	return 0;
}
*/



/*
//#define 定义的标识符常量  
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
	//3;  3.14;  字面常量
    int num = 10;
	num = 20;
	printf("%d\n", num);//20
	//const int num = 10;//常变量具有常属性，不能被改，但它本质上是变量。   运行错误
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
		int a = 10;//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束
	}
	return 0;
}
*/



/*
//声明
extern int g_val;
 
int main() //一个工程只能有一个main函数
{
	printf("%d\n", g_val);
	system("pause");
	return 0;
}
*/



/*
int a = 100;//全局变量的作用域是整个工程
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
int a = 20;//全局变量   函数体外     代码块外 -{}
int main()
{
	int a = 10;//局部变量   函数体内   代码块内 -{}
	printf("a = %d\n", a);//10   当局部变量和全局变量同名的时候，局部变量优先使用
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
//每种类型的大小
int main()
{
	//char short int long ....    
	printf("%d\n", sizeof(char));//1  字节         1byte=8bit
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
	printf("age = %d\n", age);//Fn+F10   监视
	return 0;
	system("pause");
}
*/



/*
//主函数-程序的入口
 int main()
 {
 	//输出函数
 	printf("hehe\n");
 	printf("hehe\n");
 	printf("hehe\n");
 	printf("hehe\n");
 	printf("hehe\n");
    
	//暂停
 	system("pause");//system是一个库函数
 	return 0;
 }
*/
 