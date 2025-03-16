#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int compare(string& s,int low,int high){
        while(low>=0 && high<s.size() && s[low]==s[high]){
            low--;
            high++;
        }
        return high-low-1;
    }
    string longestPalindrome(string s) {
        if(s.empty())return "";
        int max_len=1;
        string result;
        for(int i=0;i<s.size();i++){
            int len1=compare(s,i,i);
            int len2=compare(s,i,i+1);
            int len=max(len1,len2);
            if(len>max_len){
                max_len=len;
                int start=i-(len-1)/2;
                result=s.substr(start,len);
            }
        }
        if(max_len==1)
        {
            result.push_back(s[0]);
        }
        return result;
    }
};

int main()
{
    string s="qe";
    cout<<Solution().longestPalindrome(s)<<endl;
    return 0;
}