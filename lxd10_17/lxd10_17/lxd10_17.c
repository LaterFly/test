
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void print(int n){
//	if (n > 9)
//	print(n / 10);
//	printf("%d",n % 10);
//	
//   
//
//
//}
//int main(){
//	int n = 0;//递归
//	scanf("%d",&n);//print(123)printf(4)
//	print(n);      //print(12)printf(3)
//	return 0;       //
//}

//void test(int n){
//	if (n <= 10000)//栈溢出
//		test(n + 1);
//}
//int main(){
//	test(1);
//	return 0;
//}



#include<string.h>
//1.//int my_strlen(char *str){
//	int cout = 0;
//	while (*str!='\0')
//	{
//		cout++;
//		str++;
//
//	}
//	return cout;
//}
//2.
//int my_strlen(char *str){
//	if (*str!= '\0')
//		return 1+my_strlen(str+1);
//	else
//	
//		return 0;
//	
//}
//int main(){
//	char arr[] = "abcedf";
//	//printf("%d\n", strlen(arr));//打印字符串长度,传入首地址
//	printf("%d",my_strlen(arr));//传地址
//	return 0;
//}

//int fac(int n){
//	if (n <= 1)
//		return 1;
//	else
//		return n*fac(n - 1);//阶乘定义
//}
//
//int main(){
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = fac(n);
//	return 0;
//}
//1.int fib(int n){
	/*if (n > 2)
		return fib(n - 1) + fib(n - 2);
	else
		return 1;
}*/
//2.
int fib(int n){
	int i = 0;
	for (i = 2; i < n; i++){}
}
int main(){
	int n = 0; 
	int ret = 0;
	scanf("%d",&n);
	ret = fib(n);
	printf("%d",ret);
	return 0;
}