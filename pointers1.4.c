#include <stdio.h>
int main()
{
int a=5;
	int b=10;
int k;
int* x;
	int* y;
x = &a;
y = &b;
printf("variable x is  %d \n", *x);
printf("variable y is %d \n", *y);
k = *x;
*x = *y;
*y = k;
printf("variable x is %d \n", *x);
printf("variable y is %d \n", *y);





return 0;





}
