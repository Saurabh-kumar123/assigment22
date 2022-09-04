#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *ptr,size;
     printf("enter a size of memory allocation\n");
     scanf("%d",&size);
     ptr = (int*)calloc(size,sizeof(int));
     if(ptr==NULL)
     {
     printf("memory allocation failed..????");
     return 0;
     }
     printf("enter a %d element\n",size);
     for(int i=0;i<size;i++)
          scanf("%d",(ptr+i));
     for(int i=0;i<size;i++)
          printf("%d ",*(ptr+i));
          free(ptr);
          return 0;
}
