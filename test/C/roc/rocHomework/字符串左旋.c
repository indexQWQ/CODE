#include <stdio.h>
// abcd左旋一个字符串变成bcda
// abcd左旋二个字符串变成cdab
#include <assert.h>
#include <string.h>
// char *left_revolve(char *p,int num)
// {
//     //assert(p);
//     char *ret=p;
//     int len=strlen(p);
//     num%=len;
//     while(num--)
//     {
//         p=ret;
//         char tem=*p;
//         while(*p)
//         {
//             if(*(p+1))
//             {
//                 //char temp=*p;
//                 *p=*(p+1);
//                 //*(p+1)=temp;
//             }
//             p++; 
//         }
//         p--;
//         *p=tem;
//     }
//     return ret;
// }
// void test()
// {
//     char arr[100];
//     gets(arr);
//     left_revolve(arr,2);
//     puts(arr);
// }
// void test2()
// {
//     char arr[100];
//     gets(arr);
//     puts(left_revolve(arr,2));
// }
// int main()
// {
//     test();
//     //test2();
//     return 0;
// }

// 也有一种思路
// 如as dfg
// 先逆序 as 再逆序 dfg --->sa gfd
// 最后整体逆序 dfg as
// void reverse(char *p)
// {
//     int len=strlen(p);
//     char temp=*p;
//     *p=*(p+len-1);
//     *(p+len-1)='\0';
//     if(len>2)
//     {
//         reverse(p+1);
//     }
//     *(p+len-1)=temp;
// }   

void reverse(char *sta,char *end)
{
    //assert(sta && end);
    while(sta<end)
    {
        char temp=*sta;
        *sta++=*end;
        *end--=temp;
    }
}
char * left_revolve(char *p,int n)
{

    int len=strlen(p);
    n%=len;
    reverse(p,p+n-1);
    reverse(p+n,p+len-1);
    reverse(p,p+len-1);
    return p;
}
void test2()
{
    char arr[100];
    int n;
    scanf("%s",arr);
    scanf("%d",&n);
    left_revolve(arr,n);
    puts(arr);
}
int main()
{
    test2();
    return 0;
}