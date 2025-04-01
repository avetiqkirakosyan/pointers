#include <stdio.h>
int main()
{
int a=0;
int* z;
z = &a;
printf("%p \n", z);
printf("%p \n", &a);
return 0;

}
