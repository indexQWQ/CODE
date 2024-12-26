#include <stdio.h>
#include <string.h>
#include <ctype.h>
int convert(const char *num)
{
    int len=strlen(num);
    int sum=0;
    int j=0;
    while(j<len)
    {
            sum=sum*10+(num[j++]-'0');
    }
    return sum;
}
void input_to_nums(char *input,char (*nums)[100],int *i)
{
    char copy[100]={0};
    strcpy(copy,input);
    strcpy(nums[(*i)++],strtok(copy,"+-*/="));
    (*i)++;
    char *pu=NULL;
    while((pu=strtok(NULL,"+-*/="))!=NULL)
    {
        strcpy(nums[(*i)++],pu);
        (*i)++;
    }
    int j=0;
    for(j=1;j<*i;j+=2)
    {
        while(*input>='0' && *input<='9')input++;
        nums[j][0]=*input++;
    }
}
void caculate(char (*nums)[100],int *len)
{

}
int main()
{
    char input[100]={0};
    char nums[100][100]={0};
    scanf("%s",input);
    int i=0;
    input_to_nums(input,nums,&i);
    caculate(nums,&i);
    int j=0;
    for(j=0;j<i;j++)
    {
        puts(nums[j]);
    }
    return 0;  
}