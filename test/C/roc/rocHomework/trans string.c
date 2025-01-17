#include <stdio.h>
#include <string.h>

void trans(char *arr)
{
    
    int len=strlen(arr);
    char temp=*arr;
    *arr=*(arr+len-1);
    *(arr+len-1)='\0';
    if(len>1)
    {
        trans(arr+1);
    }
    *(arr+len-1)=temp;
}
int main()
{
    char arr[100]={0};
    gets(arr);
    trans(arr);
    printf("%s\n",arr);
    return 0;
}