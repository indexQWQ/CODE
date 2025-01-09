#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b)
{
    return *((float *)a)-*((float *)b);
}
int main() 
{
        int i=0,j=0;
        float arr[100]={0},sum=0.0f;
        while(scanf("%f",&arr[i++])!=EOF);
        qsort(arr,i-1,sizeof(float),cmp);
        for(j=1;j<i-2;j++)
        {
            sum+=arr[j];
        }
        printf("%.2f\n",sum/(i-3));
    return 0;
}