#define _CRT_SECURE_NO_WARNINGS 1
//进阶   数据在内存中的存储
//指针 ，数组， 结构体是自定义数据类型
//void也是类型， 但无法定义变量 ，其定义空间大小为0
//32位平台上指针大小固定为4字节，指针就是地址，指针变量是变量
//数据内置类型有以下
//char        //字符数据类型  1字节
//short       //短整型
//int         //整形       4字节
//long        //长整型     4字节
//long long   //更长的整形 8字节
//float       //单精度浮点数
#include<stdio.h>
#include<windows.h>
//fun(){
//返回值可省略，此时默认为整型
	//return 0;
//}
//int main(){
//
//	//int x = fun();
//	//void x;//void 不能定义变量，其空间大小为0
//	//void *x; //可接收任何4字节的类型
//	system("pause");
//	return 0;
//}
//


//整型  char short  int  long
//数据存放整型时，按二进制补码存。
//int main(){
//	int b = -10;//数据有高低位，内存有高低地址（以字节为单位）
//	            //取数据时，先看类型，再操作
//	int  a = 10;//比较大小端存储
//	system("pause");
//    return 0;
//}



//有符号char 类型（-128~127）为何-128为下限
//-128
//1 1000 0000寄存器为9位，取出时发生截取
 /* 1 0111 1111 +1
  1 0000 0000
*/
//int check_sys()
//{
//	int i = 1;
//	return (*(char *)&i);//强制类型转换，变量取地址，取最低位字节地址
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//练习
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;//写入时都为（-1的二进制序列1000 0001，不考虑变量类型）
//	printf("a=%d,b=%d,c=%d", a, b, c);//取出考虑变量类型，整型提升。char->int（添加bit位，根据该变量原生类型提升）//   return 0;
//}


//int main()
//{
//	char a = -128;     //a 1000 0000 存储补码
//	printf("%u\n", a);  //%u无符号整数 4字节.提升后为：1111。。。。1000 0000
//	return 0;
//}


//int main()
//{
//	char a = 128;//发生越界（-128~127）,
//	printf("%u\n", a);
//	return 0;
//}
//int main(){
//	int i = -20;           //计算不考虑类型
//	unsigned j = 10;//i：原码1000~ 0001 0100
//	printf("%d\n", i + j);//j:原码 0000~ 0000 1010
//
//	return 0;  //i+j读取方式 1111~1111 0110->int ( -10)
//	system("pause");
//}


//int main(){
//unsigned int i;//无符号整数始终大于零
//for (i = 9; i >= 0; i--)//考虑i为负数后，从全1每次减一变化到0
//{
//	printf("%u\n", i);
//	Sleep(500);
//}
//return 0;
//}



//int main()
//{
//	char a[1000];//char(-128~127)
//	int i;
//	for (i = 0; i<300; i++)
//	{
//		a[i] = -1 - i;//考虑临界—129  补码 1 0111 1111->char 发生截断后8位 0111 1111 此时取为int变为正数127
//	}                  //130 补码  0111 1110->char截断后，int读为126
//	printf("%d", strlen(a));
//	return 0;
//}

//int main(){
//short num = 32767;
//short int a = num + 1;
//printf("%d\n", a);
////0111 1111 1111 1111 +1->1000 0000 0000 0000->int 发生整型提升
////
//return 0;
//}



//
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello wolrd\n");
//	}
//	return 0;
//}


//浮点数转换
//int main(){
//	int x = 9;
//	float *f = (float*)&x;//强制类型转换
//	printf("int :%d\n",x);
//	printf("float:%d\n",*f);
//
//	return 0;
//}
//浮点数存储：对S,M,E的科学存储，（存+127，取—127）
//浮点数不能和0直接比较，因为它是从正数到负数无限趋于0的范围
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;//强制类型转换
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}
//0000 0000 0000 0000 0000 0000 0000 1001<-浮点数读法
//9.0->1001.0 ->0100 0001 0001 0000 0000 0000 0000 1001