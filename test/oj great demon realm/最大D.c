// long long caculate(long long sum,int len)
// {
//     if(len==1)
//     {
//         return sum;
//     }
//     if(sum==0)
//     {
//         return 0;
//     }
//     long long temp=sum;
//     long long reverse=0;
//     while(temp>0)
//     {
//         reverse=reverse*10+temp%10;
//         temp/=10;
//     }
//     if(reverse>sum)
//     {
//         return (sum%10)*pow(10,len-1)+caculate(sum/10,len-1);
//     }
//     else if(reverse<sum)
//     {
//         return (reverse%10)*pow(10,len-1)+caculate(reverse/10,len-1);
//     }
//     else
//     {
//         return (sum%10)*pow(10,len-1)+caculate(sum/10,len-1);
//     }
//     return 0;
// }
// int main()
// {
//     char arr[100]={0};
//     scanf("%s",arr);
//     int len=strlen(arr);
//     //printf("%d",len);
//     long long sum=0;
//     int count=0;
//     int i=0;
//     for(i=0;i<len;i++)
//     {
//         if(!isalpha(arr[i]))
//         {
//             sum=sum*10+(arr[i]-'0');
//             count++;
//         }
//     }
//     long long a=caculate(sum,count);
//     printf("%lld",a);
//     return 0;
// }



#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void caculate(char *arr1,char *arr2,int left,int right)
{
    int count=0;
    while(left<=right)
    {
        if(*(arr1+left)<*(arr1+right))
        {
            *(arr2+count)=*(arr1+right);
            count++;
            right--;
            continue;
        }
        else if(*(arr1+left)>*(arr1+right))
        {
            *(arr2+count)=*(arr1+left);
            count++;
            left++;
            continue;
        }
        else if(*(arr1+left)==*(arr1+right))
        {
            *(arr2+count)=*(arr1+right);
            break;
        }
    }
}
int main()
{
    char arr[100]={0};
    char arr1[100]={0};
    char arr2[100]={0};
    scanf("%s",arr);
    int len=strlen(arr);
    //printf("%d",len);
    int count=0;
    int i=0;
    for(i=0;i<len;i++)
    {
        if(!isalpha(arr[i]))
        {
            arr1[count]=arr[i];
            count++;
        }
    }
    if(count==0)
    {
        printf("0");
        return 0;
    }
    int left=0;
    int right=count-1;
    caculate(arr1,arr2,left,right);
    printf("%s",arr2);
    return 0;
}