#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// class Solution {
// public:
//     string reverseWords(string s) {
//         reverse(s.begin(),s.end());
//         int odds=0;
//         int index=s.find(' ',odds);
//         while(index!=-1)
//         {
//             reverse(s.begin()+odds,s.begin()+index);
//             odds=index+1;
//             index=s.find(' ',odds);
//         }
//         reverse(s.begin()+odds,s.end());
//         int len=s.size();
//         for(int i=0;i<len-1;i++)
//         {
//             if(s[i]==' '&&s[i+1]==' '){
//                 s.erase(i,1);
//                 i--;
//                 len--;
//             }
//         }
//         if(s[0]==' ')
//         s.erase(0,1);
//         len=s.size()-1;
//         if(s[len]==' ')
//         s.erase(len,1);
//         return s;
//     }
// };
// int main()
// {
//     string s="a good   example";
//     cout<<"\""<<Solution().reverseWords(s)<<"\""<<endl;
//     return 0;
// }

//指针练习
class Solution {
public:
    string reverseWords(string s) {
        int slow=0;
        for(int fast=0;fast<(int)s.size();fast++)
        {
            if(s[fast]!=' ')
            {
                if(slow!=0)s[slow++]=' ';
                while(fast<(int)s.size() && s[fast]!=' ')
                {
                    s[slow++]=s[fast++];
                }
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
};
int main()
{
    string s="a good   example   ";
    cout<<"\""<<Solution().reverseWords(s)<<"\""<<endl;
    return 0;
}
// 版本二 双指针
// void removeExtraSpaces(string& s) {//去除所有空格并在相邻单词之间添加空格, 快慢指针。
//     int slow = 0;   //整体思想参考https://programmercarl.com/0027.移除元素.html
//     for (int i = 0; i < s.size(); ++i) { //
//         if (s[i] != ' ') { //遇到非空格就处理，即删除所有空格。
//             if (slow != 0) s[slow++] = ' '; //手动控制空格，给单词之间添加空格。slow != 0说明不是第一个单词，需要在单词前添加空格。
//             while (i < s.size() && s[i] != ' ') { //补上该单词，遇到空格说明单词结束。
//                 s[slow++] = s[i++];
//             }
//         }
//     }
//     s.resize(slow); //slow的大小即为去除多余空格后的大小。
// }