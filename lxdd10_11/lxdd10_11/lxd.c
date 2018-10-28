#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int put(int x, int y){
//	if (x < y){ return y; }
//	else
//		return x;
//}
//int main(){
//	int a = 5;
//	int b = 9;
//	int max = 0;
//	max = put(a,b);
//	printf("%d\n",max);
//	return 0;
//}
//void swap(int x, int y){
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//void Swa(int *x,int *y){
//	int temp = 0;
//	 temp = *x;
//	 *x = *y;
//	*y = temp;
//
//}
//int main(){
//	int a = 5;
//	int b = 9;
//	swap(a,b);
//    printf("%d %d \n",a,b );
//	Swa(&a, &b);
//	printf("%d %d \n", a, b);
//	return 0;
//}
int search(int arr[],int key,int left,int right){

	while (left<=right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid]<key){
			left = mid+1;
		}
		 if (arr[mid]>key)
		{ right = mid-1; }
		else 
		 return mid; 
	}
	return -1;
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 9;
	int ret = search(arr,key,left,right);
	if (ret==-1){
		printf("√ª’“µΩ\n");
	}
	else
		printf("’“µΩ %d\n" ,ret);

	return 0;
}