#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//// 	printf("%d\n", sizeof(char*));//4
//// 	printf("%d\n", sizeof(short*));//4
//// 	printf("%d\n", sizeof(int*));//4
//// 	printf("%d\n", sizeof(long*));//4
//// 	printf("%d\n", sizeof(float*));//4
//// 	printf("%d\n", sizeof(double*));//4
//// 
////	int a = 0x11223344;
//// 	int *pa = &a;
//// 	char *pc = &a;
//// 	printf("%p\n", pa);
//// 	printf("%p\n", pa+1);
//// 	printf("--------------------\n");//ָ������;�����ָ����ǰ���������һ���ж�󣨾��룩
//// 	printf("%p\n", pc);
//// 	printf("%p\n", pc+1);
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
//// 	*pa = 0;//ָ������;����ˣ���ָ������õ�ʱ���ж���Ȩ�ޣ��ܲ��������ֽڣ��� ���磺 char* ��ָ������þ�ֻ�ܷ���һ���ֽڣ��� int* ��ָ��Ľ����þ��ܷ����ĸ��ֽڡ�
//
//	return 0;
//}
//


//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n", arr);    //��Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);    //��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//4
//	printf("---------------\n");
//	printf("%p\n", &arr[0]);//��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]+1);//��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*&arr[0]));//4
//
//	printf("---------------\n");
//	printf("%p\n", &arr);   //����ĵ�ַ
//	printf("%p\n", &arr+1);   //����ĵ�ַ����Ԫ�ص�ַ���Ͳ�ͬ
//	printf("%d\n", sizeof(*&arr));//
//	return 0;
//}

 //int main()//ָ������
 //{
 //	//int arr[10] = {0};
 //	//int *p = arr;
 //	int arr[10] = {0};
 //	char arr2[5] = {0};
 //	//printf("%d\n", &arr2[1]-&arr[3]);//����ָ�����ָ����ͬ�ռ�
 //
 //	//printf("%d\n", &arr[0]-&arr[9]);//10 9 40 36 
 //}
 


//
//int my_strlen1(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen2(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen2(str + 1);
//}
//
//int my_strlen(char* str)
//{
//	char *start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char *p = "abcdef";
//	int len = my_strlen(p);
//	printf("%d\n", len);
//
//	return 0;
//}




 
 //int main()
 //{
 //	int arr[10] = {0};
 //	arr;//������Ԫ�صĵ�ַ
 //
 //	printf("%d\n", sizeof(arr));//���������������1,sizeof(������),��������ʾ��������
 //	sizeof(&arr);//2, ����������������
 //
 //	//&arr[0];
 //	//&arr;
 //	return 0;
 //}


 //int main()
 //{
 //	int arr[10] = {0};
 //	//arr[i]
 //	int* p = arr;
 //	int i = 0;
 //	int sz = sizeof(arr)/sizeof(arr[0]);
 //	for(i=0; i<sz; i++)
 //	{
 //		*(p+i) = i;//ȡ��ַ
 //	}
 //	for(i=0; i<sz; i++)
 //	{
 //		//printf("%d ", *(p+i));
 //		printf("%d ", p[i]);
 //
 //	}
 //	return 0;
 //}


// int main()
// {
// 	int a = 10;
// 	int* p = &a;
// 	int** pp = &p;//����ָ��
// 	int*** ppp = &pp;
// 	
// 	return 0;
// }


//
//void print(char *ch[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%s\n", ch[i]);
//	}
//}
//void print(char **ch, int sz)//����ָ��
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%s\n", *(ch+i));
//	}
//}
//int main()
//{
//	//int arr[10];
//	//char ch[5];
//	//ָ������
//	//int* arr[5];
//	char* ch[3] = {"abcdef", "zhangsan", "lisi"};//����ַ����׵�ַ
//	int i = 0;
//	int sz = sizeof(ch)/sizeof(ch[0]);
//	print(ch, sz);
//	//for(i=0; i<sz; i++)
//	//{
//	//	printf("%s\n", ch[i]);//��ӡ�ַ���
//	//}
//	return 0;
//}


//int main()
//{
//	int arr1[] = {1,2,3,4};
//	int arr2[] = {2,3,4,5};
//	int arr3[] = {3,4,5,6};
//	//ָ������
//	int* arr[3] = {arr1, arr2, arr3};
//	
//	int i = 0;
//	int j = 0;
//	for(i=0; i<3; i++)
//	{
//		for(j=0; j<4; j++)
//		{
//			printf("%d ", arr[i][j]);//���Ƕ�ά����
//			//�൱��*(*(arr+i)+j)
//		}
//		printf("\n");
//	}
//	return 0;
//}




//�ṹ��

//typedef struct Stu//�ṹ������
//{
//	char name[20];
//	short int age;
//	char sex[5];
//}Stu;
//
//int main()
//{
//	Stu s = {"zhangsan", 20, "��"};
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	strcpy(s.name, "lisi");//�����ַ���
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	return 0;
//}




//
//struct S
//{
//	char arr[1000];
//	int num;
//};
//void print1(struct S ss)
//{
//	printf("%s %d\n", ss.arr, ss.num);
//}
//
//void print2(struct S* ps)
//{
//	printf("%s %d\n", ps->arr, ps->num);//ָ�������
//}
//
//int main()
//{
//	struct S s = {"bit", 100};
//	
//	print1(s);
//	print2(&s);//
//
//	return 0;
//}