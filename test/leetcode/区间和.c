#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>
int main()
{
    int *array;
    int input=0,sum=0;
    scanf("%d",&input);
    array=(int *)calloc(sizeof(int),input);
    for(int i=0;i<input;i++)
    {
        int input=0;
        scanf("%d",&input);
        sum+=input;
        array[i]=sum;
    }
    for(int i=0;i<input;i++)
    { 
        printf("%d\n",array[i]);
    }
    int a=0,b=0;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a-1>=0)
        printf("%d\n",array[b]-array[a-1]);
        else
        printf("%d\n",array[b]);
    }
    free(array);
    array=NULL;
    return 0;
}