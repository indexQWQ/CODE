#include <iostream>
using namespace std;

int main()
{
    int arr[5]={0},max=0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        if(arr[i]>max) max=arr[i];
    }
    cout<<max<<endl;
    return 0;
}