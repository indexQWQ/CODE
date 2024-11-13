#include <stdio.h>

int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 15;
    int left = 0, right = n - 1;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(arr[mid] < key)
        {
            left = mid + 1;
        }
        else if(arr[mid] > key)
        {
            right = mid - 1;    
        }
        else
        {
            printf("%d is found at index %d\n", key, mid);
            return 0;
        }
    }

    return 0;
}