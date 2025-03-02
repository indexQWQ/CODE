#include <iostream>
#include <string>
#include <stack>
using namespace std;

// class Solution {
// public:
//     bool isValid(string s) {
//         int flag1=-1,flag2=-1,flag3=-1;
//         while(1)
//         {
//             if(flag1+flag2+flag3==0)break;
//             size_t pos=s.find("[]");
//             if(pos!=string::npos)
//             {
//                 s.replace(pos,2,"");
//                 flag1=1;
//             }
//             else flag1=0;
//             size_t pos1=s.find("{}");
//             if(pos1!=string::npos)
//             {
//                 s.replace(pos1,2,"");
//                 flag2=1;
//             }
//             else flag2=0;
//             size_t pos2=s.find("()");
//             if(pos2!=string::npos)
//             {
//                 s.replace(pos2,2,"");
//                 flag3=1;
//             }
//             else flag3=0;
//             //cout<<s<<endl;
//         }
//         size_t pos=s.find("[]");
//         if(pos!=string::npos)
//         {
//             s.replace(pos,2,"");
//         }
//         size_t pos1=s.find("{}");
//         if(pos1!=string::npos)
//         {
//             s.replace(pos1,2,"");
//         }
//         size_t pos2=s.find("()");
//         if(pos2!=string::npos)
//         {
//             s.replace(pos2,2,"");
//         }
//         //cout<<s<<endl;
//         if(s.size()==0)
//         {
//             return true;
//         }
//         return false;
//     }
// };


//用栈
// push()：将元素压入栈顶。
// pop()：弹出栈顶元素。
// top()：查看栈顶元素（不弹出）。
// empty()：判断栈是否为空。
class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2==1)return false;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
                st.push(')');
            else if(s[i]=='[')
                st.push(']');
            else if(s[i]=='{')
                st.push('}');
            else if(st.empty() || st.top()!=s[i])
                return false;
            else
                st.pop();
        }
        return st.empty();
    }
};
int main()
{
    string s="{}{{}}";
    Solution p;
    p.isValid(s);
    return 0;
}