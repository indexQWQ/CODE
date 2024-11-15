#include <stdio.h>

int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 15;
    int left = 0, right = n - 1;//定义左右index
    while(left <= right)
    {
        //int mid = (left + right) / 2;//如果left和right相加的和超过了整形的范围，则会溢出，再除以2，就不是我们想要的值了，所以要用long long
        int mid = left + (right - left) / 2;
        if(arr[mid] < key)//arr[mid]小于key 说明key在左边
        {
            left = mid + 1;
        }
        else if(arr[mid] > key)
        {
            right = mid - 1;//key在右边  
        }
        else
        {
            printf("%d is found at index %d\n", key, mid);
            return 0;
        }
    }

    return 0;
}