#include <iostream>
using namespace std;

int main()
{
    int arr[3][4]={{100,100,100},{90,50,100},{60,70,80}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][3]+=arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<arr[i][3]<<endl;
    }
    return 0;
}