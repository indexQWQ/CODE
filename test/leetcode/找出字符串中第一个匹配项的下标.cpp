#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int index=haystack.find(needle[0]);
//         while(index<haystack.size())
//         {
//             for(int i=0;i<needle.size();i++)
//             {
//                 if(haystack[index+i]!=needle[i])break;
//                 if(i==needle.size()-1)return index;
//             }
//             int ret=index+1;
//             index=haystack.find(needle[0],ret);
//         }
//         return -1;
//     }
// };


void getnext(string &s,vector<int>& v)
{
    v.reserve(s.size());
    int j=0;
    v[0]=0;
    for(int i=1;i<s.size();i++)
    {
        while(s[i]!=s[j] && j>0)j=v[j-1];
        if(s[i]==s[j])j++;
        v[i]=j;
    }
    
}
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()==0)return 0;
        vector<int> next;
        getnext(needle,next);
        int j=0;
        for(int i=0;i<haystack.size();i++)
        {
            while(haystack[i]!=needle[j]&&j>0)j=next[j-1];
            if(haystack[i]==needle[j])j++;
            if(j==needle.size())return i-needle.size()+1;
        }
        return -1;
    }
    
};
int main()
{

    return 0;
}