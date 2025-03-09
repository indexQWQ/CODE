#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        vector<int> v;
        v.resize(s.size());
        int j=0,max=0;
        v[0]=0;
        for(int i=1;i<(int)s.size();i++)
        {
            while(s[i]!=s[j] && j>0)j=v[j-1];
            if(s[i]==s[j])j++;
            v[i]=j;
        }
        for(int i:v){
            cout<<i<<" ";
            max=max>i?max:i;
        }
        return string(s.begin()+v[max-1],s.begin()+max+1);
    }
};

int main()
{
    string s="cbbd";
    cout<<Solution().longestPalindrome(s)<<endl;
    return 0;
}