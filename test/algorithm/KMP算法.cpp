#include <iostream>
#include <string>
#include <vector>
using namespace std;
//解决字符串匹配问题

void getnext(vector<int>& next,string s)
{
    int j=0;//j前缀末尾
    next.resize(100);
    next[0]=0;
    for(int i=1;i<s.size();i++)//i后缀末尾
    {
        while(s[i]!=s[j] && j>0)
        {
            j=next[j-1];
        }
        if(s[i]==s[j])
        {
            j++;
        }
        next[i]=j;
    }
}
//初始化
//前后缀不相等
//前后缀相等
//更新next
int main()
{

    return 0;
}