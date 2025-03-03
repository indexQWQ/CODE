#include <iostream>
#include <string>
using namespace std;

//int compare(const string& s)const;
//int compare(const char* s)const;
int main()
{
    string str1="andex";
    string str2="index";
    if(str1.compare(str2)==0) cout<<"seem"<<endl;
    else if(str1.compare(str2)>0) cout<<"str1"<<endl;
    else cout<<"str2"<<endl;
    return 0;
}