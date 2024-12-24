
// int main()
// {
//     char word[28]=
//     {'0','A','B','C','D','E','F','G',
//         'H','I','J','K','L','M','N',
//         'O','P','Q','R','S','T','U',
//         'V','W','X','Y','Z'};
//     char copy[4]={0};
//     int n=0;
//     char a=0;
//     scanf("%d ",&n);
//     scanf("%c",&a);
//     int num=caculate(n,word,a);
//     int count1=0;
//     if(n/27>0)
//     {
//         int count=0;
//         while(n)
//         {
//             if(n<27)
//             {
//                 copy[count++]=word[n];
//             }
//             else
//             {
//                 copy[count++]=word[n%27];
//                 if(word[n%27]==a)
//                 {
//                     count1++;
//                 }
//             }
//             n/=27;
//         }
//         copy[count]='\0';
//     }
//     else
//     {
//         printf("%c\n%d\n",word[n],1);
//     }
//     reverse(copy);
//     printf("%s\n%d\n",copy,num);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
void reverse(char *arr)
{
    int len=strlen(arr);
    char temp=*arr;
    *arr=*(arr+len-1);
    *(arr+len-1)='\0';
    if(len>2)
    {
        reverse(arr+1);
    }
    *(arr+len-1)=temp;
}
void arr(int n,char *copy)
{
    char word[28]=
    {'0','A','B','C','D','E','F','G',
        'H','I','J','K','L','M','N',
        'O','P','Q','R','S','T','U',
        'V','W','X','Y','Z'};
    int count=0;
    if(n/27>0)
    {
        while(n)
        {
            if(n<27)
            {
                copy[count++]=word[n];
            }
            else
            {
                copy[count++]=word[n%27];
            }
            n/=27;
        }
        copy[count]='\0';
    }
    else
    {
        copy[count++]=word[n];
        copy[count]='\0';
    }
    reverse(copy);
}

int caculate(char *arr,char *alph)
{
    int count=0;
    while(*arr!='\0')
    {
        if(*arr==*alph)
        {
            count++;
        }
        arr++;
    }
    return count;
}
int main()
{
    int input=0;
    char alph[2]={0};
    char word[20000][4]={0};
    scanf("%d ",&input);
    scanf("%c",&alph[0]);
    int i=0;
    int sum=0;
    for(i=1;i<=input;i++)
    {
        arr(i,word[i]);
        sum+=caculate(word[i],alph);
        //printf("%s\n",word[i]);
    }
    printf("%s\n%d\n",word[input],sum);
    return 0;
}