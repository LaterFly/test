#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//操作符
//int main(){
	/*int a = 13;
	int b = a << 1;
	printf("%d\n", b);
	a = a << 1;
	printf("%d\n", a);*/
	//int a = 5 % 2.0;//err//整形
	//	//printf("%d\n", a);
	//return 0;
//}


	//int main()
	//{
	//	
	//	int a = -1;//负数
	//	//00000000000000000000000000000101
	//	//
	//	//
	//	//10000000000000000000000000000001 原
	//	//11111111111111111111111111111110 反
	//	//11111111111111111111111111111111
	//	a = a >> 1;
	//	printf("%d\n", a);
	//	//int a = 10;
	//	//int b = a>>1;//右移位
	//	//printf("%d\n", b);
	//
	//	//
	//	//00000000000000000000000000000110
	//	//
	//	//int b = a>>1;
	//	return 0;
	//}
	
	 //int main()
	 //{
	 //	//int b = a<<-3;
	 //	//a>>3;
	 //	int a = 2^4;//异或
	 //	//010
	 //	//100
	 //	//110
	 //	//
	 //	//1
	 //	//
	 //	printf("%d\n", a);
	 //	return 0;
	 //}


//-1
//11111111111111111111111111111111
//00000000000000000000000000000001//负数的二进制取位，算法
//
//
//
//
//1234
//



//void test(short n)
//{
//	//
//}
//int main()
//{
//	//printf("%d\n", !0);//操作符sizeof
//	//int a = 10;
//	//printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof(int));//4
//	short s = 4;
//	int a = 3;
//	printf("%d\n", sizeof(s=a+10));//2
//	test(s=a+10);
//	printf("%d\n", s);//4 
//	return 0;
//}


 //int main()
 //{
 //	int a = 0;
 //	//00000000000000000000000000000
 //	//11111111111111111111111111111补存
 //	//11111111111111111111111111110反
 //	//10000000000000000000000000001
 //	//
 //	printf("%d\n", ~a);//-1   //0的取反
 //	return 0;
 //}


 //int main()
 //{
 //	int a = 13;
 //	//00000000000000000000000000001101//13
 //	//00000000000000000000000000010000//任意位变1，按位或
 //	//00000000000000000000000000011101
 //	//11111111111111111111111111101111
 //	//00000000000000000000000000010000//
 //	return 0;
 //}

 //int main()
 //{
 //	int a = 10;
 //	//int b = ++a;
 //	int b = a++;
 //	printf("a = %d b = %d\n", a, b);
 //	return 0;
 //}


//int main()
//{
//	//int a = 1;
//	//int b = 2;
//	//a|b;//3
//	//a||b;//1
//	//a&b;//0
//	//a&&b;//0
//	/*char *p = "abcdef";
//
//	if("123456" == "122222222")//存入首字符地址
//	{
//
//	}*/
//	int a = (int)3.14;//强制转换
//	printf("%d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int num = 10;
//	int count = 0;//计数
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("二进制中1的个数 = %d\n", count);
//	return 0;
//}

//#include <stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)40
//	printf("%d\n", sizeof(ch));//(3)10
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0,a=1,b=2,c =3,d=4;//逻辑操作符
//	i = a++ && ++b && d++;//&&    1 3  4  》  2 3 3 5
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	//
//	return 0;
//}



 //int main()//下标操作符
 //{
 //	int arr[10] = {0};
 //	arr[5] = 5;
 //	return 0;
 //}


//struct Student
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//
////int/float
//int main()
//{
//	int num = 0;
//	struct Student s = {"lisi", 21, "20180202"};//初始化
//	struct Student* ps = &s;
//	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).id);
//	printf("%s %d %s\n", ps->name, ps->age, ps->id);
//
//// 	strcpy(s.name, "666");
//// 	s.age = 20;
//////s.id = "20180101";//不能如此赋值
//	strcpy(s.id, "20180101");
//// 	
//	printf("%s %d %s\n", s.name, s.age, s.id);
//	return 0;
//}


#include <stdio.h>
#include <string.h>



//
//int main()
//{
//// 	char c = 1;
//// 	printf("%d\n", sizeof(c));//1  
//// 	printf("%d\n", sizeof(+c));//4//参与运算则整形提升
//// 	printf("%d\n", sizeof(!c));//4
//	char a = 127;
//	char b = 3;
//	char c = a+b;
//
//	//00000000000000000000000001111111
//	//00000000000000000000000000000011
//	//
//	//00000000000000000000000001111111
//	//00000000000000000000000000000011
//	//00000000000000000000000010000010
//	//11111111111111111111111110000010//整形提升
//	//11111111111111111111111110000001
//	//10000000000000000000000001111110
//	//
//	printf("%d\n", c);//127 -1 -2 
//	return 0;
//}
//

//int main()
//{
//	char a = 0xb6;//10110110
//	//11111111111111111111111110110110
//	//整形提升
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if(a == 0xb6)
//		printf("a\n");
//	if(b == 0xb600)
//		printf("b\n");
//	if(c == 0xb6000000)
//		printf("c\n");
//	//int a = 10;
//	//int b = 20;
//	//int c = a+b+10;
//
//	return 0;
//}





//指针
int main()
{
//// 	printf("%d\n", sizeof(char*));//4
//// 	printf("%d\n", sizeof(short*));//4
//// 	printf("%d\n", sizeof(int*));//4
//// 	printf("%d\n", sizeof(long*));//4
//// 	printf("%d\n", sizeof(float*));//4
//// 	printf("%d\n", sizeof(double*));//4
//// 
	int a = 0x11223344;
 	//int *pa = &a;
 	char *pc = &a;
	*pc = 0;
 //	printf("%p\n", pa);
 	//printf("%p\n", pa+1);
	printf("--------------------\n"); //指针的类型决定了指针向前或者向后走一步有多大
 	printf("%p\n", pc);
 	printf("%p\n", pc+1);
//
//	//int arr[10] = {0};
//	//char *pa = arr;
//	//int i = 0;
//	//for(i=0; i<10; i++)
//	//{
//	//	*(pa+i) = i;
//	//}
//
//// 	int *pa = &a;
//// 	*pa = 0;
//// 
//// 	char *pa = (char*)&a;
//// 	*pa = 0;
//

	system("pause");
return 0;
}
//
//