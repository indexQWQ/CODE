#include <stdio.h>
#include <string.h>
#include <ctype.h>
void input_to_nums(char *input,char *nums,float *num,int *i)
{
    while(*input!='\0')
    {
        int sum=0;
        while((*input-'0')>=0 && (*input-'0')<=9)
        {
            sum=sum*10+(*input-'0');
            input++;
        }
        num[(*i)]=sum;
        nums[(*i)++]=*input++;
    }
    nums[(*i)-1]='=';
}
void asad(char *nums,float *num,int *len,char c)
{
    int i=0;
    for(i=0;i<*len;i++)
    {
        if(nums[i]==c)
        {
            if(c=='*')
                num[i]=num[i]*num[i+1];
            else if(c=='/')
                num[i]=num[i]/num[i+1];
            int j=0;
            for(j=i+1;j+1<*len;j++)
            {
                num[j]=num[j+1];
            }
            for(j=i;j+1<*len;j++)
            {
                nums[j]=nums[j+1];
            }
            (*len)--;
            i--;
        }
    }
}
void sub_add(char *nums,float *num,int *len)
{
    int i=0;
    for(i=0;i<*len;i++)
    {
        if(nums[i]=='-')
            num[i]=num[i]-num[i+1];
        else if(nums[i]=='+')
            num[i]=num[i]+num[i+1];
        int j=0;
        for(j=i+1;j+1<*len;j++)
        {
            num[j]=num[j+1];
        }
        for(j=i;j+1<*len;j++)
        {
            nums[j]=nums[j+1];
        }
        (*len)--;
        i--;
    }
}
void caculate(char *nums,float *num,int *len)
{
    asad(nums,num,len,'/');
    asad(nums,num,len,'*');  
    sub_add(nums,num,len);
}

int main()
{
    char input[100]={0};
    float num[100]={0};
    char nums[100]={0};
    scanf("%s",input);
    int i=0;
    input_to_nums(input,nums,num,&i);
    caculate(nums,num,&i);
    // int j=0;
    // for(j=0;j<i;j++)
    // {
    //     printf("%d %c\n",num[j],nums[j]);
    // }
    if(num[0]==num[1])
    {
        printf("Correct\n");
    }
    else
    {
        printf("Wrong\n%.0f\n",num[0]);
    }
    return 0;  
}