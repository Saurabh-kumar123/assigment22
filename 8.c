#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *ptr;
     ptr = (int*)malloc(sizeof(int));
     *ptr=10;
     printf("before free %d\n",*ptr);
     free(ptr);
     printf("after free %d",*ptr);
     return 0;
}
