#define _CRT_SECURE_NO_WARNINGS 1
//����
#include<stdio.h>
#include<string.h>

//int main(){
//	//printf("%c\n",tolower('A'));//�Զ��庯������дתСд
//	//printf("%c\n", tolower('B'));
//	//char arr[] = "hello you";
//	////char arr1[] = {'b','i','t'};
//	//char arr2[20] = {0};
// //   strcpy(arr2,arr);//�Զ��庯�����ַ�������
//	//printf("%s\n",arr2);
//	//char arr[] = "you you";
//	//memset(arr,'a',4);
//	//printf("%s\n", arr);//ע��۲�MSDN
//	return 0;
//}


//int get_max(int x,int y){
//	return(x>y?x:y);
//}
//
//int  main(){
//	int a = 10;
//	int b = 20;
//	//int max = get_max(a,b);
//	////int max = get_max(get_max(3, 5), get_max(6, 10));
//	//printf("%d\n",max);
//	return 0;
//}

//
//void swap(int *x,int *y)//�βε���ʱ���ٿռ䣬���ú����١�//��ʵ�δ����βε�ʱ��, �β���ʵ�ε�һ����ʱ����
 //{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//swap(a,b);//��ֵ���ã�ʵ�Σ����βε��޸Ĳ���ı�ʵ��
//	//printf("a = %d b = %d\n", a, b);
//	swap(&a,&b);//��ַ����
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}

//��ϰ1.����
//#include<math.h>
//int is_prime(int n){
//	int i = 0;
//	for (i = 2; i <= sqrt(n);i++){
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main(){
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200;i++){
//		if (is_prime(i)==1){
//			count++;
//			printf("%d\n",i);
//		}
//	}
//	return 0;
//
//}



//2.�����ж�
//int leap_year(int year){
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//int main(){
//	int year = 0;
//	for (year = 1000; year <= 2000;year++){
//		if (leap_year(year)){
//		
//			printf("%d\n",year);
//		}
//	
//	}
//	return 0;
//}

//3 ���ֲ���
//int binary_search(int arr[], int key,int  left,int  right){
//	
//	while (left<=right)
//	{
//		int mid = left + (right-left) / 2;
//		if (arr[mid] > key){
//			right = mid - 1;
//		}
//		if (arr[mid] < key){
//			left= mid - 1;
//		}
//		else{
//		
//			return mid;
//		}
//
//	}
//	return -1;
//
//}
//int main(){
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 7;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = 0;
//	ret = binary_search(arr, key, left, right);
//	if (ret==-1){
//	
//		printf("�Ҳ���\n");
//	}
//	else{
//		printf("�ҵ�%d\n",ret);
//
//	}
//	return 0;
//}


//4.
//void intc(int *num){
//	(*num)++;
//}
//int main(){
//	int num = 0;
//	intc(&num);
//	printf("%d\n",num);
//	intc(&num);
//	printf("%d\n", num); 
//	intc(&num);
//	printf("%d\n", num);
//	return 0;
//}


//����Ƕ�׵�������ʽ����
//int main(){
//	/*int len = 0;
//	len = strlen("abcdef");*/
//	//printf("%d\n", strlen("abcdef"));
//
//	char arr1[20] = {0};
//	char arr2[] = "abcdef";
//	printf("%s\n", strcpy(arr1, arr2));
//	printf("%d\n", strlen(strcpy(arr1, arr2)));
//
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//�ݹ�
//1.��ӡÿһλ
//void print(int n){
//	if (n > 9)
//		print(n/10);
//	 printf("%d ",n%10);
//}
//int main(){
//	int n = 0;
//	scanf("%d",&n);
//	print(n);
//
//	return 0;
//}

//void print(int n)
//{
//	if(n>9)
//		print(n/10);
//	printf("%d ", n%10);
//}


//
//int main()
//{
//	//n=1234
//	//1 2 3 4
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	//
//	//print(1234)
//	//print(123) printf(4)
//	//print(12) printf(3) printf(4)
//	//print(1) printf(2) printf(3) printf(4)
//	//
//	return 0;
//}

//2.���ַ�������
//int my_strlen(char* str){
//	if (*str != '\0'){
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//
//}
//int main(){
//	char arr[] = "abcdef";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}


//3.


//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if(n<=2)
//		return 1;
//	else
//	{
//		int i = 0;
//		for(i=0; i<n-2; i++)
//		{
//			c = a+b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//
//int fib(int n){
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//	for (i = 0; i < n - 2; i++){
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	//1 1 2 3 5 8 13 21 34 55 ...
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

