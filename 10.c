#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,sum=0,size,min=0;
    printf("enter a size of arry\n");
    scanf("%d",&size);
    ptr = (int*)calloc(size,sizeof(int));
    printf("enter a %d element",size);
    for(int i=0;i<size;i++)
    scanf("%d",(ptr+i));
    sum = *(ptr+0);
    min = *(ptr+0);
    for(int i=0;i<size;i++)
    {
      if(sum < *(ptr+i))
      sum = *(ptr+i);
      if(min>*(ptr+i))
          min = *(ptr+i);
    }
    printf("largest values of %d\n",sum);
    printf("smalest values of %d\n",min);
    free(ptr);
    return 0;
}

