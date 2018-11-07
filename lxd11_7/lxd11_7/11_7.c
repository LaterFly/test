#define _CRT_SECURE_NO_WARNINGS 1
//10_14_2 数组

//1 实现一个函数，可以左旋字符串中的k个字符。
//#include<stdio.h>
//void change_arr(char *pstr,int k,int sz ){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < k; i++){
//		char tep = pstr[0];
//		for (j = 0; j < sz - 1;j++){
//			pstr[j] = pstr[j + 1];
//		}
//		pstr[sz-1] = tep;
//	}
//	
//}
//int main(){
//	char arr[] = "abcd";
//	int k = 0;
//	
//	int sz = strlen(arr);
//	scanf("%d \n",&k);
//	change_arr(arr,k,sz);
//	printf("%s\n",arr);
//
//	return 0;
//}

//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。//每次旋转一个字符 
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int revovle(char *str1, char *str2)
//{
//	int len = strlen(str1);
//	int i, j;
//	char temp;
//	for (i = 0; i<len; i++)
//	{
//		temp = str1[0];
//		for (j = 0; j<len - 1; j++)
//		{
//			str1[j] = str1[j + 1];
//		}
//		str1[len - 1] = temp;
//		if (strcmp(str1, str2) == 0)
//		{
//			printf("是旋转字符！\n");
//			return 0;
//		}
//	}
//	printf("不是旋转字符！\n");
//	return 0;
//}
//int main()
//{
//	char a[] = "abcdef";
//	char b[] = "bcdefa";
//	revovle(a, b);
//	system("pause");
//	return 0;
//}


//数组
#include<stdio.h>
//int main(){
//	//int n = 5;
//	//int arr[n] = {1,2,3,4,5};//大小为常量值
//	char arr[] = { 'b', 'i', 't' };
//	char  arr1[] = "bit";
//	printf("%s\n",arr);
//	printf("%s\n", arr1);
//	printf("%d\n",strlen(arr));
//	printf("%d\n", strlen(arr1));
//
//	return 0;
//}


//int main(){
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10;i++){
//		arr[i] = i;
//		printf("%d\n",arr[i]);
//	}
//	return 0;
//}
#include<windows.h>
//int main(){
//	int  arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	/*for (i = 0; i < sz;i++){
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}*/
//	for (i = 0; i < sz;i++){
//	
//		printf("%d ",*(arr+i));
//		printf("%d ",arr[i]);
//	}
//	system("pause");
//	return 0;
//}


//int main(){
//	int arr1[3][5] = { {1},{2}, {3} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		for (j = 0; j < sizeof(arr1[0]) / sizeof(arr1[0][0]);j++){
//			printf("%d ",arr1[i][j] );
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(){
//	int  arr[3][5] = { {1}, {2}, {3} };
//	int *p = &arr[0][0];
//	int i = 0; 
//	int j = 0;
//	for (i = 0; i < 3;i++){
//		for (j = 0; j < 5;j++){
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//	}
//	printf("\n"); 
//	printf("\n");
//	for (i = 0; i < 15; i++){
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}


void bubble_sort(int arr[], int sz){
	int i = 0;
	for (i = 0; i < sz - 1;i++){
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++){
			if (arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		
		}
		/*if (flag == 0)
		{
			break;
		}*/
	}
}
void print(int arr[],int sz){
	int i = 0;
	for (i = 0; i < sz;i++){
		printf("%d ",arr[i]);
	}

}
int main(){
	int arr[] = {9,8,7,4,5,6,1,2,3,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	print(arr,sz);

	return 0;
}