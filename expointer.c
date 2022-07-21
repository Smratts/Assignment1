#include<stdio.h>
int main()
{
int a = 10;
int *ptr = &a;
printf("Address of ptr : %p\n",ptr);
printf("Value at ptr   : %d\n",*ptr);
return 0;
}

/*out put :
 Address of ptr : 0x7ffea6174e5c
Value at ptr   : 10
*/
