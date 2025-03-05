#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string i;
    int k=0;
    cin>>k>>i;
    reverse(i.begin(),i.end());
    reverse(i.begin(),i.begin()+k);
    reverse(i.begin()+k,i.end());
    cout<<i<<endl;
    return 0;
}