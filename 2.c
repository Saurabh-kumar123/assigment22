#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *arr,size,i,sum=0;
     float avg;
     printf("enter a size of array\n");
     scanf("%d",&size);
     arr=(int*)calloc(size,sizeof(int));
     if(arr==NULL)
     {
          printf("memory allocation failed");
          return 0;
     }
     printf("enter a %d element: ",size);
     for(i=0;i<size;i++)
          scanf("%d",arr+i);
     for(i=0;i<size;i++)
          sum = sum + *(arr+i);
          avg = sum / (size+0.0);
          printf("average is %f",avg);
          free(arr);
          return 0;

}
