#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=haystack.find(needle[0]);
        while(index<haystack.size())
        {
            for(int i=0;i<needle.size();i++)
            {
                if(haystack[index+i]!=needle[i])break;
                if(i==needle.size()-1)return index;
            }
            int ret=index+1;
            index=haystack.find(needle[0],ret);
        }
        return -1;
    }
};
int main()
{

    return 0;
}