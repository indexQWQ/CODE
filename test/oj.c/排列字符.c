#include <stdio.h>
#include <string.h>
#define all 100
// 递归思想：
// 递归是一种常用的解决排列问题的方法。
//我们可以从字符串的第一个字符开始，依次将其与后面的字符交换，
//然后递归地处理剩下的字符串。
// 基本情况：
// 当字符串的长度为1时，只有一个排列，即字符串本身。
// 递归步骤：
// 对于字符串的每一个字符，将其与第一个字符交换，然后递归地处理剩下的字符串。
// 递归结束后，需要将字符交换回原来的位置，以便进行下一次交换。
// 去重：
// 由于字符串中的字符是从小到大排列的，所以在递归过程中不需要考虑重复字符的问题
void sort(char *arr,int len)
{
    
}
int main()
{
    char arr[all]={0};
    scanf("%s",arr);
    int len=strlen(arr);
    //printf("%d",len);
    sort(arr,len);
    return 0;
}