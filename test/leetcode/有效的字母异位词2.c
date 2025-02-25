#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    int arr[26]={0};
    for(int i=0;s[i]!=0;i++)
    {
        arr[s[i]-97]++;
    }
    for(int i=0;t[i]!=0;i++)
    {
        arr[t[i]-97]--;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=0)
            return false;
    }
    return true;
}

