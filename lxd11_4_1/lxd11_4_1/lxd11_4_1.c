#define _CRT_SECURE_NO_WARNINGS 1
//ָ��Ľ���
//�����Ԫ�ض��壺������c���Ե����ñ������ͣ�Ҳ�ɷ������顢ָ���
//�����������Ϊ���������鿴��һά���飬�������鴫����ʱ������Ϊָ��
//ÿ�ε������γ�ջ֡������ʱ�ͷ�ջ֡����������ݣ�
//�ڴ�ռ䲼�֣�ջ�������Ƚ��������

#include<stdio.h>
#include<windows.h>
//char *q = NULL;
//char fun(int *a)// int a[] ,int a[10],
//{
//	printf("%d\n", sizeof(a));
////	char *s = "hello";
//char a[]="ads";//�ַ�������ջ֡

//	q =s;
//}
//int main(){
//	int a[10];
//	printf("%d\n", sizeof(a));
//	fun(a);
//	printf("%s\n", q);//����������ַ��������ַ�������
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


//������
//int main()
//{
//	char* pstr = "hello bit.";//�����ǰ�һ���ַ����ŵ�pstrָ������������ַ������ַ����������������ݲ���գ�������ֵ���ܸı�
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
//	if (str1 == str2)//�൱���������飬 ��ַ��ͬ
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


//����ָ��
//int main()
//{
//	int a[10];
//	int(*a)[10];//aΪ����ָ��,�������ȼ�
//	
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//�����������������ַ������ֵ��ͬ
//	printf("%p\n", &arr);//��������ĵ�ַ
//	return 0;
//}
//int main(){
//int arr[10] = { 0 };
//printf("arr = %p\n", arr);
//printf("&arr= %p\n", &arr);
//printf("arr+1 = %p\n", arr + 1);//�������ߺ��岻ͬ��ָ���һ��ָ����ָ�����ʹ�С
//printf("&arr+1= %p\n", &arr + 1);
//return 0;
//}


//int main(){
//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
////char arr[10];//˵�������ܴ�С�����Ϳ���
////int arr[8];
//int(*p)[10] =& arr;//������arr�ĵ�ַ��ֵ������ָ�����p
////��������һ���������д����
//return 0;
//}



//char *q = NULL;
////void myfun(int a[][5][3],int num)//���鴫�Σ����齵Ϊָ�롣������������Ϊ��һά����ָ�뽵Ϊ��ָ������
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




//����ָ��ʹ��
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
//	//������arr����ʾ��Ԫ�صĵ�ַ
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	print_arr2(arr, 3, 5);
//	return 0;
//}


//һά���鴫����
//void test(int arr[])//ok? ��
//{}
////void test(int arr[10])//ok?  ��
////{}
//////void test(int *arr)//ok?
//////{}
//void test2(int *arr[20])//ok?
//{}
//void test2(int **arr)//ok? �ԣ�ָ�����鴫������Ϊָ��ָ���ָ��
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}


//��ά���鴫����
//void test(int arr[3][5])//ok��
//{}
//void test(int arr[][])//ok����
//{}
//void test(int arr[][5])//ok��
//{}
//�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
//�����ŷ������㡣
//void test(int *arr)//ok������
//{}
//void test(int* arr[5])//ok����
//{}
//void test(int(*arr)[5])//ok����
//{}
//void test(int **arr)//ok���ԣ�ָ�����鴫������Ϊָ��ָ���ָ��
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//һ��ָ�봫����
//void print(int *p, int sz)//ָ�����Ҳ�Ǳ�����������ʱ��ָ��Ҳ���γ���ʱ����
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
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}

//����ָ��
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



//����������:�������ǣ�1.����2.�ռ�3.����
//1>�ÿռ�<->��ֵ
//2>�ÿռ�����<->��ֵ
//3>ָ������þ���Ŀ�����






