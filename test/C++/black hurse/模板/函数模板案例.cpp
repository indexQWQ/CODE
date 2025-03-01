#include <iostream>
#include <string>
using namespace std;

//不同类型的排序
template<class T>
void mysort(T* p,int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                T temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
}
template<class T>
void quicksort(T* p,int left,int right)
{
    if(left<right)
    {
        T povint=p[right];
        int i=left;
        int j=0;
        for(j=left;j<right;j++)
        {
            if(p[j]<povint)
            {
                T temp=p[i];
                p[i]=p[j];
                p[j]=temp;
                i++;
            }
        }
        T temp=p[i];
        p[i]=p[right];
        p[right]=temp;
        quicksort(p,left,i-1);
        quicksort(p,i+1,right);
    }
}
int main()
{
    char arr[7]="bcadfe";
    int arr1[10]={3,2,5,4,7,9,8,6,1,10};
    mysort<char>(arr,6);
    cout<<arr<<endl;
    quicksort<int>(arr1,0,9);
    for(int i:arr1)
    {
        cout<<i<<" ";
    }
    return 0;
}