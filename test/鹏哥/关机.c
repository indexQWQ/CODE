#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[11]={0};
    //system("shutdown -s -t 60");
again:
    printf("关机倒计时60秒,如果叫爸爸就取消关机\n请叫:");
    scanf("%s",arr);
    
    if(strcmp(arr,"dad")==0)
    {
        printf("取消关机\n");
        //system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}
