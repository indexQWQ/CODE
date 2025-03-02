#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //sort(strs.begin(),strs.end());
        int len=strs.size();
        string ch=strs[0];
        for(int i=1;i<len;i++)
        {   
            int index=0;
            while(strs[i][index]==ch[index] && index<strs[i].size() && index<ch.size())
            {
                index++;
            }
            ch=ch.substr(0,index);
            //cout<<ch<<endl;
        }
        return ch;
    }
};

int main()
{
    Solution p;
    vector<string> strs={"flower","flow","flight"};
    cout<<p.longestCommonPrefix(strs)<<endl;
}