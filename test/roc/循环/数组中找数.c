int main ()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num = 17;
    int i;
    int sz=sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < sz; i++) 
    {
        if (arr[i] == num) 
        {
            printf("%d is found at index %d\n", num, i);
            break;
        }
    }
    if (i == 10) 
    {
        printf("%d is not found in the array\n", num);
    }
    return 0;
}