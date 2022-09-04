#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,sum=0,size;
    printf("enter a size of arry\n");
    scanf("%d",&size);
    ptr = (int*)calloc(size,sizeof(int));
    printf("enter a %d element",size);
    for(int i=0;i<size;i++)
    scanf("%d",(ptr+i));
    for(int i=0;i<size;i++)
    sum=sum + *(ptr+i);
    printf("sum of arry is %d",sum);
    free(ptr);
    return 0;
}

