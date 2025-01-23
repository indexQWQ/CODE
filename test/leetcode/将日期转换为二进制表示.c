#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse(char *arr)
{
    int len=strlen(arr);
    char temp=*arr;
    *arr=*(arr+len-1);
    *(arr+len-1)='\0';
    if(len-1>1)
    {
        reverse(arr+1);
    }
    *(arr+len-1)=temp;
}
char* convertDateToBinary(char* date) 
{
    int year=0,month=0,day=0,i=0,j=0,z=0;
    char year1[20]={0},month1[10]={0},day1[10]={0},*all=(char *)calloc(40,1);
    sscanf(date,"%d-%d-%d",&year,&month,&day);
    while(year)
    {
        year1[i++]=year%2+'0';
        year/=2;
    }year1[i]='\0';
    reverse(year1);
    year1[i++]='-';
    year1[i]='\0';
    while(month)
    {
        month1[j++]=month%2+'0';
        month/=2;
    }month1[j]='\0';
    reverse(month1);
    month1[j++]='-';
    month1[j]='\0';
    while(day)
    {
        day1[z++]=day%2+'0';
        day/=2;
    }day1[z]='\0';
    reverse(day1);
    strcat(all,year1);
    strcat(all,month1);
    strcat(all,day1);
    return all;
}
int main()
{
    printf(convertDateToBinary("2080-02-29"));
    return 0;
}