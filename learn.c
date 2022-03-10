#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
////变量的作用域和生命周期
////作用域
////局部变量的作用域：变量所在的局部范围(大括号内)
////全局变量的作用域：整个工程
//int g_val = 2022;//全局变量
////执行性代码(printf())在main函数内
//int main()
//{
//	printf("1：%d\n", g_val);
//	{
//		printf("2：%d\n", g_val);
//		int a = 10;
//	    printf("a = %d\n", a);
//	}
//	printf("3：%d\n", g_val);
//	return 0;
//}


////不同源文件下使用全局变量要声明
//extern int g_val;//告诉机器存在这个变量 让机器找
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

////生命周期
////变量的创建和销毁之间的时间段
////局部变量的生命周期：进入局部范围（大括号内）生命开始 出局部范围生命结束
////全局变量的生命周期：程序的生命周期
//
//
//int main()
//{
//	{
//		int a = 10;
//		printf("% d\n", a);
//	}
//	//括号内为生命周期
//	return 0;
//}


////常量的分类
//
//#define MAX 10000
//
//int main()
//{
//	//1.字面常量
//	
//	//3.14;
//	//10;
//	//'a';
//	//"abcdef";
//
//	//2.const 修饰的常变量
//	//const int num = 10;//num 即为常变量 - 常属性（不能被改变的属性）与变量属性
//	//num = 20;
//		//printf("%d\n", num);
//
//		//证明常变量为变量
//		//int arr[10] = { 0 };
//
//		//const int n = 10;
//		//int arr2[n] = { 0 };//创建数组n需为常量(即使加了常属性 仍为变量) 无法执行
//
//	//3.#define 定义的标识符常量
//	//MAX = 20000;//error
//
//	//int n = MAX;
//	//printf("%d\n", MAX);
//
//	return 0;
//}


////4.枚举常量
////可以一一列举的常量
//
////性别
//enum Sex //enum 枚举定义
//{
//	//这种枚举类型的可能取值
//	//枚举常量
//	MALE = 3,//赋初值
//    FEMALE,
//    SECRET
//
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);//0				
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	//依次按顺序输入 如3 4 5
//
//	
//	return 0;
//}

////第三部分 字符串与转义字符
////字符串就是一串字符 - 用双引号括起来的字符
////"abcedf";
////"hello";
//int main()
//{
//	//字符数组 - 数组是一组相同类型的元素
//	//char arr[] = "hello";//字符串的结尾隐藏一个\0
//	char arr1[] = "abc";//实际内容 abc\0 (\0为结束标志)
//	char arr2[] = {'a', 'b', 'c'};//实际内容 abc （无结束标志） 出现乱码 (可添加’0‘作为结束标志)
//
//	//求字符串长度
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值，因为无0终止符
//
//	int len = strlen("abc");//string length
//	printf("%d\n", len);
//
//	// \0为结束标志，计算长度时不包含
//
//
//	//打印字符串
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}

