#define _CRT_SECURE_NO_WARNINGS 1
//指针的进阶
//数组的元素定义：不仅是c语言的内置变量类型，也可放置数组、指针等
//所有数组理解为：所有数组看作一维数组，所以数组传参数时，它降为指针
//每次调函数形成栈帧，返回时释放栈帧（不清空数据）
//内存空间布局：栈中数据先进后出（）

#include<stdio.h>
#include<windows.h>
//char *q = NULL;
//char fun(int *a)// int a[] ,int a[10],
//{
//	printf("%d\n", sizeof(a));
////	char *s = "hello";
//char a[]="ads";//字符串放于栈帧

//	q =s;
//}
//int main(){
//	int a[10];
//	printf("%d\n", sizeof(a));
//	fun(a);
//	printf("%s\n", q);//函数调完后字符串还在字符常量区
//	system("pause");
//
//	return 0;
//}

//
//int main()
//{
//	char ch = 'w';
//	char *pc = &ch;
//	*pc = 'w';
//	return 0;
//}


//数组名
//int main()
//{
//	char* pstr = "hello bit.";//这里是把一个字符串放到pstr指针变量里了吗？字符串在字符常量区。所以数据不清空，且它的值不能改变
//	printf("%s\n", pstr);
//
//	system("pause");
//	return 0;
//}


//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//	if (str1 == str2)//相当于两个数组， 地址不同
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//数组指针
//int main()
//{
//	int a[10];
//	int(*a)[10];//a为数组指针,关心优先级
//	
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//数组名和整个数组地址两者数值相同
//	printf("%p\n", &arr);//整个数组的地址
//	return 0;
//}
//int main(){
//int arr[10] = { 0 };
//printf("arr = %p\n", arr);
//printf("&arr= %p\n", &arr);
//printf("arr+1 = %p\n", arr + 1);//表明两者含义不同，指针加一表指针所指向类型大小
//printf("&arr+1= %p\n", &arr + 1);
//return 0;
//}


//int main(){
//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
////char arr[10];//说明数组受大小和类型控制
////int arr[8];
//int(*p)[10] =& arr;//把数组arr的地址赋值给数组指针变量p
////但是我们一般很少这样写代码
//return 0;
//}



//char *q = NULL;
////void myfun(int a[][5][3],int num)//数组传参，数组降为指针。且所有数组认为是一维，故指针降为所指向类型
//void myfun(int (*a)[5][3],int num)
//{
//	//printf("fun:%d]\n",sizeof(a));
//}
//int main(){
//	int arr[10][5][3];
//	int num = sizeof(arr) / sizeof(arr[0]);
//	myfun(arr,num);
//	system("pause");
//    return 0;
//}




//数组指针使用
//void print_arr1(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<row; i++)
//	{
//		for
//		
//			(j = 0; j<col; j++)
//			
//			
//			
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		for (j = 0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print_arr1(arr, 3, 5);
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr, 3, 5);
//	return 0;
//}


//一维数组传参数
//void test(int arr[])//ok? 对
//{}
////void test(int arr[10])//ok?  对
////{}
//////void test(int *arr)//ok?
//////{}
//void test2(int *arr[20])//ok?
//{}
//void test2(int **arr)//ok? 对，指针数组传参数降为指向指针的指针
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//二维数组传参数
//void test(int arr[3][5])//ok？
//{}
//void test(int arr[][])//ok？错
//{}
//void test(int arr[][5])//ok？
//{}
//总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
//这样才方便运算。
//void test(int *arr)//ok？不推
//{}
//void test(int* arr[5])//ok？错
//{}
//void test(int(*arr)[5])//ok？√
//{}
//void test(int **arr)//ok？对，指针数组传参数降为指向指针的指针
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//一级指针传参数
//void print(int *p, int sz)//指针变量也是变量，传参数时，指针也会形成临时变量
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}

//二级指针
//void test(char **p)
//{
//
//}
//int main()
//{
//	char c = 'b';
//	char*pc = &c;
//	char**ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//Ok?
//	return 0;
//}



//解引用问题:变量考虑：1.类型2.空间3.内容
//1>用空间<->左值
//2>用空间内容<->右值
//3>指针解引用就是目标对象






