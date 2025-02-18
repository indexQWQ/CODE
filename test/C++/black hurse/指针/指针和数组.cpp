#include <iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5};
    cout<<"第一个元素："<<arr[0]<<endl;
    int *p=arr;
    cout<<"第一个元素："<<p[0]<<endl;
    p++;
    cout<<"第二个元素："<<p[0]<<endl;
    for(int i=0;i<9;i++)
    cout<<*(p+i)<<endl;
    return 0;
}