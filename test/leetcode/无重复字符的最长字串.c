#include <stdio.h>

int lengthOfLongestSubstring(char* s) 
{
    int max=0;
    while(*s!='\0')
    {
        int cout=0;
        char *p=s;
        int arr[250]={0};
        while(arr[(int)*p]==0 && *p!='\0')
        {
            char c=*p;
            arr[(int)c]++;
            //printf("%d\n",arr[(int)c]);
            cout++;
            p++;
        }
        //printf("________\n");
        if(max<cout)
        {
            max=cout;
        }
        s++;
    }
    return max;
}
int main()
{
    printf("%d\n",lengthOfLongestSubstring("abcdfgabc"));
    return 0;
}