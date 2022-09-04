#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,sum=0,size;
    printf("how many number are sum \n");
    scanf("%d",&size);
    ptr = (int*)malloc(size*sizeof(int));
    printf("enter a %d number",size);
    for(int i=0;i<size;i++)
    scanf("%d",(ptr+i));
    for(int i=0;i<size;i++)
    sum=sum + *(ptr+i);
    printf("sum of all number is %d",sum);
    free(ptr);
    return 0;
}
