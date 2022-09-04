#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0,j=1;
    char *str,c;
    str=(char*)malloc(sizeof(char));
    printf("enter a string\n");
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
       str = (char*) realloc(str,j*sizeof(char));
       str[i]=c;
       i++;
    }
    str[i]='\0';
    printf("my string is %s",str);
    free(str);
    return 0;
}
